#include "libft.h"

static char	*check_small(void)
{
	char	*string;

	string = (char *)malloc(sizeof(char) * 1);
	if (!string)
		return (NULL);
	string[0] = '\0';
	return (string);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			size;
	char			*string;
	char			*dst;

	i = 0;
	dst = (char *)s;
	if (!dst)
		return (NULL);
	size = ft_strlen(dst);
	if (size < start)
		return (check_small());
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	while (i < len)
	{
		string[i] = s[start + i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
