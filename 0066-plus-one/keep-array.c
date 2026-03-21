#include <stdlib.h>

int	*add_one_to_all_nine(int size)
{
	int	*array;
	int	i;

	array = malloc(sizeof(*array) * size);
	if (!array)
		return (NULL);
	array[0] = 1;
	i = 1;
	while (i < size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

int	*add_one(int *digits, int digitsSize)
{
	int	*array;
	int	i;

	array = malloc(sizeof(*array) * digitsSize);
	if (!array)
		return (NULL);
	i = 0;
	while (i < digitsSize)
	{
		array[i] = digits[i];
		i++;
	}
	i = digitsSize - 1;
	while (array[i] == 9)
	{
		array[i] = 0;
		i--;
	}
	array[i]++;
	return (array);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int	*plusOne(int *digits, int digitsSize, int *returnSize)
{
	int	i;

	i = 0;
	while (i < digitsSize)
	{
		if (digits[i] != 9)
			break ;
		i++;
	}
	if (i == digitsSize)
	{
		*returnSize = digitsSize + 1;
		return (add_one_to_all_nine(*returnSize));
	}
	*returnSize = digitsSize;
	return (add_one(digits, digitsSize));
}
