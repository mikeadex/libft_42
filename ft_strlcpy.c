/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:13:46 by madeleye          #+#    #+#             */
/*   Updated: 2023/11/30 12:20:08 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	i = 0;
	while (i < len_src && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dst[i] = '\0';
	}
	return (len_src);
}
