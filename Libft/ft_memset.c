/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:41:03 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/28 18:08:47 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	i = 0;

	unsigned char *p;

	p = (unsigned char *)s;

	while (i < n)
	{
		p[i] = c;
		i++;
	}

	s = p;
	return (s);
}