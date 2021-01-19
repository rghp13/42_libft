/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:44:28 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/19 14:33:15 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	i = 0;
	to = dst;
	from = src;
	while (i < n || *from != (unsigned char)c)
	{
		*to++ = *from++;
		i++;
	}
	if (*from == (unsigned char)c)
	{
		*to++ = *from++;
		return (to);
	}
	return (0);
}
