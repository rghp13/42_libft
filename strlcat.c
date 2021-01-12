/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:53:27 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/12 17:47:23 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
//make function that calculates the space used in both the src and dest
//if destination is equal to max size do nothing and return dest and source
//if the source is smaller than the difference between the maximum space and the used space
//append the data to the end.
//if src is equal or bigger
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
	size_t dstlen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (srclen == 0)
		return (dstlen);
	if (dstsize == dstlen)
		return (srclen + dstsize);
	else if (srclen < dstsize - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, dstsize - dstlen);
		dst[dstsize - 1] = '\0';
	}
	return(srclen + dstlen);
}