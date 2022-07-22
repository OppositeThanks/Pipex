/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:38:44 by lperrin           #+#    #+#             */
/*   Updated: 2022/07/22 11:17:20 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

char	**ft_paths(char **envv);
char	**ft_cmds(char *cmd_j);
void	ft_pipex(char **envv, char **argv);
void	ft_child_process(int *fd, char **argv, char **envv);
void	ft_parent_process(int *fd, char **argv, char **envv);
void	ft_free(char **txt);
char	*ft_path_finder(char **paths, char *cmd);

#endif