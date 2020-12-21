/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:58:05 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/22 20:51:26 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_check_base(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || (str[i] >= 9 && str[i] <= 13) ||
				str[i] == 32)
			return (1);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_base_int(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int base_len;
	int res;
	int n;

	n = 1;
	i = 0;
	res = 0;
	base_len = ft_strlen(base);
	if (ft_check_base(base) != 0 || base_len <= 1)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n *= (-1);
		i++;
	}
	while (str[i] && ft_base_int(base, str[i]) >= 0)
	{
		res = (base_len * res) + ft_base_int(base, str[i]);
		i++;
	}
	return (res * n);
}
