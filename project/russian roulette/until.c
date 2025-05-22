#include "russian-roulette.h"

ssize_t	ft_fget(char *buf, size_t size)
{
	size_t	i;
	char	c;
	ssize_t	byte_size;

	if (!buf || size == 0)
		return (-1);
	i = 0;
	while (i < size - 1)
	{
		byte_size = read(0, &c, 1);
		if (byte_size <= 0)
			break;
		if (c == '\n')
			break;
		buf[i++] = c;
	}
	buf[i] = '\n';
	return (i);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr(const char *s)
{
	while (*s)
	{
		write(1, s++, 1);
	}
}
