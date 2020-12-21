/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:03:27 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/11 12:14:49 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int n;

	n = 1;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			n = 0;
		str++;
	}
	return (n);
}