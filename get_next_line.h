#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 100

int	get_next_line(const int fd, char **line);
int nextof(char **line, char **s);

#endif
