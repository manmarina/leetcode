#include <stdbool.h>

static int	count_digits(int num)
{
	int	digits;

	if (num == 0)
		return (1);
	digits = 0;
	while (num > 0)
	{
		digits++;
		num /= 10;
	}
	return (digits);
}

static int	calc_pow(int num, int pow)
{
	int	ans;

	ans = 1;
	while (pow > 0)
	{
		ans = ans * num;
		pow--;
	}
	return (ans);
}

static int	get_digit(int num, int divisor)
{
	int	digit;

	digit = (num / divisor) % 10;
	return (digit);
}

bool	isPalindrome(int x)
{
	int	digits;
	int	i;
	int	left_divisor;
	int	right_divisor;
	int	left_digit;
	int	right_digit;

	if (x < 0)
		return (false);
	digits = count_digits(x);
	right_divisor = 1;
	left_divisor = calc_pow(10, digits - 1);
	i = digits / 2;
	while (i > 0)
	{
		right_digit = calc_digit(x, right_divisor);
		left_digit = calc_digit(x, left_divisor);
		if (left_digit != right_digit)
			return (false);
		right_divisor *= 10;
		left_divisor /= 10;
		i--;
	}
	return (true);
}
