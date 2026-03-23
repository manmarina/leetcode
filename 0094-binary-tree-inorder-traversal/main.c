#include <stdio.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

int					*inorderTraversal(struct TreeNode *root, int *returnSize);

int	main(void)
{
	struct TreeNode	n1;
	struct TreeNode	n2;
	struct TreeNode	n3;
	struct TreeNode	n4;
	struct TreeNode	n5;
	struct TreeNode	n6;
	struct TreeNode	n7;
	struct TreeNode	n8;
	struct TreeNode	n9;
	int				*result;
	int				returnSize;
	int				i;

	n1.val = 1;
	n1.left = &n2;
	n1.right = &n3;
	n2.val = 2;
	n2.left = &n4;
	n2.right = &n5;
	n3.val = 3;
	n3.left = NULL;
	n3.right = &n6;
	n4.val = 4;
	n4.left = NULL;
	n4.right = NULL;
	n5.val = 5;
	n5.left = &n7;
	n5.right = &n8;
	n6.val = 8;
	n6.left = &n9;
	n6.right = NULL;
	n7.val = 6;
	n7.left = NULL;
	n7.right = NULL;
	n8.val = 7;
	n8.left = NULL;
	n8.right = NULL;
	n9.val = 9;
	n9.left = NULL;
	n9.right = NULL;
	result = inorderTraversal(&n1, &returnSize);
	i = 0;
	while (i < returnSize)
	{
		printf("%d ", result[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
