/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:37:15 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/15 14:28:33 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *str, int c, size_t len)
{
	unsigned char copy;
	unsigned char *ptr;
	size_t i;

	copy = c;
	i = 0;
	ptr = str;

	while (i < len)
	{
		*ptr++ = copy;
		i++;
	}
	return (str);
}
int main()
{
	char str[13];
	int z;

	z = 13;
	strcpy(str, "Hello World!");
	puts(str);
	ft_memset(str, 'q', z);
	puts(str);
	strcpy(str, "Hello World!");
	puts(str);
	memset(str, '$', z);
	puts(str);
	return (0);
}
// calc length of string, if smaller than len find out the edge case situation, check how to deal with 0. once dealt with copy c len amount of times then return str
