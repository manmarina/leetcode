struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

int	maxDepth(struct TreeNode *root)
{
	int	left;
	int	right;

	if (!root)
		return (0);
	left = maxDepth(root->left);
	right = maxDepth(root->right);
	if (left > right)
		return (left + 1);
	return (right + 1);
}
