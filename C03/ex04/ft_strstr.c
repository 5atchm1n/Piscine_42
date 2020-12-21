/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 00:15:37 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/18 21:57:40 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *string)
{
	int i;

	i = 0;
	while (*string != '\0')
	{
		i++;
		string++;
	}
	return (i);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	while (*s1 != 0 && *s1 == *s2 && ++i <= n)
	{
		s1++;
		s2++;
	}
	diff = *s1 - *s2;
	return (diff);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*buffer;
	int		len;

	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			buffer = str;
			if (ft_strncmp(buffer, to_find, len - 1) == 0)
				return (buffer);
		}
		str++;
	}
	return (0);
}
