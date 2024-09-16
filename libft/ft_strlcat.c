/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:53:41 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/14 10:16:47 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    while (dst[i] != '\0')
        i++;
    while (j < size - 1 && src[i] != '\0')
    {
        dst[i] = src[j];
        j++;
    }
    

}