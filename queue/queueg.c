#include"queueg.h"

void initqueue(List *list){
	list -> head = NULL;
	list -> tail = NULL;
	list -> current = NULL;

	return ;
}

int empty(List *list){
	if(list->head == NULL && list->tail ==NULL)
		return 1;
	else
		return 0;
}

void inqueue(List *list, DataType idata){
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = idata;
	node->next = NULL;

	if(list->head == NULL){
		list->head = node;
	}else{
		node->next = list->tail;
		
	}
	list->tail = node;
	return;
}

void outqueue(List *list){
	list -> head = list -> head -> next;

	return;
}

Node *getfront(List *list){
	Node *node = (Node*)malloc(sizeof(Node));
	node = list->head;

	return node;
}

Node *getback(List *list){
	Node *node = (Node*)malloc(sizeof(Node));
	node = list ->tail;

	return node;
}

int getLength(List *list){
	Node *node = (Node*)malloc(sizeof(Node));
	node = list->head;
	
	int k=0;
	while(node != NULL){
		k++;
		node = node->next;
	}
	
	return k;
}


void dispList(List *list){
	Node *node = (Node*)malloc(sizeof(Node));
	node = list->head;//head
	
	int i = 0;
	while(node){
	printf("the %dth node: %d\n", i + 1, node->data);
	node = node->next;
	i++;
	}

	printf("display finished\n");
	
	return ;
}   
