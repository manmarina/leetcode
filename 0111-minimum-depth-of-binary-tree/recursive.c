struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

int	minDepth(struct TreeNode *root)
{
	int	left;
	int	right;

	if (!root)
		return (0);
	left = minDepth(root->left);
	right = minDepth(root->right);
	if (!left)
		return (right + 1);
	if (!right)
		return (left + 1);
	if (left > right)
		return (right + 1);
	else
		return (left + 1);
}
