/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_aps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idavoli- <idavoli-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:02:36 by idavoli-          #+#    #+#             */
/*   Updated: 2022/03/20 21:02:49 by idavoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_count_aps(const char **s)
{
	while (**s == 39)
		(*s)++;
	if (**s)
	{
		while (**s != 39 && **s)
		(*s)++;
		(*s)++;
	}
}
