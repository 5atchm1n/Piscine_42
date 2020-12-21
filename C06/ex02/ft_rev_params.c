/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 14:40:22 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/23 21:53:43 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int n;

	n = 0;
	i = argc - 1;
	if (argc == 1)
		return (0);
	while (i > n)
	{
		ft_print(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
