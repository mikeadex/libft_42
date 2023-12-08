/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:15:19 by madeleye          #+#    #+#             */
/*   Updated: 2023/12/08 19:43:07 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function erazes data in the b bytes of mempory starting at 
 * --- location pointed to by s
 * bzero writes zeros to the memory of s.
 * input: void pointer s, size_t n
 * output: void.... i.e none
 * parameters:
 * 		i: to iterate in while loop
 * 		unsiged char pointer s: to cast void char to 
 * 		------unsiged char. This enables calculations etc
 */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*sptr;

	i = 0;
	sptr = (unsigned char *)s;
	while (i < n)
	{
		sptr[i] = 0;
		i++;
	}
}
