/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:03:41 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/17 12:01:31 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;
    char *chr;

    i = ft_strlen(s) - 1;
    while (s[i])
    {

        if (s[i] == c)
            return (chr = (unsigned char *)&s[i]);
        i--;
    }
    return (NULL);
}