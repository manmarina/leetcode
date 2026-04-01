#include <stdio.h>
#include <stdlib.h>

struct				TreeNode
{
	int				val;
	struct TreeNode	*left;
	struct TreeNode	*right;
};

int					minDepth(struct TreeNode *root);

/* ===== ノード生成関数 ===== */

struct TreeNode	*new_node(int val)
{
	struct TreeNode	*node;

	node = malloc(sizeof(struct TreeNode));
	if (!node)
		return (NULL);
	node->val = val;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

/* ===== メモリ解放 ===== */

void	free_tree(struct TreeNode *root)
{
	if (!root)
		return ;
	free_tree(root->left);
	free_tree(root->right);
	free(root);
}

/* ===== main ===== */

int	main(void)
{
	struct TreeNode	*root1;
	struct TreeNode	*root2;

	/* ===== Example 1: balanced ===== */
	root1 = new_node(3);
	root1->left = new_node(9);
	root1->right = new_node(20);
	root1->right->left = new_node(15);
	root1->right->right = new_node(7);
	printf("Example 1: %d\n", minDepth(root1));
	/* ===== Example 2: NOT balanced ===== */
	root2 = new_node(2);
	root2->right = new_node(3);
	root2->right->right = new_node(4);
	root2->right->right->right = new_node(5);
	root2->right->right->right->right = new_node(6);
	printf("Example 2: %d\n", minDepth(root2));
	/* ===== free ===== */
	free_tree(root1);
	free_tree(root2);
	return (0);
}
