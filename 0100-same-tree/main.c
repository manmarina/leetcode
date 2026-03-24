#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

bool				isSameTree(struct TreeNode *p, struct TreeNode *q);

int	main(void)
{
	struct TreeNode p1;
	struct TreeNode p2;
	struct TreeNode p3;

	p1.val = 1;
	p1.left = &p2;
	p1.right = &p3;
	p2.val = 2;
	p2.left = NULL;
	p2.right = NULL;
	p3.val = 1;
	p3.left = NULL;
	p3.right = NULL;

	struct TreeNode q1;
	struct TreeNode q2;
	struct TreeNode q3;

	q1.val = 1;
	q1.left = &q2;
	q1.right = &q3;
	q2.val = 1;
	q2.left = NULL;
	q2.right = NULL;
	q3.val = 2;
	q3.left = NULL;
	q3.right = NULL;

	bool answer;
	answer = isSameTree(&p1, &q1);
	if (answer)
		printf("true\n");
	else
		printf("false\n");

	return (0);
}