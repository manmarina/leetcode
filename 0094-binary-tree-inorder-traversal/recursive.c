#include <stdlib.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

static void	inorder_fill(struct TreeNode *root, int *result, int *index)
{
	if (!root)
		return ;
	inorder_fill(root->left, result, index);
	result[*index] = root->val;
	(*index)++;
	inorder_fill(root->right, result, index);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int	*inorderTraversal(struct TreeNode *root, int *returnSize)
{
	int	*result;
	int	index;

	result = malloc(sizeof(*result) * 100);
	if (!result)
	{
		*returnSize = 0;
		return (NULL);
	}
	index = 0;
	inorder_fill(root, result, &index);
	*returnSize = index;
	return (result);
}
