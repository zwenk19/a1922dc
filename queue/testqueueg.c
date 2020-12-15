#include"queueg.h"

int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	initqueue(list);
	inqueue(list, 4);
	inqueue(list, 6);
	inqueue(list, 8);
	inqueue(list, 10);
	//dispList(list);
	
	Node *temp = getfront(list);
	printf("getfront result: %d\n", temp -> data);
	Node *tmp = getback(list);
	printf("getback result: %d\n", tmp -> data);

	//outqueue(list);
	//printf("getback result: %d\n",tmp -> data);
	//dispList(list);
	//outqueue(list);
	//printf("getback result: %d\n",temp -> data);
	//dispList(list);
	//printf("the list: %d\n", getLength(list));

	return 0;
}
