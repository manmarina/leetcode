#include <stdbool.h>
#include <stdio.h>

bool	isValid(char *s);

int	main(void)
{
	char	*s;

	s = "(((";
	if (isValid(s))
		printf("true\n");
	else
		printf("false\n");
	return (0);
}
