#include <stdbool.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

bool	isSymmetric(struct TreeNode *root)
{
	struct TreeNode	*queue[2000];
	struct TreeNode	*p;
	struct TreeNode	*q;
	int				front;
	int				rear;

	if (!root)
		return (true);
	front = 0;
	rear = 0;
	queue[rear++] = root->left;
	queue[rear++] = root->right;
	while (front < rear)
	{
		p = queue[front++];
		q = queue[front++];
		if (!p && !q)
			continue ;
		if (!p || !q)
			return (false);
		if (p->val != q->val)
			return (false);
		queue[rear++] = p->left;
		queue[rear++] = q->right;
		queue[rear++] = p->right;
		queue[rear++] = q->left;
	}
	return (true);
}
