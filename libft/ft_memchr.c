/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:47:33 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/17 13:02:47 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned int i;
    unsigned char *str;

    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == c)
            return ((void *)&str[i]);
        i++;
    }
    return (NULL);
}