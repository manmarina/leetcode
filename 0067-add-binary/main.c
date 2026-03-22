#include <stdio.h>
#include <stdlib.h>

char	*addBinary(char *a, char *b);

int	main(void)
{
	char	*a;
	char	*b;
	char	*answer;

	a = "1010";
	b = "1011";
	answer = addBinary(a, b);
	printf("%s\n", answer);
	free(answer);
	return (0);
}
