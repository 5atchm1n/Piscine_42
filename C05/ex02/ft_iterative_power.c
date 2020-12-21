/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 23:53:23 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/23 17:38:34 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int p;

	i = 0;
	p = 1;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (i < power)
	{
		p = p * nb;
		i++;
	}
	return (p);
}
