/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: xintan <xintan@student.42.fr>              +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2026/06/12 22:25:00 by xintan            #+#    #+#             */
/* Updated: 2026/06/12 22:25:00 by xintan           ###   ########.fr       */
/* */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
