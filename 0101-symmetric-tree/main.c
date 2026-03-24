#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

bool				isSymmetric(struct TreeNode *root);

int	main(void)
{
	struct TreeNode	n1;
	struct TreeNode	n2;
	struct TreeNode	n3;
	struct TreeNode	n4;
	struct TreeNode	n5;
	struct TreeNode	n6;
	struct TreeNode	n7;
	bool			answer;

	// struct TreeNode	n1;
	// struct TreeNode	n2;
	// struct TreeNode	n3;
	// struct TreeNode	n4;
	// struct TreeNode	n5;
	// bool			answer;
	n1.val = 1;
	n1.left = &n2;
	n1.right = &n3;
	n2.val = 2;
	n2.left = &n4;
	n2.right = &n5;
	n3.val = 2;
	n3.left = &n6;
	n3.right = &n7;
	n4.val = 3;
	n4.left = NULL;
	n4.right = NULL;
	n5.val = 4;
	n5.left = NULL;
	n5.right = NULL;
	n6.val = 4;
	n6.left = NULL;
	n6.right = NULL;
	n7.val = 3;
	n7.left = NULL;
	n7.right = NULL;
	// n1.val = 1;
	// n1.left = &n2;
	// n1.right = &n3;
	// n2.val = 2;
	// n2.left = NULL;
	// n2.right = &n4;
	// n3.val = 2;
	// n3.left = NULL;
	// n3.right = &n5;
	// n4.val = 3;
	// n4.left = NULL;
	// n4.right = NULL;
	// n5.val = 3;
	// n5.left = NULL;
	// n5.right = NULL;
	answer = isSymmetric(&n1);
	if (answer)
		printf("true\n");
	else
		printf("false\n");
	return (0);
}
