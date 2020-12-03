#ifndef stackg_h
#define stackg_h

#include<stdio.h>
#include<stdlib.h>

typedef int Datatype;

typedef struct node_{     //定义一个节点
	Datatype data;     //数据域
	struct node_ *next;     //指针域
}Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
}List;                       

void initList(List *);
int empty(List *);
void push(List *, Datatype);
void pop(List *);
int gettop(List *);
int getLength(List *);
void dispList(List *);
void conversion(int, int);

#endif
