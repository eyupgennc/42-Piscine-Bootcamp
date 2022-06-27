/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:15:09 by eygenc            #+#    #+#             */
/*   Updated: 2021/11/06 19:15:28 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int		count;

	count = 0;
	while (s1[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (s1[count] - s2[count]);
}

int	main(int argc, char **argv)
{
	int		count;
	char	*swap;

	count = 1;
	swap = 0;
	while (count < argc - 1)
	{
		if (count < argc && ft_strcmp(argv[count], argv[count + 1]) > 0)
		{
			swap = argv[count];
			argv[count] = argv[count + 1];
			argv[count + 1] = swap;
			count = 0;
		}
		count++;
	}
	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		count++;
	}
}
