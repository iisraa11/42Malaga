/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:30:01 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/16 19:39:13 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;
    char *chr;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (chr = (unsigned char *)&s[i]);
        i++;
    }
    return (NULL);
}