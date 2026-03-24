#include <stdbool.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

bool	isSymmetric(struct TreeNode *root)
{
	struct TreeNode	*stack_l[1000];
	struct TreeNode	*stack_r[1000];
	int				top;
	struct TreeNode	*node_l;
	struct TreeNode	*node_r;

	node_l = root;
	node_r = root;
	top = -1;
	while (node_l || top >= 0)
	{
		while (node_l)
		{
			if (!node_r)
				return (false);
			stack_l[++top] = node_l;
			stack_r[top] = node_r;
			node_l = node_l->left;
			node_r = node_r->right;
		}
		if (node_r)
			return (false);
		node_l = stack_l[top];
		node_r = stack_r[top--];
		if (node_l->val != node_r->val)
			return (false);
		node_l = node_l->right;
		node_r = node_r->left;
	}
	if (node_r)
		return (false);
	return (true);
}
