/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:03:41 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/17 15:41:10 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = ft_strlen(s) - 1;
    while (s[i] != '\0')
    {

        if (s[i] == c)
            return ((unsigned char *)&s[i]);
        i--;
    }
    return (NULL);
}