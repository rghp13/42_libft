/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:06:48 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/11 16:24:08 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//first calc length of source, if the source is smaller than the destination transfer data, be sure to null terminate then return strlen of src
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t retsize;

	retsize = ft_strlen(src);

	if (dstsize > retsize + 1)
	{
		ft_memcpy(dst, src, retsize + 1);
	}
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (retsize);
}