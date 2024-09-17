/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:53:41 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/16 14:26:11 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
    size_t dstlen;
	size_t	i;

    srclen = ft_strlen(src);
    dstlen = ft_strlen(dst);
	i = 0;
	if (size > 0)
	{
		while ((dstlen + i) < size - 1 && src[i] != '\0')
		{
		    dst[dstlen + i] = src[i];
		    i++;
		}
		dst[dstlen + i] = '\0';
	}
	return (srclen + dstlen);
}