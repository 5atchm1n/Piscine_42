/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:13:34 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/27 14:45:02 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_is_sep(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int			ft_word_len(char *str, char *sep)
{
	int l;

	l = 0;
	while (str[l] != '\0' && ft_is_sep(str[l], sep) == 0)
	{
		l++;
	}
	return (l);
}

int			ft_count_words(char *str, char *sep)
{
	int count;
	int i;

	count = 0;
	i = 0;
	if (*sep == '\0')
		return (1);
	while (str[i] != '\0')
	{
		while (ft_is_sep(str[i], sep) == 0)
		{
			if (ft_is_sep(str[i + 1], sep) == 1)
				count++;
			i++;
		}
		i++;
	}
	return (count);
}

char		*ft_set_string(char *str, int n)
{
	char	*ret;
	int		i;

	i = 0;
	if (!(ret = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		ret[i] = str[i];
		i++;
	}
	ret[n] = '\0';
	return (ret);
}

char		**ft_split(char *str, char *charset)
{
	char	**split;
	int		size;
	int		n;
	int		j;
	int		l;

	size = ft_count_words(str, charset);
	if (!(split = malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	n = 0;
	j = 0;
	split[size] = 0;
	while (size--)
	{
		l = 0;
		while (ft_is_sep(*str, charset) == 1)
			str++;
		while (*str && ft_is_sep(*str, charset) == 0 && (++str || 1))
			l++;
		j = ft_word_len(str - l, charset);
		split[n] = ft_set_string(str - l, j);
		n++;
		str++;
	}
	return (split);
}
