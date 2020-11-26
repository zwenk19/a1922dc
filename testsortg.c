#include"sortg.h"
#define N 20

int main(int argc,char **argv){
	int a[N];
	
	initarr(a,N);
	bubble1(a,N);
	printarr(a,N);
	printf("\n");
	
	initarr(a,N);
	bubble2(a,N);
	printarr(a,N);
	printf("\n");

	initarr(a,N);
	bubble3(a,N);
	printarr(a,N);
	printf("\n");

	initarr(a,N);
	insertSort(a,N);
	printarr(a,N);
	printf("\n");

	initarr(a,N);
	selectSort(a,N);
	printarr(a,N);
	printf("\n");

	initarr(a,N);
	quickSort(a,N);
	printarr(a,N);
	printf("\n");

	return 0;

}
