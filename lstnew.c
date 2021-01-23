/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:34:46 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/23 12:57:39 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;
	void	*cptr;

	if (!(ptr = malloc(sizeof(t_list))))
		return (NULL);
	cptr = ft_strdup(content);
	ptr->content = cptr;
	ptr->next = NULL;
	return (ptr);
}
