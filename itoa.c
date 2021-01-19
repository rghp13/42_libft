/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:21:06 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/19 17:11:10 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_arr2str(char *arr, int neg, int max)
{
	char	*ptr;
	int		i;
	int		c;

	i = 0;
	c = max;
	if (!(ptr = malloc(sizeof(char) * max + neg)))
		return (NULL);
	if (neg)
		ptr[i++] = '-';
	while (c >= 0)
	{
		ptr[i++] = arr[c--];
	}
	ptr[i] = '\0';
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*ptr;
	char		arr[12];
	int			i;
	int			neg;

	num = (long int)n;
	i = 0;
	neg = 0;
	if (num < 0)
	{
		num = -num;
		neg = 1;
	}
	if (num == 0)
		arr[i] = '0';
	while (num > 0)
	{
		arr[i++] = (num % 10) + ASCII;
		num /= 10;
	}
	ptr = ft_arr2str(arr, neg, i);
	return (ptr);
}
