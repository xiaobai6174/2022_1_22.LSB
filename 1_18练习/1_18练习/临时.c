#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>


//void bubble_sort(int arr[],int sz)
//{
//	int flag = 1;//假设这一趟要排的数据已经有序
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)//如果没进入循环，flag等于1，说明数据本来就是有序的，直接终止
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//对arr进行排序成升序
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//arr是数组，我们对数组arr进行传参，实际上传过去的是首元素地址-&arr[0]
//	bubble_sort(arr,sz);                                                                                              //冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int* p = NULL;//整型指针
char* p = NULL;//字符指针
int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//整型数组
int(*p)[10] = &arr;//(*p)是数组指针
int* p[10];//指针数组
int (*pd)(int, int) = ADD;//函数指针
int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
int(*(*ppfArr)[4])(int, int) = &pfArr;//指向[函数指针数组]的指针  ppfArr是一个数组指针,指针指向的数组有四个元素
//                                                                指向的数组的每个元素的类型是一个函数指针int(*)(int,int)