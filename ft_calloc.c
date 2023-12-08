/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:27:24 by madeleye          #+#    #+#             */
/*   Updated: 2023/12/07 10:57:55 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Allocates memory for an arrayof nmemb element of size bytes
 * intpus: nmemb, size
 * returns: pointer to the allocated memory.
 * paramenter: 		
 * 		pointer: to assign and retuen memory allocated
 * 		max_size: to handle potential cases of very large value to manage overflow
 */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	max_size;

	max_size = (size_t) - 1;
	if (size != 0 && nmemb > max_size / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
