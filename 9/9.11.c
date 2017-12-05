// File: 9.11.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMELEN 12

typedef struct _Node {
	struct _Node *prev;
	struct _Node *next;
	int number;
	char name[NAMELEN];
} Node;

void inputChain(Node **phead, const char* name){
	Node *s, *t;
	int number;
	char buf[NAMELEN];
	printf("Enter chain %s: ", name);
	while (1){
		// Enter -1 for number to stop
		scanf("%d", &number);
		if (number == -1)
			break;
		scanf("%s", buf);
		t = malloc(sizeof *t);
		t->next = NULL;
		t->number = number;
		strcpy(t->name, buf);
		if (*phead == NULL){
			*phead = t;
			t->prev = NULL;
		} else {
			s->next = t;
			t->prev = s;
		}
		s = t;
	}
}

void sortChain(Node **phead){
	Node *p, *s, *m, *head = *phead;
	*phead = s = NULL;
	while (head != NULL){
		m = head;
		for (p = head; p != NULL; p = p->next)
			if (p->number < m->number)
				m = p;
		// Remove m from chain
		if (m->prev == NULL){
			head = m->next;
			if (head != NULL)
				head->prev = NULL;
		} else {
			m->prev->next = m->next;
		}
		if (m->next != NULL)
			m->next->prev = m->prev;
		// Insert into new chain
		if (*phead == NULL){
			*phead = m;
		}
		m->prev = s;
		m->next = NULL;
		if (s != NULL)
			s->next = m;
		s = m; // 's' is last node
	}
}

int main(){
	Node *a = NULL, *b = NULL, *s, *t;
	inputChain(&a, "A");
	inputChain(&b, "B");

	sortChain(&a);
	sortChain(&b);

	// Delete b From a;
	s = a, t = b;
	while (s != NULL && t != NULL){
		if (s->number == t->number){
			Node *tmp = s;
			if (s->prev == NULL){
				a = s;
				s->next->prev = NULL;
			} else {
				s->prev->next = s->next;
			}
			if (s->next != NULL){
				s->next->prev = s->prev;
			}
			s = s->next;
			free(tmp);
		}
		else if (s->number > t->number)
			t = t->next;
		else if (s->number < t->number)
			s = s->next;
	}

	for (t = a; t != NULL; t = t->next)
		printf("Number:%10d\tName: %s\n", t->number, t->name);

	for (t = a; t != NULL;){
		s = t->next;
		free(t);
		t = s;
	}
	a = NULL;
	for (t = b; t != NULL;){
		s = t->next;
		free(t);
		t = s;
	}
	b = NULL;
	return 0;
}
