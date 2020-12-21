/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:58:13 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/11 13:08:02 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int n;

	n = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
			n = 0;
		str++;
	}
	return (n);
}
