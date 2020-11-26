#ifndef sortg_h
#define sortg_h

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initarr(int *, int);
void printarr(int *, int);

void bubble1(int *,int );
void bubble2(int *,int );
void bubble3(int *,int );

void insertSort(int *,int );
void selectSort(int *,int );

int partition(int *,int ,int );
void Qsort(int *,int ,int );
void quickSort(int *,int );


#endif
