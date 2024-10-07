/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:41:34 by isrguerr          #+#    #+#             */
/*   Updated: 2024/10/01 12:09:47 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_elements, size_t size)
{
	void	*ptr;

	ptr = malloc(n_elements * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n_elements * size);
	return (ptr);
}
