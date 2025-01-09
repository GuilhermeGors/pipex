/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:38:24 by gugomes-          #+#    #+#             */
/*   Updated: 2025/01/09 20:51:23 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include "./libft/libft.h"

void	error_exit(const char *message);
void	free_array(char **array);
char	*get_command_path(char *cmd, char **env);
int		open_file(char *file, int out_exit);
char	*get_env(char *name, char **env);

#endif