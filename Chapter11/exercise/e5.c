// Program to implement doubly linked list

#include <stdio.h>

struct entry {
	int value;
	struct entry *pre;
	struct entry *next;
};

int main (void)
{
	struct entry w, x, y, z;

	w.value = 100;
	w.pre = (struct entry *) 0;
	w.next = &x;
	x.value = 200;
	x.pre = &w;
	x.next = &y;
	y.value = 300;
	y.pre = &x;
	y.next = &z;
	z.value = 400;
	z.pre = &y;
	z.next = (struct entry *) 0;
	
	struct entry *list;

	printf("List:\n");
	list = &w;
	while (list != (struct entry *) 0) {
		printf ("%i\n", list->value);
		list = list->next;
	}

	printf("List (reverse):\n");
	list = &z;
	while (list != (struct entry *) 0) {
		printf("%i\n", list->value);
		list = list->pre;
	}

	return 0;
}
