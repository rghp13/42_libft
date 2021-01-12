/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:47:16 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/11 14:45:40 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	size_t i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
int main()
{
	char arr[] = "Hello World";
	char arr1[] = "Hello World";
	int n;
	int res;
	n = 10;
	res = ft_memcmp(arr, arr1, n);
	printf("%d\n", res);
	res = memcmp(arr, arr1, n);
	printf("%d\n", res);
	return (0);
}