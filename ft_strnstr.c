/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:20:21 by madeleye          #+#    #+#             */
/*   Updated: 2023/11/23 07:31:49 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	if (!little || !*little)
		return ((char *)big);
	if (big == NULL && len == 0)
		return (NULL);
	i = 0;
	len_little = ft_strlen(little);
	while (big[i] && i + len_little <= len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
