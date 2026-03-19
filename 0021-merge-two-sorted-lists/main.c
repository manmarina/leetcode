#include <stdio.h>
#include <stdlib.h>

struct				ListNode
{
	int				val;
	struct ListNode	*next;
};

struct ListNode		*mergeTwoLists(struct ListNode *list1,
						struct ListNode *list2);

void	print_list(struct ListNode *list)
{
	while (list)
	{
		printf("%d", list->val);
		if (list->next)
			printf(" -> ");
		list = list->next;
	}
	printf("\n");
}

int	main(void)
{
	struct ListNode	a;
	struct ListNode	b;
	struct ListNode	c;
	struct ListNode	d;
	struct ListNode	e;
	struct ListNode	f;
	struct ListNode	*merged;

	a.val = 1;
	a.next = &b;
	b.val = 2;
	b.next = &c;
	c.val = 4;
	c.next = NULL;
	d.val = 1;
	d.next = &e;
	e.val = 3;
	e.next = &f;
	f.val = 4;
	f.next = NULL;
	printf("list1: ");
	print_list(&a);
	printf("list2: ");
	print_list(&d);
	merged = mergeTwoLists(&a, &d);
	printf("merged: ");
	print_list(merged);
}
