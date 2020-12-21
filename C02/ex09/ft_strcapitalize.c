/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:44:53 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/17 17:57:16 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char *ret;

	ret = str;
	ft_strlowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 47) || (*str >= 58 && *str <= 64) ||
				(*str >= 91 && *str <= 96) || (*str >= 123 && *str <= 126))
		{
			if (*(str + 1) >= 97 && *(str + 1) <= 122)
				*(str + 1) = *(str + 1) - 32;
		}
		str++;
	}
	return (ret);
}
