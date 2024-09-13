/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:20:36 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/13 15:27:42 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;
    unsigned char *temp;
    size_t i;
    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        if (d[i] == s[i])
            temp[i] = s[i];
        d[i] = s[i];
        i++;
    }
    temp = dest; 
    return (dest);
}



