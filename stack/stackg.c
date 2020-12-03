#include"stackg.h"

void initList(List *list){          //初始化栈
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;

	return;
}

int empty(List *list){          //判断栈是否为空
	if(list->head == NULL)
		return 1;
	else
		return 0;
}

void push(List *list, Datatype data){          //入栈
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	if(list->head == NULL){
		list->tail = node;
	}else{
		node->next = list->head;
	}
	list->head = node;
	return;
}

void pop(List *list){          //出栈
	list->head = list->head->next;

	return;
}

int gettop(List *list){          //输出栈顶元素
	Node *node = (Node*)malloc(sizeof(Node));
	node = list->head;

	return node->data;
}

int getLength(List *list){          //输出栈的长度
	Node *node = (Node*)malloc(sizeof(Node));
	node = list->head;
	int i = 0;
	while(node != NULL){
		node = node->next;
		i++;
	}

	return i;
}	

void dispList(List *list){          //打印栈里所有元素
	Node *node = (Node*)malloc(sizeof(Node));
	node = list->head;
	int i = 0;
	while(node != NULL){
		printf("the %dth node: %d\n",i+1,node->data);
		node = node->next;
		i++;
	}
	printf("display finished\n");

	return;
}

void conversion(int n, int d){          //将十进制数进行二进制、八进制、十六进制数制转换
	char c[] = "0123456789ABCDEF";
	List *s=(List*)malloc(sizeof(List));
	initList(s);

	while(n){
		push(s, n%d);
		n/=d;
	}
	
	while(!empty(s)){
		printf("%c",c[gettop(s)]);
		pop(s);
	}
	printf("\n");
}

