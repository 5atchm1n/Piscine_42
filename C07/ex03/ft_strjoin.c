/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:12:38 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/26 20:27:45 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_len_total(int size, char **strs, char *sep)
{
	int j;
	int total;

	if (size <= 0)
		return (0);
	j = 0;
	total = 0;
	while (*strs && j < size)
	{
		total = total + ft_strlen(*strs);
		strs++;
		j++;
	}
	j = 0;
	j = ft_strlen(sep);
	total = total + (j * (size - 1));
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*join;

	i = 0;
	len = ft_len_total(size, strs, sep);
	if (!(join = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	join[0] = '\0';
	if (size <= 0)
		return (join);
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		i++;
		if (i < size)
			ft_strcat(join, sep);
	}
	return (join);
}
