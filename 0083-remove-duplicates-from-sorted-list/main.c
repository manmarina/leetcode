#include <stdio.h>
#include <stdlib.h>

struct				ListNode
{
	int				val;
	struct ListNode	*next;
};

struct ListNode		*deleteDuplicates(struct ListNode *head);

static void	print_list(struct ListNode *list)
{
	while (list)
	{
		printf("%d", list->val);
		if (list->next)
			printf(" -> ");
		list = list->next;
	}
	putchar('\n');
}

int	main(void)
{
	struct ListNode a;
	struct ListNode b;
	struct ListNode c;
	struct ListNode d;
	struct ListNode e;

	a.val = 1;
	a.next = &b;
	b.val = 1;
	b.next = &c;
	c.val = 2;
	c.next = &d;
	d.val = 3;
	d.next = &e;
	e.val = 4;
	e.next = NULL;

	print_list(deleteDuplicates(&a));
	return (0);
}