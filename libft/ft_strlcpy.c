/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:52:04 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/13 19:53:08 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    while (src[i] != '\0')
        i++;
    if (size < 0)
    {
        j = 0;
        while(j < size - 1 && src[i] != '\0')
        {
            dst[j] = src[j];
            j++;
        }
        dst[j] = '\0';
    }
    return (i);
}