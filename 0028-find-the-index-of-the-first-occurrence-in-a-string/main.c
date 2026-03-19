#include <stdio.h>

int	strStr(char *haystack, char *needle);

int	main(void)
{
	char *haystack = "sadbutsad";
	char *needle = "sad";

	int index = strStr(haystack, needle);
	printf("%d\n", index);
	return (0);
}