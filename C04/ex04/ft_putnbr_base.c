/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 22:38:24 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/22 23:45:56 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (1);
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_print_base(long nbr, int len, char *base)
{
	long n;

	n = nbr;
	if (n >= len)
	{
		nbr = nbr / len;
		ft_print_base(nbr, len, base);
	}
	ft_putchar(base[n % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;

	len = ft_strlen(base);
	n = (long)nbr;
	if (len <= 1 || ft_check_base(base) != 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	ft_print_base(n, len, base);
}
