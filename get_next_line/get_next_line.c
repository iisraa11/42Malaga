/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:33:47 by isrguerr          #+#    #+#             */
/*   Updated: 2024/10/26 14:55:24 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:33:47 by isrguerr          #+#    #+#             */
/*   Updated: 2024/10/26 14:18:27 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Modificación para recibir un puntero doble y asignar NULL tras liberar
char	*free_and_null(char **remainder)
{
	free(*remainder);
	*remainder = NULL;
	return (NULL);
}

// Ajustado el bucle para asegurar la correcta asignación de "line" sin memoria de más
char	*extract_line(char *remainder)
{
	char	*line;
	int		i;

	i = 0;
	while (remainder[i] != '\0' && remainder[i] != '\n') // Corrección aquí
		i++;
	line = malloc(i + 1 + (remainder[i] == '\n' ? 1 : 0)); // Asegura el espacio para '\n'
	if (!line)
		return (NULL);
	ft_strlcpy(line, remainder, i + 1 + (remainder[i] == '\n' ? 1 : 0));
	return (line);
}

char	*update_remainder(char *remainder)
{
	char	*new_remainder;
	size_t	i;

	if (!remainder || !*remainder)
		return (NULL);
	i = 0;
	while (remainder[i] && remainder[i] != '\n')
		i++;
	if (remainder[i] == '\n')
		i++;
	new_remainder = ft_strdup(remainder + i);
	free(remainder);
	return (new_remainder);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*remainder = NULL;
	ssize_t		bytes_read;
	char		*temp;

	buffer = malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0 || !buffer)
		return (free_and_null(&remainder)); // Llamada corregida
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0) // Asegura que el buffer se lea completamente
	{
		buffer[bytes_read] = '\0';
		if (!remainder)
			remainder = ft_strdup("");
		temp = remainder;
		remainder = ft_strjoin(remainder, buffer);
		free(temp);
		if (ft_strchr(remainder, '\n'))
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer); // Liberación de buffer siempre que deja de ser necesario
	if (bytes_read < 0 || (!*remainder && bytes_read == 0)) // Ajuste para liberar correctamente en caso de error
		return (free_and_null(&remainder));
	line = extract_line(remainder);
	remainder = update_remainder(remainder);
	return (line);
}

/*
int	main(void)
{
	char *line;
	int i;
	int fd1;
	int fd2;
	int fd3;

	fd1 = open("tests/test.txt", O_RDONLY);
	fd2 = open("tests/test2.txt", O_RDONLY);
	fd3 = open("tests/test3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}*/