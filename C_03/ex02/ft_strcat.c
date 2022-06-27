/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:03:56 by eygenc            #+#    #+#             */
/*   Updated: 2021/11/04 19:03:57 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		count;
	int		di;

	count = 0;
	di = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[di] != '\0')
	{
		dest[count] = src[di];
		count++;
		di++;
	}
	dest[count] = '\0';
	return (dest);
}
