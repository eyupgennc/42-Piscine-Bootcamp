/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:44:26 by eygenc            #+#    #+#             */
/*   Updated: 2021/11/13 15:44:37 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char	**strs, char	*sep)
{
	char	*arr;
	int		i;
	int		j;
	int		c;
	int		k;

	k = 0;
	i = 0;
	arr = (char *)malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			arr[k] = strs[i][j];
			j++;
			k++;
		}
		c = 0;
		while (sep[c] != '\0' && i < size - 1)
			arr[k++] = sep[c++];
		i++;
	}
	arr[k] = '\0';
	return (arr);
}
