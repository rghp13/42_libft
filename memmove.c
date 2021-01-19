/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:39:19 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/19 14:41:50 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			i;

	from = src;
	to = dst;
	i = 0;
	if (dst > src)
	{
		while (i < len)
		{
			to[len - 1] = from[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			to[i] = from[i];
			i++;
		}
	}
	return (dst);
}
