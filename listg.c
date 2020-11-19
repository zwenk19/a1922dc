#include"listg.h"

LinkList createList(){          //创建链表
	LinkList head;
	head = (LinkList)malloc(sizeof(Node)*50);
	head->next = NULL;
	
	return head;
}

int getLength(Node *l){          //求链表长度
	Node *p = l->next;
	int k = 0;
	while(p){
		k++;
		p = p->next;
	}
	return k;
}

void inseNode(Node *l, int k, DataType x){          //在链表l的第k个位置插入元素x
	if(k<1) exit(1);
	Node *p = l;
	int i = 0;
	while(p && i<k-1){
		p = p->next;
		i++;
	}
	if(!p) exit(1);
	Node *q = (Node*)malloc(sizeof(Node));
	q->data = x;
	q->next = p->next;
	p->next = q;
	
}

void deleNode(Node *l, int k){          //删除链表l的第k个元素
	if(k<1) exit(1);
	Node *p = l;
	int i = 0;
	while(p->next && i<k-1){
		p = p->next;
		i++;
	}
	if(p->next==NULL) exit(1);
	Node *q = p->next;
	p->next = q->next;
	free(q);
}

void empty(Node *l){          //判断表是否为空
	int i;
	i=l->next == NULL;
	return i;
}

void print(Node *l){          //输出链表
	
	Node *p = l->next;
	while(p){
		printf("%d\t", p->data);
		p = p->next;
	}
	printf("\n");
}

DataType getData(Node *l,DataType k){          //求链表l的第k个元素的值
	if(k<1) exit(1);
	Node *p = l;
	int i = 0;
	while(p && i<k){
	p = p->next;
	i++;
	}
	if (!p) exit(1);
	return p->data;
}
Node* find(Node *l, DataType x){          //在链表l中查找值为x的元素
	Node *p = l->next;
	while(p && p->data!=x)
		p = p->next;
	return p;
}

void clearList(Node *l){          //清空链表
	Node *p, *q;
	p = l->next;
	while(p){
		q = p;
		p = p->next;
		free(q);
	}
	l->next = NULL;

}
