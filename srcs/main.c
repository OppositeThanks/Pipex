/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperrin <lperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:18:50 by lperrin           #+#    #+#             */
/*   Updated: 2022/07/22 14:03:27 by lperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envv)
{
	if (argc != 5)
		return (/* error exit status = >128 */);
	ft_pipex(argv, envv);
	return (0);
}

void	ft_pipex(char **argv, char **envv)
{
	int		fd[2];
	pid_t	parent;

	pipe(fd);
	parent = fork();
	if (parent < 0)
		return (perror("Fork: "));
	if (!parent)
		ft_child_process(fd, argv, envv);
	else
	{
		parent = fork();
		if (parent < 0)
			return (perror("Fork: "));
		if (!parent)
			ft_parent_process(fd, argv, envv);
		else
		{
			close(fd[0]);
			close(fd[1]);
		}
	}
	waitpid(parent, NULL, 0);
}

void	ft_child_process(int *fd, char **argv, char **envv)
{
	int		f1;
	char	*path;
	char	**cmds;

	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
		return (perror("Pipex: "));
	dup2(f1, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[0]);
	close(f1);
	cmds = ft_cmds(argv[2]);
	path = ft_path_finder(ft_paths(envv), cmds[0]);
	if (execve(path, cmds, envv) == -1)
	{
		perror("Pipex: command not found");
		ft_free(cmds);
		free(path);
		exit(-1);
	}
}

void	ft_parent_process(int *fd, char **argv, char **envv)
{
	int		f2;
	char	*path;
	char	**cmds;

	f2 = open(argv[4], O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (f2 == -1)
		return (perror("Pipex: "));
	dup2(fd[0], STDIN_FILENO);
	dup2(f2, STDOUT_FILENO);
	close(fd[1]);
	close(f2);
	cmds = ft_cmds(argv[3]);
	path = ft_path_finder(ft_paths(envv), cmds[0]);
	if (execve(path, cmds, envv) == -1)
	{
		perror("Pipex: command not found");
		ft_free(cmds);
		free(path);
		exit(EXIT_FAILURE);
	}
}
