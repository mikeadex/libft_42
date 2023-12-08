/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:52:22 by madeleye          #+#    #+#             */
/*   Updated: 2023/12/08 19:42:05 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *Scans initial n bytes of memory area pointed by s to first 
 *the first instance of c
 *input:void pointer to string s, int c, n.
 *retrns pointer to the matching byte or null if c does not occur
 *parameters: 	unsigned char pointer: to cast void s to char s
 *		size_t i: to iterate through the while loop.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			i;

	i = 0;
	ptr_s = (unsigned char *)s;
	while (i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
		{
			return (&ptr_s[i]);
		}
		i++;
	}
	return (NULL);
}
