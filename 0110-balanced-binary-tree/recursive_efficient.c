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

static int	check_height(struct TreeNode *root)
{
	int	left_height;
	int	right_height;
	int	diff;

	if (!root)
		return (0);
	left_height = check_height(root->left);
	if (left_height == -1)
		return (-1);
	right_height = check_height(root->right);
	if (right_height == -1)
		return (-1);
	diff = left_height - right_height;
	if (diff < 0)
		diff = -diff;
	if (diff > 1)
		return (-1);
	return (max(left_height, right_height) + 1);
}

bool	isBalanced(struct TreeNode *root)
{
	return (check_height(root) != -1);
}
