#include <stdio.h>
#include <stdlib.h>

int	*twoSum(int *nums, int numsSize, int target, int *returnSize);

int	main(void)
{
	int nums[] = {2, 7, 11, 15};
	int returnSize;

	int *result = twoSum(nums, 4, 9, &returnSize);

	printf("%d %d\n", result[0], result[1]);

	free(result);
}