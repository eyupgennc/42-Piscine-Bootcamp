/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:06:43 by eygenc            #+#    #+#             */
/*   Updated: 2021/10/28 15:06:57 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int input)
{
	if (input == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		input = 147483648;
	}
	if (input < 0)
	{
		ft_putchar('-');
		input *= -1;
	}
	if (input < 10)
	{
		ft_putchar(input + 48);
		return ;
	}
	else
		ft_putnbr(input / 10);
	ft_putnbr(input % 10);
}
