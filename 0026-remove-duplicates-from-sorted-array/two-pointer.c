int	removeDuplicates(int *nums, int numsSize)
{
	int i = 1;
	int j = 1;
	while (i < numsSize)
	{
		if (nums[i] != nums[i - 1])
		{
			nums[j] = nums[i];
			j++;
		}
		i++;
	}
	return (j);
}