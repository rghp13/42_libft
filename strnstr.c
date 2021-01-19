/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:18:02 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/19 14:44:59 by rponsonn         ###   ########.fr       */
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int nlen;

	i = 0;
	nlen = ft_strlen(needle);
	if (needle[0] == '\0')
		return (haystack);
	while (i <= len - nlen)
	{
		if (haystack[i] == needle[0])
			if (ft_str_check(haystack + i, needle, nlen))
				return (haystack + i);
		i++;
	}
	return (0);
}
