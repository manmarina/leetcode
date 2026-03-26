#include <stdio.h>
#include <stdlib.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

struct TreeNode		*sortedArrayToBST(int *nums, int numsSize);

static void	print_node(struct TreeNode *node)
{
	if (!node)
		return ;
	print_node(node->left);
	printf("%d ", node->val);
	print_node(node->right);
}

void	free_tree(struct TreeNode *node)
{
	if (!node)
		return ;
	free_tree(node->left);
	free_tree(node->right);
	free(node);
}

int	main(void)
{
	int				nums[5] = {-10, -3, 0, 5, 9};
	int				numsSize;
	struct TreeNode	*root;

	numsSize = 5;
	root = sortedArrayToBST(nums, numsSize);
	print_node(root);
	putchar('\n');
	free_tree(root);
	return (0);
}
