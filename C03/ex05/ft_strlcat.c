/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 13:05:14 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/19 17:07:48 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *s1)
{
	unsigned int i;

	i = 0;
	while (*s1 != '\0')
	{
		i++;
		s1++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_t;
	unsigned int dst_l;
	unsigned int src_l;

	len_t = 0;
	dst_l = 0;
	src_l = 0;
	while (dest[dst_l] != 0 && dst_l < size)
		dst_l++;
	while (src[src_l])
		src_l++;
	len_t = dst_l + src_l;
	if (dst_l == size)
		return (len_t);
	src_l = 0;
	while (*src && dst_l + src_l < size - 1)
	{
		dest[src_l + dst_l] = src[src_l];
		src_l++;
	}
	dest[src_l + dst_l] = '\0';
	return (len_t);
}
