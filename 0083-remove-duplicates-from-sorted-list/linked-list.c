#include <stddef.h>

struct				ListNode
{
	int				val;
	struct ListNode	*next;
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode	*deleteDuplicates(struct ListNode *head)
{
	struct ListNode *list;
	if (!head)
		return (NULL);
	list = head;
	while (list->next)
	{
		if (list->val == list->next->val)
			list->next = list->next->next;
		else
			list = list->next;
	}
	return (head);
}