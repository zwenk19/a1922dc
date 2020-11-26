#include"sortg.h"

void initarr(int *a, int N){          //初始化数组
	int i;

	for(i=0; i<N; i++)
		a[i] = rand() % 100;
	printf("初始数据为: ");

	for(i=0; i<N ;i++)
		printf("%d ", a[i]);
	printf("\n");
}

void printarr(int *a, int N){           //输出排序后的数组
	int i;
	printf("排序后数据: ");
	for(i=0; i<N; i++)
		printf("%d ",a[i]);

	printf("\n");
}

void bubble1(int *a,int n){          //冒泡排序1，从前往后
	int i,j,t;
	for(i=1; i<n ;i++){
		for(j=0; j<n-1; j++){
			if(a[j] > a[j+1]){
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
			
			}
		}
	}
}

void bubble2(int *a,int n){          //冒泡排序2，从后往前
	int i,j,t;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--){
			if(a[j-1] > a[j]){
			t=a[j-1];
			a[j-1] = a[j];
			a[j] = t;
			}
		}
	}
}

void bubble3(int *a,int n){          //冒泡排序3，加上一个标志flag
       int i, flag = 1, t;
	for(i=1; i<n && flag==1; i++){
	 	flag = 0;
 		for (int j=0; j<n-1; j++){
	       		if(a[j] > a[j+1]){
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
			flag = 1;
			}
		}
	}
}

void insertSort(int *a, int n){          //插入排序
	int i, j ,temp;
	for(i= 1; i<n; i++){
		temp = a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}

void selectSort(int *a, int n){          //选择排序
	int i,j,k,m;
	for(i=0; i<n-1; i++){
		m = a[i];
		k = i;
		for(j=i+1; j<n; j++)
			if(a[j] < m){
				m=a[j];
				k=j;
			}
		a[k] = a[i];
		a[i] = m;
	}
}

int partition(int *a, int low, int high){          //将a数组分为两个区
	int x = a[low];
	while(low < high){
		while(low < high && a[high] >= x) high--;
		if(low < high){
			a[low] = a[high];
			low ++;
		}
		while(low < high && a[low] <= x) low++;
		if(low <high){
			a[high] = a[low];
			high --;
		}
	}
	a[low] = x;
	return low;
}

void Qsort(int *a, int low, int high){          //将[low,high]区间内的元素进行快速排序
	if(low < high){
		int mid = partition(a, low, high);
		Qsort(a, low, mid-1);
		Qsort(a, mid +1, high);
	}
}

void quickSort(int *a, int n){          //快速排序
	Qsort(a, 0, n-1);
}

