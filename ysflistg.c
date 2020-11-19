#include<stdio.h>
#include<stdlib.h>

#define n 11
#define m 3

typedef struct _node{
	int Num;
	struct _node *next;
}Node;

int main( int argv, char **argc){
	int k = 0;
	Node *p, *q, *r;
	p = q = (Node*)malloc(sizeof(Node));
	p -> Num = 1;
	for(int i = 2; i<=n; i++){
		r = (Node*)malloc(sizeof(Node));
		r -> Num = i;
		q -> next = r;
		q = r;
	}
	q -> next = p;

	q = p;
	while(q->next != q){
		for(int i = 1; i<m; i++){
			p=q;
			q=q->next;
		}
		p->next = q->next;
		free(q);
		q = p->next;
	}
	printf("有%d个人围成一圈报数，假设数到第%d个人出局\n",n,m);
	printf("那么最后一个获胜者的编号是: %d\n", q->Num);

	return 0;
}

