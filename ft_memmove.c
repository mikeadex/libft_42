/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:28:50 by madeleye          #+#    #+#             */
/*   Updated: 2023/11/21 12:10:42 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dst = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (!ptr_src || !ptr_dst)
		return (NULL);
	if (ptr_src < ptr_dst)
	{
		i = n;
		while (i-- > 0)
			ptr_dst[i] = ptr_src[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
