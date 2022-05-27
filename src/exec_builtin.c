/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_builtin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:17:09 by idavoli-          #+#    #+#             */
/*   Updated: 2022/05/26 23:28:34 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_shell.h"

int	exec_builtin(char **cmd)
{
	if (!ft_strncmp(*cmd, "echo", 5))
		echo(cmd);
	if (!ft_strncmp(*cmd, "pwd", 4))
		pwd();
	if (!ft_strncmp(*cmd, "cd", 3))
		cd(cmd[1]);
	return (0);
}