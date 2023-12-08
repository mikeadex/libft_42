/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:21:54 by madeleye          #+#    #+#             */
/*   Updated: 2023/11/30 14:18:38 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	if (dst == NULL && size == 0)
		return (0);
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size <= len_dst)
	{
		return (len_src + size);
	}
	i = 0;
	while (src[i] && (len_dst + i) < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (len_dst + i < size)
	{
		dst[len_dst + i] = '\0';
	}
	return (len_dst + len_src);
}
