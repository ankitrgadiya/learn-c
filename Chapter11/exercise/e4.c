// Program to entry entry in linked list

#include <stdio.h>

struct entry {
	int value;
	struct entry *next;
};

int main(void)
{
	void printList (struct entry *list);
	void removeEntry (struct entry *preEntry);

	// List
	struct entry w, x, y, z;

	w.value = 100;
	w.next = &x;
	x.value = 200;
	x.next = &y;
	y.value = 300;
	y.next = &z;
	z.value = 400;
	z.next = (struct entry *) 0;

	struct entry *ptrList = &w;

	// Printing the list before adding
	printf("Before adding...\n");
	printList (ptrList);

	// Deleting entry
	removeEntry (&w);

	// Printing the list after adding
	printf("After adding...\n");
	printList (ptrList);

	return 0;
}

void printList (struct entry *list)
{
	while (list != (struct entry *) 0) {
		printf("%i\n", list->value);
		list = list->next;
	}

	return;
}

void removeEntry (struct entry *preEntry)
{
	preEntry->next = preEntry->next->next;
}
