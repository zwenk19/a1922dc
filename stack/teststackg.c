#include"stackg.h"

int main(int argc, char **argv){	
	int n = 0;
	List* list = (List *)malloc(sizeof(List));
	initList(list);
	
	push(list, 4);
	push(list, 6);
	push(list, 8);
	push(list, 10);
	dispList(list);
	printf("the list: %d\n", getLength(list));
	int temp = gettop(list);
	printf("gettop result: %d\n",temp);
	pop(list);
	dispList(list);
	pop(list);
	dispList(list);
	printf("the list: %d\n", getLength(list));

	printf("请输入你想要转换进制的数：");
	scanf("%d",&n);

	printf("%d的二进制数为: ",n);
	conversion(n, 2);

	printf("%d的八进制数为: ",n);
	conversion(n, 8);
	
	printf("%d的十六进制数为: ",n);
	conversion(n, 16);
	
	return 0;

}
