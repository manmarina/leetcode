int	strStr(char *haystack, char *needle)
{
	int	i;
	int	j;

	if (needle[0] == '\0')
		return (0);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (i);
		i++;
	}
	return (-1);
}
