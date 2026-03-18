#include <stdio.h>
#include <stdlib.h>

char	*longestCommonPrefix(char **strs, int strsSize);

int	main(void)
{
	char	*strs[3];
	int		strsSize;
	char	*answer;

	strs[0] = "flower";
	strs[1] = "flow";
	strs[2] = "flight";
	strsSize = 3;
	answer = longestCommonPrefix(strs, strsSize);
	printf("%s\n", answer);
	free(answer);
	return (0);
}
