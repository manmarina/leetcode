#include <stdbool.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

bool	isSameTree(struct TreeNode *p, struct TreeNode *q)
{
	struct TreeNode	*stack_p[100];
	struct TreeNode	*stack_q[100];
	int				top;

	top = -1;
	while (p || top >= 0)
	{
		while (p)
		{
			if (!q)
				return (false);
			stack_p[++top] = p;
			stack_q[top] = q;
			p = p->left;
			q = q->left;
		}
		if (q)
			return (false);
		p = stack_p[top];
		q = stack_q[top--];
		if (p->val != q->val)
			return (false);
		p = p->right;
		q = q->right;
	}
	if (q)
		return (false);
	return (true);
}
