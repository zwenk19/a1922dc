#ifndef queueg_h
#define queueg_h

#include<stdio.h>
#include<stdlib.h>

typedef int DataType;

typedef struct node_{
	DataType data;
	struct node_ *next;
}Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
}List;

void initqueue(List *);
int empty(List *);
void inqueue(List *, DataType );
void outqueue(List *);
Node *getfront(List *);
Node *getback(List *);
int getLength(List *);
//void dispList(List *);

#endif
