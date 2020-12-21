/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:24:58 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/20 15:59:26 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ve(int n)
{
	if (n > 2)
	{
		ft_ve(n / 2);
		n = n % 2;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	ret;
	int	i;

	ret = 0;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			i++;
		str++;
	}
	while (*str != '\0' && *str >= 48 && *str <= 57)
	{
		ret = ret * 10 + *str - 48;
		str++;
	}
	if (ft_ve(i) == 1)
		ret = -ret;
	return (ret);
}
