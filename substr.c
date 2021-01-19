/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:50:19 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/18 13:35:58 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	rlen;
	char	*ptr;

	rlen = ft_strlen(s + start);
	if (rlen < len)
		len = rlen;
	if (!(ptr = malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_memcpy(ptr, s + start, len + 1);
	ptr[len] = '\0';
	return (ptr);
}
