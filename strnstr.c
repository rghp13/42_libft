/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:18:02 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/24 16:44:00 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_check(const char *haystack, const char *needle, int nlen)
{
	int i;

	i = 0;
	while (haystack[i] == needle[i] && i < nlen)
	{
		i++;
	}
	if (i == nlen)
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *haystack, const char *n, size_t len)
{
	size_t	i;
	size_t	nlen;

	i = 0;
	nlen = ft_strlen(n);
	if (n[0] == '\0')
		return ((char *)haystack);
	while (i <= len - nlen)
	{
		if (haystack[i] == n[0])
			if (ft_str_check(haystack + i, n, nlen))
				return ((char *)haystack + i);
		i++;
	}
	return (0);
}
