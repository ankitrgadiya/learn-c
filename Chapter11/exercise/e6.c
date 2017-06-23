// Program to implement doubly linked list

#include <stdio.h>

struct entry {
	int value;
	struct entry *pre;
	struct entry *next;
};

int main (void)
{
	void printList (struct entry *list);
	void addEntry (struct entry *entry, struct entry *preEntry);
	void removeEntry (struct entry *entry);
	struct entry w, y, z;

	w.value = 100;
	w.pre = (struct entry *) 0;
	w.next = &y;
	y.value = 300;
	y.pre = &w;
	y.next = &z;
	z.value = 400;
	z.pre = &y;
	z.next = (struct entry *) 0;
	
	struct entry *list;

	printf("Before adding...\n");
	list = &w;
	printList (list);

	struct entry x;
	x.value = 200;
	struct entry *ptrX = &x;

	addEntry (ptrX, &w);

	printf("After adding...\n");
	list = &w;
	printList (list);

	removeEntry (&x);

	printf("After removing...\n");
	list = &w;
	printList (list);

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

void addEntry (struct entry *entry, struct entry *preEntry)
{
	entry->next = preEntry->next;
	entry->pre = preEntry;
	preEntry->next = entry;
}

void removeEntry (struct entry *entry)
{
	struct entry *preEntry = entry->pre;
	struct entry *nextEntry = entry->next;

	preEntry->next = entry->next;
	nextEntry->pre = entry->pre;
}	
