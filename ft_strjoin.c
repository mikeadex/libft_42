/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:09:57 by madeleye          #+#    #+#             */
/*   Updated: 2023/11/30 14:01:28 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	total_len;
	char	*new_str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_len = len_s1 + len_s2;
	if (!s1 || !s2)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1, len_s1 + 1);
	ft_memcpy(new_str + len_s1, s2, len_s2 + 1);
	new_str[total_len] = '\0';
	return (new_str);
}
