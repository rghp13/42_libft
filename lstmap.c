/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:15:57 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/24 15:02:04 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	ptr = ft_lstnew(lst->content);
	tmp = lst;
	while (tmp)
	{
		ft_lstadd_back(&ptr, ft_lstnew(f(tmp->content)));
		tmp = tmp->next;
	}
	ft_lstclear(&lst, d);
	return (ptr);
}
