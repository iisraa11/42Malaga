/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:52:04 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/16 10:50:04 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (i < size)
	{
		while (src[j] != '\0')
		{
			dst[j] = src[j];
			j++;
		}
	}
	else
	{
		while (j < size - 1)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}