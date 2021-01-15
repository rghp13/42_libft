/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:34:38 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/14 14:47:10 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char str)
{
	int flag;

	flag = 0;
	if (str == ' ')
		flag = 1;
	else if (str >= '\t' && str <= '\r')
		flag = 1;
	return (flag);
}

int		ft_atoi(const char *str)
{
	long int	num;
	int			i;
	int			neg;

	i = 0;
	neg = 0;
	num = 0;
	while(ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (10 * num) + (str[i] - '0');
		i++;
	}
	if (neg % 2)
		num = -num;
	return (num);
}