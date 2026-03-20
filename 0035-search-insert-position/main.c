#include <stdio.h>

int	searchInsert(int *nums, int numsSize, int target);

int	main(void)
{
	int nums[4] = {1, 3, 5, 6};
	int index = searchInsert(nums, 4, 5);
	printf("%d\n", index);
	return (0);
}