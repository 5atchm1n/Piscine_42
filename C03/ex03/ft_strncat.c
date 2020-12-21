/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 23:54:49 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/19 16:56:32 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dst_l;
	unsigned int	i;

	i = 0;
	dst_l = 0;
	while (dest[dst_l])
	{
		dst_l++;
	}
	while (src[i] && i < nb)
	{
		dest[dst_l] = src[i];
		dst_l++;
		i++;
	}
	dest[dst_l] = '\0';
	return (dest);
}
