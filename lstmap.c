/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:15:57 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/28 16:35:12 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	ptr = ft_lstnew((*f)(lst->content));
	tmp = lst;
	while (tmp)
	{
		ft_lstadd_back(&ptr, ft_lstnew((*f)(tmp->content)));
		tmp = tmp->next;
	}
	if (d)
		ft_lstclear(&lst, d);
	return (ptr);
}
