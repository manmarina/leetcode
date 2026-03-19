#include <stdbool.h>

bool	isValid(char *s)
{
	char	stack[10000];
	int		top;
	int		i;

	top = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			stack[++top] = s[i];
		else
		{
			if (top < 0)
				return (false);
			if (s[i] == ')' && stack[top] != '(')
				return (false);
			if (s[i] == ']' && stack[top] != '[')
				return (false);
			if (s[i] == '}' && stack[top] != '{')
				return (false);
			top--;
		}
		i++;
	}
	return (top == -1);
}
