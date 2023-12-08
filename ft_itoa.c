/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:07:58 by madeleye          #+#    #+#             */
/*   Updated: 2023/12/07 11:07:10 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Allocates memory with malloc and returns a string
 * input: int n
 * retuens: string repesenting the integer recieved
 * parameterts:
 * 		length: to retun the length of input int n
 * 		num: similar to n.
 */
#include "libft.h"

static char	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static void	fill_string_with_number(char *str, long num, int length)
{
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	str[length] = '\0';
	while (num != 0)
	{
		length--;
		str[length] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	num;

	num = n;
	length = get_num_length(n);
	str = malloc(length + 1);
	if (str == NULL)
		return (NULL);
	fill_string_with_number(str, num, length);
	return (str);
}
