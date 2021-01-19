/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:32:47 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/18 17:17:14 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_set(const char s1, const char *set)
{
	int i;
	int flag;

	flag = 0;
	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			flag++;
		i++;
	}
	return (flag);
}

int		ft_cut_start(const char *s1, const char *set)
{
	int i;

	i = 0;
	while (ft_check_set(s1[i], set))
	{
		i++;
	}
	return (i);
}

int		ft_cut_end(const char *s1, const char *set)
{
	int i;

	i = ft_strlen(s1);
	i--;
	while (ft_check_set(s1[i], set))
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		k;
	char	*ptr;

	i = ft_cut_start(s1, set);
	k = ft_cut_end(s1, set);
	k++;
	if (!(ptr = malloc(sizeof(char) * (k - i) + 1)))
		return (NULL);
	ptr = ft_memcpy(ptr, s1 + i, k - i);
	ptr[k - i] = '\0';
	return (ptr);
}
