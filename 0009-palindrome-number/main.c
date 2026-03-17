#include <stdbool.h>
#include <stdio.h>

bool	isPalindrome(int x);

int	main(void)
{
	bool ans = isPalindrome(-121);

	if (ans)
		printf("true\n");
	else
		printf("false\n");
	return (0);
}