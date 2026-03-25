struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

int	maxDepth(struct TreeNode *root)
{
	struct TreeNode	*node_stack[10000];
	struct TreeNode	*node;
	int				depth_stack[10000];
	int				depth;
	int				top;
	int				max;

	if (!root)
		return (0);
	top = 0;
	max = 0;
	node_stack[top] = root;
	depth_stack[top++] = 1;
	while (top > 0)
	{
		node = node_stack[--top];
		depth = depth_stack[top];
		if (max < depth)
			max = depth;
		// 再帰版と同じ実行順になるように積んでいる
		if (node->right)
		{
			node_stack[top] = node->right;
			depth_stack[top++] = depth + 1;
		}
		if (node->left)
		{
			node_stack[top] = node->left;
			depth_stack[top++] = depth + 1;
		}
	}
	return (max);
}
