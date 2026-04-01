#include <stdbool.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

static int	max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

static int	height(struct TreeNode *root)
{
	int	left_height;
	int	right_height;

	if (!root)
		return (0);
	left_height = height(root->left);
	right_height = height(root->right);
	return (max(left_height, right_height) + 1);
}

bool	isBalanced(struct TreeNode *root)
{
	int	left_height;
	int	right_height;
	int	diff;

	if (!root)
		return (true);
	left_height = height(root->left);
	right_height = height(root->right);
	diff = left_height - right_height;
	if (diff < 0)
		diff = -diff;
	if (diff > 1)
		return (false);
	return (isBalanced(root->left) && isBalanced(root->right));
}
