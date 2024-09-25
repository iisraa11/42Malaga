/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:20:36 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/25 18:43:46 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *s;
	unsigned char *d;
	size_t i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d > s)
		while(n-- < 0)
			d[n] = s[n];
	else 	
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}