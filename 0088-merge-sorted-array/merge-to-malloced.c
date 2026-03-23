#include <stdlib.h>

void	merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size,
		int n)
{
	int	*array;
	int	i;
	int	j;
	int	k;

	(void)nums2Size;
	array = malloc(sizeof(*array) * (m + n));
	if (!array)
		return ;
	i = 0;
	j = 0;
	k = 0;
	while (k < nums1Size)
	{
		if (i < m && j < n)
		{
			if (nums1[i] <= nums2[j])
			{
				array[k] = nums1[i];
				i++;
			}
			else
			{
				array[k] = nums2[j];
				j++;
			}
		}
		else if (i < m)
		{
			array[k] = nums1[i];
			i++;
		}
		else if (j < n)
		{
			array[k] = nums2[j];
			j++;
		}
		k++;
	}
	i = 0;
	while (i < nums1Size)
	{
		nums1[i] = array[i];
		i++;
	}
	free(array);
}
