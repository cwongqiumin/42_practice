/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* ft_print_combn.c                                   :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: xintan <xintan@student.42.fr>              +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2026/06/13 00:45:00 by xintan            #+#    #+#             */
/* Updated: 2026/06/13 00:45:00 by xintan           ###   ########.fr       */
/* */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(int *tab, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (tab[0] != (10 - n))
	{
		write(1, ", ", 2);
	}
}

void	ft_generate_comb(int n, int index, int start, int *tab)
{
	if (index == n)
	{
		ft_print_array(tab, n);
		return ;
	}
	while (start <= 9)
	{
		tab[index] = start;
		ft_generate_comb(n, index + 1, start + 1, tab);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n > 0 && n < 10)
	{
		ft_generate_comb(n, 0, 0, tab);
	}
}
