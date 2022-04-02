#include "libft.h"

static	size_t	static_strlen(const char *s)
{
	size_t length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	i;

	length = static_strlen(src);
	i = 0;
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}

	dst[--i] = '\0';
	return (length);
}
