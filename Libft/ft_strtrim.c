/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:26:29 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/30 18:22:24 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*substr;
	size_t	i;
	size_t	j;
	size_t	sub_size;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == NULL)
		ft_strdup("");
	j = ft_strlen(s1) - 1;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	sub_size = j - i + 1 + 1;
	substr = malloc(sub_size);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s1 + i, sub_size);
	return (substr);
}
/*
   sub_size = One 1 for the length
   of the substr and the other 1 for '\0'
*/