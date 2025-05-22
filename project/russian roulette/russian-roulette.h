#ifndef RUSSIAN_ROULETTE_H
# define RUSSIAN_ROULETTE_H

# ifndef BULLET_SIZE
#  define BULLET_SIZE 6
# endif

#  include <unistd.h>
#  include <time.h>
#  include <stdio.h>
#  include <stdlib.h>
#  include <string.h>
#  include <stddef.h>

ssize_t	ft_fget(char *buf, size_t size);
size_t	ft_strlen(const char *s);
void	ft_putstr(const char *s);

#endif
