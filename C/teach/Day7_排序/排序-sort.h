#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

#define N 100000000
#define R 100
#define SWAP(a,b){int tmp;tmp=a;a=b;b=tmp;}//宏，比函数效率稍高，减少重复代码

void arrPrint(int* arr);
void arrSelect(int* arr);
void arrInsert(int* arr);
void arrShell(int* arr);
void arrQuick(int* arr, int left, int right);
void arrHeap(int* arr);
void arrCount(int* arr);
