/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:15:48 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/11 12:56:39 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int n;

	n = 1;
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
			n = 0;
		str++;
	}
	return (n);
}