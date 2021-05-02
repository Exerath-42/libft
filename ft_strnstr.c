#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	b;
	char	*hs1;
	size_t	nlen;

	hs1 = (char *)haystack;
	nlen = ft_strlen(needle);
	i = 0;
	if (*needle == '\0' || needle == NULL)
		return (hs1);
	while (needle[i] && i < len)
	{
		b = 0;
		while (haystack[b] == needle[i + b] && i + b < len)
		{
			if (haystack[b + 1] == '\0')
			{
				return (&((char *)needle)[i]);
			}
			b++;
		}
		i++;
	}
	return (NULL);
}
