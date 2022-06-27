/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:12:53 by eygenc            #+#    #+#             */
/*   Updated: 2021/11/04 19:12:57 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		count;
	int		di;

	count = 0;
	di = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[di] != '\0' && nb > 0)
	{
		dest[count] = src[di];
		count++;
		di++;
		nb--;
	}
	dest[count] = '\0';
	return (dest);
}
