/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:29:06 by eygenc            #+#    #+#             */
/*   Updated: 2021/11/06 13:29:46 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc > 0)
	{
		while (argv[0][c] != '\0')
		{
			write(1, &argv[0][c], 1);
			c++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
