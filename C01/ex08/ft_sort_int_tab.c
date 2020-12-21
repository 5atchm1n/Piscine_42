/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:53:08 by sshakya           #+#    #+#             */
/*   Updated: 2020/08/10 19:17:38 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int c;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		c = i + 1;
		if (tab[i] > tab[c])
		{
			ft_swap(&tab[i], &tab[c]);
			i = -1;
		}
		i++;
	}
}
