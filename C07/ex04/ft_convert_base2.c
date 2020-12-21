/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:13:12 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/26 15:49:39 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char *str, char *base, int len);
char	*ft_strdup(char *str);
int		ft_strlen(char *str);

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

char	*str_to_end(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	str[i] = c;
	str[i + 1] = '\0';
	return (str);
}

void	ft_set_return(long nbr, int len, char *base, char *str_f)
{
	long	n;
	int		i;

	n = nbr;
	i = 0;
	if (n < 0)
	{
		str_f[0] = '-';
		str_f[1] = '\0';
		n = -n;
	}
	if (n >= len)
	{
		nbr = nbr / len;
		ft_set_return(nbr, len, base, str_f);
	}
	str_to_end(str_f, base[n % len]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ret;
	char	str_f[34];
	int		int_value;
	int		len_bt;
	int		len_bf;

	len_bt = ft_strlen(base_to);
	len_bf = ft_strlen(base_from);
	if ((ft_check_base(base_from) || ft_check_base(base_to)) != 0)
		return (0);
	if (len_bt <= 1 || len_bf <= 1)
		return (0);
	str_f[0] = '\0';
	int_value = ft_atoi_base(nbr, base_from, len_bf);
	ft_set_return(int_value, len_bt, base_to, str_f);
	ret = ft_strdup(str_f);
	return (ret);
}
