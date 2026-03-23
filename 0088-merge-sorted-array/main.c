#include <stdio.h>

void	merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size,
			int n);

int	main(void)
{
	int nums1[6] = {1, 2, 3, 0, 0, 0};
	int nums2[3] = {2, 5, 6};
	int nums1Size = 6;
	int nums2Size = 3;
	int m = 3;
	int n = 3;
	// int nums1[1] = {0};
	// int nums2[1] = {1};
	// int nums1Size = 1;
	// int nums2Size = 1;
	// int m = 0;
	// int n = 1;

	merge(nums1, nums1Size, m, nums2, nums2Size, n);
	int i = 0;
	while (i < nums1Size)
	{
		printf("%d ", nums1[i]);
		i++;
	}
	putchar('\n');
	return (0);
}