/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:07:56 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/11 14:04:33 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char cmp;
	unsigned char *src;
	size_t i;

	cmp = c;
	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (cmp == src[i])
		{
			return ((void *)src + i);
		}
		i++;
	}
	return (0);
}