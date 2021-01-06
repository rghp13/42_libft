/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:32:15 by rponsonn          #+#    #+#             */
/*   Updated: 2021/01/05 16:46:02 by rponsonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void    ft_bzero(void *str, size_t n)
{
    unsigned char *ptr;
    size_t i;

    ptr = str;
    i = 0;

    while (i < n)
    {
        *ptr++ = '\0';
        i++;
    }
    return;
}