static int	count_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	lengthOfLastWord(char *s)
{
	int	i;
	int	len;

	i = count_len(s) - 1;
	while (i >= 0 && s[i] == ' ')
		i--;
	len = 0;
	while (i >= 0 && s[i] != ' ')
	{
		i--;
		len++;
	}
	return (len);
}
