/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:22:00 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/10 19:44:01 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int strl;

	i = 0;
	strl = size - 1;
	while (i <= strl)
	{
		ft_swap(&tab[i], &tab[strl]);
		i++;
		strl--;
	}
}
