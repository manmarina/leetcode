#include <stdlib.h>

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*addBinary(char *a, char *b)
{
	int len_a = ft_strlen(a);
	int len_b = ft_strlen(b);
	int max = (len_a > len_b) ? len_a : len_b;

	char *res = malloc(sizeof(char) * (max + 2)); // +1 for carry +1 for '\0'
	int i = len_a - 1;
	int j = len_b - 1;
	int k = max;
	int carry = 0;
	int sum;

	res[max + 1] = '\0';

	while (k >= 0)
	{
		sum = carry;

		if (i >= 0)
			sum += a[i--] - '0';
		if (j >= 0)
			sum += b[j--] - '0';

		res[k--] = (sum % 2) + '0';
		carry = sum / 2;
	}

	if (res[0] == '0')
		return (res + 1); // 先頭0スキップ（LeetCode的にはOK）

	return (res);
}