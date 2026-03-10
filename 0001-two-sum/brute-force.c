/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int	*twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int	*answer;
	int	i;
	int	j;

	i = 0;
	while (i < numsSize - 1)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				answer = malloc(sizeof(*answer) * 2);
				if (!answer)
				{
					*returnSize = 0;
					return (NULL);
				}
				answer[0] = i;
				answer[1] = j;
				*returnSize = 2;
				return (answer);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
