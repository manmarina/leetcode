#include <stdlib.h>

static int	count_len(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static char	*trim_leading_zero(char *answer, int len)
{
	char	*trimmed;
	int		i;

	trimmed = malloc(sizeof(*trimmed) * (len - 1));
	if (!trimmed)
	{
		free(answer);
		return (NULL);
	}
	i = 0;
	while (i < len - 2)
	{
		trimmed[i] = answer[i + 1];
		i++;
	}
	trimmed[i] = '\0';
	free(answer);
	return (trimmed);
}

char	*addBinary(char *a, char *b)
{
	int		len_a;
	int		len_b;
	int		max;
	char	*answer;
	int		i;
	int		j;
	int		k;
	int		sum;
	int		carry;

	len_a = count_len(a);
	len_b = count_len(b);
	max = len_a;
	if (len_a < len_b)
		max = len_b;
	answer = malloc(sizeof(*answer) * (max + 2));
	if (!answer)
		return (NULL);
	answer[max + 1] = '\0';
	i = len_a - 1;
	j = len_b - 1;
	k = max;
	carry = 0;
	while (k >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += a[i--] - '0';
		if (j >= 0)
			sum += b[j--] - '0';
		answer[k--] = sum % 2 + '0';
		carry = sum / 2;
	}
	if (answer[0] == '0')
		return (trim_leading_zero(answer, max + 2));
	return (answer);
}
