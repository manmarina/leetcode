#include <stdbool.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

// スタックの処理順はDFSと同じ
bool	isSymmetric(struct TreeNode *root)
{
	struct TreeNode	*stack[2000];
	struct TreeNode	*p;
	struct TreeNode	*q;
	int				top;

	if (!root)
		return (true);
	top = 0;
	stack[top++] = root->left;
	stack[top++] = root->right;
	while (top > 0)
	{
		q = stack[--top];
		p = stack[--top];
		if (!p && !q)
			continue ;
		if (!p || !q)
			return (false);
		if (p->val != q->val)
			return (false);
		// 再帰版と同じ処理順になるように積んでいる
		stack[top++] = p->right;
		stack[top++] = q->left;
		stack[top++] = p->left;
		stack[top++] = q->right;
	}
	return (true);
}
