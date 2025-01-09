/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:12:03 by gugomes-          #+#    #+#             */
/*   Updated: 2025/01/09 20:42:33 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error_exit(const char *message)
{
	perror(message);
	exit(EXIT_FAILURE);
}

void	free_array(char **array)
{
	size_t	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	*get_env(char *name, char **env)
{
	int		i;
	char	*found;

	i = 0;
	while (env[i])
	{
		found = ft_strnstr(env[i], name, ft_strlen(name));
		if (found && found[ft_strlen(name)] == '=')
			return (found + ft_strlen(name) + 1);
		i++;
	}
	return (NULL);
}

char	*get_command_path(char *cmd, char **env)
{
	int		i;
	char	**paths;
	char	*full_path;
	char	*temp;

	paths = ft_split(get_env("PATH", env), ':');
	if (!paths)
		return (cmd);
	i = 0;
	while (paths[i])
	{
		temp = ft_strjoin(paths[i], "/");
		full_path = ft_strjoin(temp, cmd);
		free(temp);
		if (full_path && access(full_path, F_OK | X_OK) == 0)
		{
			free_array(paths);
			return (full_path);
		}
		free(full_path);
		i++;
	}
	free_array(paths);
	return (cmd);
}

int	open_file(char *file, int out_exit)
{
	int	fd;

	if (out_exit == 0)
		fd = open(file, O_RDONLY, 0777);
	if (out_exit == 2)
		fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		perror("Error opening file");
	return (fd);
}
