#include <stdio.h>

int	removeDuplicates(int *nums, int numsSize);

int	main(void)
{
	int nums[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	// int nums[3] = {0, 0, 0};
	int numsSize = 10;
	int k = removeDuplicates(nums, numsSize);
	int i = 0;

	while (i < k)
	{
		printf("%d ", nums[i]);
		i++;
	}
	printf("\n%d\n", k);

	return (0);
}