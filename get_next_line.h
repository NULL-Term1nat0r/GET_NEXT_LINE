#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"
#include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

//Memory Functions

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

char *get_next_line(int fd);
int open_file(char *NAMEof_file);
int print_file(int fd);
//Bonus Funktionen

// int	ft_numlen_bonus(int n, int base);

#endif
