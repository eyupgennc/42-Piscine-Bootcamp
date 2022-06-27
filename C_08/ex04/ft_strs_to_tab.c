/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:28:25 by eygenc            #+#    #+#             */
/*   Updated: 2021/11/13 17:28:41 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_str_len(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strdup(char *str)
{
	int		c;
	char	*dest;

	c = 0;
	dest = (char *)malloc(sizeof(char) * ft_str_len(str) + 1);
	if (dest == NULL)
		return (0);
	while (str[c] != '\0')
	{
		dest[c] = str[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_str	*array;

	ac = ac + 0;
	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (array == NULL)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		array[index].size = ft_str_len(av[index]);
		array[index].str = av[index];
		array[index].copy = ft_strdup(av[index]);
		index++;
	}
	array[index] = (struct s_stock_str){0, 0, 0};
	return (array);
}
