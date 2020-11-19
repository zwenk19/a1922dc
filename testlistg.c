#include"listg.h"

int main(int argc, char **argv)
{
	LinkList l; 
	l = createList();
	inseNode(l, 1, 10);
	inseNode(l, 1, 20);
	deleNode(l, 2);
	inseNode(l, 1, 30);
	inseNode(l, 1, 40);
	printf("链表的元素个数为：%d\n", getLength(l));
	print(l);
	printf("链表的第2个元素为: %d", getData(l, 2));

	return 0;
}
