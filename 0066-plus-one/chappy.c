#include <stdlib.h>

int	*plusOne(int *digits, int digitsSize, int *returnSize)
{
	int i;
	int *res;

	i = digitsSize - 1;
	while (i >= 0)
	{
		if (digits[i] < 9)
		{
			digits[i]++;
			*returnSize = digitsSize;
			return (digits);
		}
		digits[i] = 0;
		i--;
	}

	// ここに来る = 全部9だった
	res = malloc(sizeof(int) * (digitsSize + 1));
	if (!res)
		return (NULL);
	res[0] = 1;
	i = 1;
	while (i <= digitsSize)
	{
		res[i] = 0;
		i++;
	}
	*returnSize = digitsSize + 1;
	return (res);
}