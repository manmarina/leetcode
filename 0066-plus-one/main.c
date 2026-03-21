#include <stdio.h>
#include <stdlib.h>

int	*plusOne(int *digits, int digitsSize, int *returnSize);

int	main(void)
{
	int digits[4] = {4, 3, 2, 1};
	// int digits[3] = {9, 9, 9};
	int *answer;
	int returnSize;
	int i;
	answer = plusOne(digits, 4, &returnSize);

	i = 0;
	while (i < returnSize)
	{
		printf("%d ", answer[i]);
		i++;
	}
	putchar('\n');
	free(answer);
	return (0);
}