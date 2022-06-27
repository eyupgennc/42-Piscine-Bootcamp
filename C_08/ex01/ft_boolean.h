/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eygenc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:50:35 by eygenc            #+#    #+#             */
/*   Updated: 2021/11/13 15:50:45 by eygenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum t_bool{
	false = 0,
	true = 1
}	t_bool;

# define EVEN(n) (n % 2 == 0)

# define FALSE		0

# define TRUE		1

# define EVEN_MSG	"I have an even number of arguments.\n"

# define ODD_MSG	"I have an odd number of arguments.\n"

# define SUCCESS	0

#endif
