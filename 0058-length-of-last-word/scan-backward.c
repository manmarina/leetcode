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
	int	total_len;
	int	len;
	int	i;

	total_len = count_len(s);
	i = total_len - 1;
	while (i >= 0 && s[i] == ' ')
		i--;
	while (i >= 0 && s[i] != ' ')
	{
		i--;
		len++;
	}
	return (len);
}
