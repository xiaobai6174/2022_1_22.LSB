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
//	int flag = 1;//������һ��Ҫ�ŵ������Ѿ�����
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)//���û����ѭ����flag����1��˵�����ݱ�����������ģ�ֱ����ֹ
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//��arr�������������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ���ȥ������Ԫ�ص�ַ-&arr[0]
//	bubble_sort(arr,sz);                                                                                              //ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int* p = NULL;//����ָ��
char* p = NULL;//�ַ�ָ��
int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��������
int(*p)[10] = &arr;//(*p)������ָ��
int* p[10];//ָ������
int (*pd)(int, int) = ADD;//����ָ��
int(*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
int(*(*ppfArr)[4])(int, int) = &pfArr;//ָ��[����ָ������]��ָ��  ppfArr��һ������ָ��,ָ��ָ����������ĸ�Ԫ��
//                                                                ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)