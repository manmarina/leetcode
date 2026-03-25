struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

int	maxDepth(struct TreeNode *root)
{
	struct TreeNode	*queue[10000];
	struct TreeNode	*node;
	int				front;
	int				rear;
	int				depth;
	int				level_size;
	int				i;

	if (!root)
		return (0);
	front = 0;
	rear = 0;
	depth = 0;
	queue[rear++] = root;
	while (front < rear)
	{
		level_size = rear - front;
		i = 0;
		while (i < level_size)
		{
			node = queue[front++];
			if (node->left)
				queue[rear++] = node->left;
			if (node->right)
				queue[rear++] = node->right;
			i++;
		}
		depth++;
	}
	return (depth);
}
