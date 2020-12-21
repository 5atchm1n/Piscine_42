/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 21:27:59 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/19 16:40:51 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int dst_l;

	dst_l = 0;
	while (dest[dst_l])
		++dst_l;
	while (*src)
	{
		dest[dst_l] = *src;
		src++;
		dst_l++;
	}
	dest[dst_l] = '\0';
	return (dest);
}
