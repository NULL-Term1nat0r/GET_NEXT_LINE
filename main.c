/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:27:14 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/09 19:19:00 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main ()
{
	int fd;
	int i;

	fd = open_file("test.txt");
	printf("%d\n", open_file("test.txt"));
	i = print_file(fd);
	printf("\n characters printed: %d\n", i);
	print_file(fd);
	print_file(fd);

	return 0;
}
