#include <stdio.h>

int	romanToInt(char *s);

int	main(void)
{
	char *s = "MCMXCIV";
	int answer = romanToInt(s);
	printf("%d\n", answer);

	return (0);
}