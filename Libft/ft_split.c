/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:36:11 by isrguerr          #+#    #+#             */
/*   Updated: 2024/09/30 19:26:46 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	1) Contar palabras o tokens. "hola" "." "!";
	2) Reservar memoria para las palabras en un array de arrays;
	3) Reservar memoria a cada memoria de los punteros para poder copiar los caracteres;
	4) El array tiene que acabar en un puntero NULL
*/

/*
	RETURN
	Array de arrays.
	Nulo si la reserva de memoria falla

	INPUT
	s: String que vamos a separar
	c: Caracter delimitador.
*/

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		while (str[i] != '\0' && str[i] != c)
			i++;
		count++;
	}
	return (count);
}

static char	*save_words(char const *str, char c)
{
	size_t	i;
	size_t  start;
    size_t  str_size;
    char *word;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
        start = i;
		while (str[i] != '\0' && str[i] != c)
			i++;
        str_size = i - start + 1;
        word = malloc(str_size);
        ft_strlcpy(word, str + start, str_size);
	}
    return (word);
}

char	**ft_split(char const *str, char c)
{
	size_t count;
	char **strings;
	size_t i;

	i = 0;
	count = count_words(str);
	strings = malloc(sizeof(char *) * count);
	while (strings[i] != '\0')
	{
		while ()
	}
}