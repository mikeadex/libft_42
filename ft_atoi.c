/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:06:33 by madeleye          #+#    #+#             */
/*   Updated: 2023/12/08 19:41:27 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function converts the INITIAL portion of the string (pointed to) to int
// input: a coonst char pointer
// output: an int
// parameters: 	i = to iterate through while look
//  		sign = to set (-)||(-) sign
//  		result = to store result after conversion of char to int. 

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	sign;
	long	result;

	i = 0;
	result = 0;
	sign = 1;
	while ((nptr[i] == 32) || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
