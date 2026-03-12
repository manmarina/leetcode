/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

#define TABLE_SIZE 40009

typedef struct s_entry
{
	int		key;
	int		value;
	int		used;
}			t_entry;

static int	hash(int key)
{
	unsigned int	u;

	u = (unsigned int)key;
	return (u % TABLE_SIZE);
}

static void	insert(t_entry *table, int key, int value)
{
	int	h;

	h = hash(key);
	while (table[h].used)
		h = (h + 1) % TABLE_SIZE;
	table[h].key = key;
	table[h].value = value;
	table[h].used = 1;
}

static int	search(t_entry *table, int key)
{
	int	h;

	h = hash(key);
	while (table[h].used)
	{
		if (table[h].key == key)
			return (table[h].value);
		h = (h + 1) % TABLE_SIZE;
	}
	return (-1);
}

int	*twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	t_entry	table[TABLE_SIZE] = {0};
	int		i;
	int		*answer;
	int		idx;

	*returnSize = 0;
	i = 0;
	while (i < numsSize)
	{
		idx = search(table, target - nums[i]);
		if (idx != -1)
		{
			answer = malloc(sizeof(*answer) * 2);
			if (!answer)
				return (NULL);
			answer[0] = idx;
			answer[1] = i;
			*returnSize = 2;
			return (answer);
		}
		insert(table, nums[i], i);
		i++;
	}
	return (NULL);
}
