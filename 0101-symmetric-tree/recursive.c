#include <stdbool.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

static bool	isMirror(struct TreeNode *p, struct TreeNode *q)
{
	if (!p && !q)
		return (true);
	if (!p || !q)
		return (false);
	if (p->val != q->val)
		return (false);
	return (isMirror(p->left, q->right) && isMirror(p->right, q->left));
}

bool	isSymmetric(struct TreeNode *root)
{
	if (!root)
		return (true);
	return (isMirror(root->left, root->right));
}