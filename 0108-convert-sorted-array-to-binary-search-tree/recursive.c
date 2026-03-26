#include <stdlib.h>

struct					TreeNode
{
	int					val;
	struct TreeNode		*left;
	struct TreeNode		*right;
};

static struct TreeNode	*build(int *nums, int left, int right)
{
	struct TreeNode	*node;
	int				mid;

	if (left > right)
		return (NULL);
	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	mid = left + (right - left) / 2;
	node->val = nums[mid];
	node->left = build(nums, left, mid - 1);
	node->right = build(nums, mid + 1, right);
	return (node);
}

struct TreeNode	*sortedArrayToBST(int *nums, int numsSize)
{
	return (build(nums, 0, numsSize - 1));
}