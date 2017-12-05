// File: 9.10.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
	struct _Node *prev;
	struct _Node *next;
	int number;
	int score;
} Node;

void inputChain(Node **phead, const char* name){
	Node *s, *t;
	int number, score;
	printf("Enter chain %s: ", name);
	while (1){
		// Enter -1 for number to stop
		scanf("%d", &number);
		if (number == -1)
			break;
		scanf("%d", &score);
		t = malloc(sizeof *t);
		t->next = NULL;
		t->number = number;
		t->score = score;
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
			if (p->score < m->score)
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

	// Merge B to A
	for (t = a; t->next != NULL; t = t->next);
	t->next = b;
	b->prev = t;
	b = NULL;

	sortChain(&a);

	for (t = a; t != NULL; t = t->next)
		printf("Number:%10d\tScore:%6d\n", t->number, t->score);

	for (t = a; t != NULL;){
		s = t->next;
		free(t);
		t = s;
	}
	// It's always a good practice to set to NULL
	a = NULL;
	return 0;
}
