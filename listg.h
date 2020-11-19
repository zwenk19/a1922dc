#ifndef listg_h
#define listg_h

#include<stdio.h>
#include<stdlib.h>
typedef int DataType;

typedef struct _node{
	DataType data;
	struct _node *next;
}Node,*LinkList;

LinkList createList();
int getLength(Node *);
void inseNode(Node *, int, DataType);
void deleNode(Node *, int);
void empty(Node *);
void print(Node *);
DataType getData(Node * ,DataType);
Node* find(Node *, DataType);
void clearList(Node *);

#endif
