/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:00:47 by eygenc            #+#    #+#             */
/*   Updated: 2021/10/31 14:35:52 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	index;
	int	swap;

	start = 0;
	index = size - 1;
	while (start < (size / 2))
	{
		swap = tab[start];
		tab[start] = tab[index];
		tab[index] = swap;
		index--;
		start++;
	}
}
