#include <stdio.h>

int	lengthOfLastWord(char *s);

int	main(void)
{
	// char *s = "   fly me   to   the moon  ";
	char *s = "Hello World";
	int length = lengthOfLastWord(s);
	printf("%d\n", length);

	return (0);
}