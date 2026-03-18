#include <stdlib.h>

static int	get_prefix_len(char **strs, int strsSize)
{
	int	i;
	int	j;

	j = 0;
	while (strs[0][j])
	{
		i = 1;
		while (i < strsSize)
		{
			if (strs[0][j] != strs[i][j])
				return (j);
			i++;
		}
		j++;
	}
	return (j);
}

char	*longestCommonPrefix(char **strs, int strsSize)
{
	char	*prefix;
	int		prefix_len;
	int		i;

	prefix_len = get_prefix_len(strs, strsSize);
	prefix = malloc(sizeof(*prefix) * (prefix_len + 1));
	if (!prefix)
		return (NULL);
	i = 0;
	while (i < prefix_len)
	{
		prefix[i] = strs[0][i];
		i++;
	}
	prefix[i] = '\0';
	return (prefix);
}
