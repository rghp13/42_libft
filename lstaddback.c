/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstaddback.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:38:03 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/23 16:41:01 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lastadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (lst[0] == NULL || new == NULL)
		return ;
	ptr = ft_lstlast(lst[0]);
	ptr->next = new;
}