/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:39:22 by eygenc            #+#    #+#             */
/*   Updated: 2021/10/31 14:39:24 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	swap;

	start = 0;
	while (start < (size - 1))
	{
		if (tab[start] > tab[start + 1])
		{
			swap = tab[start];
			tab[start] = tab[start + 1];
			tab[start + 1] = swap;
			start = 0;
		}
		else
			start++;
	}
}
