/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:36:24 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/17 18:19:35 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	char			*ret;

	ret = dest;
	l = ft_strlen(src);
	size = size - 1;
	while (*src != '\0' && size > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	ret[dest - ret] = '\0';
	dest = ret;
	return (l);
}
