/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:56:56 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/09 22:55:53 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char* 	s;
	char*			s_join;
	int 			i;
	char 			c;

	s = malloc(sizeof(char) * BUFF_SIZE);
	s_join = malloc(sizeof(char) * BUFF_SIZE);
	if (read(fd, &c, 1) == 0)
		return NULL;
	i = BUFF_SIZE;

	while (i == BUFF_SIZE)
	{
		i = read(fd, &s_join, BUFF_SIZE);
		if (ft_check_newline(s_join) == BUFF_SIZE - 1)
			(ft_strjoin(s, s_join));
	
	}
	return (ft_strjoin(s, ft_strrchr(s_join, '\n')));
}
		else
			ft_strjoin(s, ft_strrchr(s_join, '\n'));
