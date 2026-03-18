static int	char_to_int(char c)
{
	if (c == 'I')
		return (1);
	if (c == 'V')
		return (5);
	if (c == 'X')
		return (10);
	if (c == 'L')
		return (50);
	if (c == 'C')
		return (100);
	if (c == 'D')
		return (500);
	if (c == 'M')
		return (1000);
	return (0);
}

int	romanToInt(char *s)
{
	int	i;
	int	total;
	int	current;
	int	next;

	i = 0;
	total = 0;
	while (s[i])
	{
		current = char_to_int(s[i]);
		next = char_to_int(s[i + 1]);
		if (current < next)
			total -= current;
		else
			total += current;
		i++;
	}
	return (total);
}
