int	mySqrt(int x)
{
	int	left;
	int	right;
	int	mid;

	left = 1;
	right = x;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid <= x / mid)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (right);
}
