#include <stdio.h>

struct entry {
	int value;
	struct entry *next;
};

void printList (struct entry *list);
void sort3 (struct entry *ptr);

int main (void)
{
	struct entry n1, n2, n3, *list;
	n1.value = 300;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;	
	n3.value = 100;
	n3.next = (struct entry *) 0;

	list = &n1;

	printList(list);

	printf("Sorting...\n");
	sort3 (list);
	printList(list);
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

void sort3 (struct entry *ptr)
{
	struct entry  *j;
	int temp;

	while (ptr != (struct entry *) 0) {
		j = ptr->next;
		while (j != (struct entry *) 0) {
			if (ptr->value > j->value) {
				temp = ptr->value;
				ptr->value = j->value;
				j->value = temp;	
			}
			j = j->next;
		}	
		ptr = ptr->next;
	}
	return;
}
