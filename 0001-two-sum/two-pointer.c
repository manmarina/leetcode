/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

typedef struct
{
	int	value;
	int	index;
}		pair;

int	cmp(const void *a, const void *b)
{
	const pair	*x = (const pair *)a;
	const pair	*y = (const pair *)b;

	if (x->value < y->value)
		return (-1);
	if (x->value > y->value)
		return (1);
	return (0);
}

int	*twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	pair	*arr;
	int		i;
	int		left;
	int		right;
	int		sum;
	int		*answer;

	*returnSize = 0;
	arr = malloc(sizeof(*arr) * numsSize);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < numsSize)
	{
		arr[i].value = nums[i];
		arr[i].index = i;
		i++;
	}
	qsort(arr, numsSize, sizeof(*arr), cmp);
	left = 0;
	right = numsSize - 1;
	while (left < right)
	{
		sum = arr[left].value + arr[right].value;
		if (sum < target)
			left++;
		else if (sum > target)
			right--;
		else
		{
			answer = malloc(sizeof(*answer) * 2);
			if (!answer)
			{
				free(arr);
				return (NULL);
			}
			answer[0] = arr[left].index;
			answer[1] = arr[right].index;
			*returnSize = 2;
			free(arr);
			return (answer);
		}
	}
	free(arr);
	return (NULL);
}
