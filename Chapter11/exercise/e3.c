// Program to entry entry in linked list
// Example: inserting entry at the beginning of the list

#include <stdio.h>

struct entry {
	int value;
	struct entry *next;
};

int main(void)
{
	void printList (struct entry *list);
	void insertEntry (struct entry *entry, struct entry *element);
	// List
	struct entry w, y, z;

	w.value = 200;
	w.next = &y;
	y.value = 300;
	y.next = &z;
	z.value = 400;
	z.next = (struct entry *) 0;

	// Printing the list before adding
	printf("Before adding...\n");
	printList (&w);

	// Defining new entry
	struct entry x, *ptrX;
	x.value = 100;
	ptrX = &x;

	// Special struct to point to point at first element of list
	struct entry list;
	list.next = &w;

	struct entry *list_pointer = &list;

	// Inserting after first element (w)
	insertEntry (ptrX, list_pointer);

	// Printing the list after adding
	printf("After adding...\n");
	printList (&x);

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

void insertEntry (struct entry *entry, struct entry *element)
{
	entry->next = element->next;
	element->next = entry;
}
