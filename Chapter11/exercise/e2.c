// Program to entry entry in linked list

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

	w.value = 100;
	w.next = &y;
	y.value = 300;
	y.next = &z;
	z.value = 400;
	z.next = (struct entry *) 0;

	struct entry *ptrList = &w;

	// Printing the list before adding
	printf("Before adding...\n");
	printList (ptrList);

	// Defining new entry
	struct entry x, *ptrX;
	x.value = 200;
	ptrX = &x;

	// Inserting after first element (w)
	insertEntry (ptrX, ptrList);

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

void insertEntry (struct entry *entry, struct entry *element)
{
	entry->next = element->next;
	element->next = entry;
}
