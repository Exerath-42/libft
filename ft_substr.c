#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*string;

	i = 0;
	k = 0;	
	if (!s)
		return (NULL);
	if(!s[i] || start > ft_strlen(s))
		return(ft_strdup(""));
	string = malloc(sizeof(char) * len + 1);
	if (!string)
		return (NULL);
	while (s[i])
	{
		if (i == start)
		{
			while (s[i] && k < len)
				string[k++] = s[i++];
			string[k] = '\0';
			return (string);
		}
		i++;
	}
	return (NULL);
}
