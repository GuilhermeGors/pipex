/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:39:07 by gugomes-          #+#    #+#             */
/*   Updated: 2025/01/09 20:22:40 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	handle_error(char **args, char *message, int exit_code);
static void	execute_command(char *cmd, char **env);
static void	child_process(char **argv, int pipe_fd[2], char **env);
static void	parent_process(char **argv, int pipe_fd[2], char **env);

static void	handle_error(char **args, char *message, int exit_code)
{
	ft_putstr_fd(message, 2);
	if (args && args[0])
		ft_putstr_fd(args[0], 2);
	free_array(args);
	exit(exit_code);
}

static void	execute_command(char *cmd, char **env)
{
	char	**args;
	char	*path;

	args = ft_split(cmd, ' ');
	if (!args || !args[0])
		handle_error(args, "ERROR: command not found\n", 127);
	path = get_command_path(args[0], env);
	if (!path)
		handle_error(args, "ERROR: command not found: ", 127);
	if (execve(path, args, env) == -1)
		handle_error(args, "execve failed in execute_command", 127);
	free_array(args);
}

static void	child_process(char **argv, int pipe_fd[2], char **env)
{
	int	fd_input;

	fd_input = open_file(argv[1], 0);
	if (fd_input == -1)
	{
		perror("open failed in child process");
		exit(1);
	}
	dup2(fd_input, STDIN_FILENO);
	dup2(pipe_fd[1], STDOUT_FILENO);
	close(fd_input);
	close(pipe_fd[1]);
	execute_command(argv[2], env);
}

static void	parent_process(char **argv, int pipe_fd[2], char **env)
{
	int	fd_output;

	fd_output = open_file(argv[4], 2);
	if (fd_output == -1)
	{
		perror("open failed in parent process");
		exit(1);
	}
	dup2(pipe_fd[0], STDIN_FILENO);
	dup2(fd_output, STDOUT_FILENO);
	close(fd_output);
	close(pipe_fd[0]);
	execute_command(argv[3], env);
}

int	main(int argc, char **argv, char **env)
{
	int		fd[2];
	pid_t	child_pid;

	if (argc != 5)
		error_exit("Invalid number of arguments");
	if (pipe(fd) == -1)
	{
		perror("pipe failed in main");
		exit(1);
	}
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork failed in main");
		exit(1);
	}
	if (child_pid == 0)
	{
		close(fd[0]);
		child_process(argv, fd, env);
	}
	close(fd[1]);
	parent_process(argv, fd, env);
	return (0);
}
