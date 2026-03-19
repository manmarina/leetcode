#include <stdio.h>

int	removeElement(int *nums, int numsSize, int val);

int	main(void)
{
	// int nums[8] = {0, 1, 2, 2, 3, 0, 4, 2};
	int nums[8] = {0, 1, 1, 2, 3, 4, 2, 5};
	int k = removeElement(nums, 8, 2);
	int i = 0;

	while (i < k)
	{
		printf("%d ", nums[i]);
		i++;
	}
	printf("\n%d\n", k);

	return (0);
}