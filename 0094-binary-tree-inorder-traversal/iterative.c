#include <stdlib.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int	*inorderTraversal(struct TreeNode *root, int *returnSize)
{
	int				*result;
	int				index;
	struct TreeNode	*stack[100];
	int				top;

	result = malloc(sizeof(*result) * 100);
	if (!result)
	{
		*returnSize = 0;
		return (NULL);
	}
	top = -1;
	index = 0;
	while (root || top >= 0)
	{
		while (root)
		{
			stack[++top] = root;
			root = root->left;
		}
		root = stack[top--];
		result[index++] = root->val;
		root = root->right;
	}
	*returnSize = index;
	return (result);
}
