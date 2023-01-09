/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:20:48 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/09 22:23:13 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// int open_file(char *NAMEof_file)
// {
// 	int fd;

// 	fd = open(NAMEof_file, O_RDONLY);
// 	if (fd < 0)
// 		return (1);
// 	return (fd);
// }

// static char *putstr(char *s)
// {
// 	if (s == 0)
// 		return NULL;
// 	return (s);
// }

// int print_file(int fd)
// {
// 	char c;
// 	int i;
// 	int chr_read;
// 	char *ret;

// 	chr_read = 0;

// 	i = BUFFER_SIZE;
// 	printf("i: %d", i);

// 	if (*ret != 0)
// 		putstr(ret);

// 	while (i != 0 && c != '\n' && c != '\0')
// 	{
// 		chr_read += read(fd, &c, 1);
// 		write(1, &c, 1);
// 		i--;
// 	}
// 	if (i != 0)
// 	{
// 		ret = malloc(sizeof(char) * i);
// 		while (i != 0)
// 		{
// 			int tmp;

// 			tmp = i;
// 			ret[tmp - i] = read(fd, &c, 1);
// 			i--;
// 		}

// 	}
// 	return (chr_read);
// }

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	p = malloc (len + 1);
	if (!p)
		return (0);
	ft_strlcpy(p, s1, len + 1);
	ft_strlcat(p, s2, len + 1);
	return (p);
}

char	*ft_strrchr(char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = (char *)s;
		++s;
	}
	return (ret);
}

int check_newline(char *s)
{
	int i;

	i = 0;
	if (s == 0)
		return 0;
	while (s[i] != '\0' && s[i] != '\n')
	{
		i++;
	}
	return (i);
}
