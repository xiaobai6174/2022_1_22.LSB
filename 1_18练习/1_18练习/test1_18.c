#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>

int main()
{

	return 0;
}

//void menu()                                                 //���ú���ָ������ʵ�ּ�����
//{
//	printf("***************************************\n");
//	printf("***       1.Add         2.Sub       ***\n");
//	printf("***       3.Mul         4.Div       ***\n");
//	printf("***       5.Xor         6.          ***\n");
//	printf("*********        0.exit       *********\n");
//	printf("***************************************\n");
//}
//
//int Add(int x,int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor};          //pfArr[]��һ������ָ������ - ת�Ʊ�
//	int sz = sizeof(pfArr) / sizeof(pfArr[0]);
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		if (input >= 1 && input < sz)
//		{
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	} while (input);
//}

//void menu()                                                                //���ûص�����ʵ�ּ�����
//{
//	printf("***************************************\n");
//	printf("***       1.Add         2.Sub       ***\n");
//	printf("***       3.Mul         4.Div       ***\n");
//	printf("***       5.Xor         6.          ***\n");
//	printf("*********        0.exit       *********\n");
//	printf("***************************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//void Calc(int (*pf)(int, int))                                                //�ص�����
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };          
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("����������Ч\n");
//			break;
//		}
//
//	} while (input);
//}

//int main()
//{
//	char* my_strcpy(char* dest, const char* src);
//	char* (*pf)(char*, const char*) = my_strcpy;                         //дһ������ָ��pf,�ܹ�ָ��my_strcpy                                                                      
//	char* (*pfArr[4])(char*, const char*);                               //дһ������ָ������ pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//	return 0;
//}

//int Add(int x,int y)                                                   //����ָ�������
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//��Ҫһ������,���������Դ���ĸ������ĵ�ַ - ����ָ�������
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������  �������ĸ�����ָ��,�ĸ�����ָ��ֱ�Ϊ���ֺ���
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	void(*signal(int, void(*)(int)))(int);
//	return 0;
//}

//�������������ʽ
//void print1(int arr[3][5], int x, int y)                              //���ַ�ʽ��ʾ�����ά����
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//	 	printf("hello word %d\n",i);
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(500);                         //˯�ߺ���,500����0.5��
//	}
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000-ԭ��
//	//11111111111111111111111101111111-����
//	//11111111111111111111111110000000-����
//	//10000000
//	//11111111111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}

//int check_sys()                        //һ������������ǵ�ǰ�豸���ֽ����Ǵ�˻���С��
//{
//	int a = 1;
//	return *(char*)&a;                    //����"1"-С��  ����"0"-���
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}








////void my_strcpy(char* dest, char* src)             //�Ż�ǰ       //�ô���ʵ�ֿ⺯��strcpy�Ĺ���
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		*src ++;                   //ָ��������ǵ�һ���������++�Ϳ��Է�����һ��
//		*dest ++;
//	}
//	*dest = *src;                  //����ٽ�"\0"����dest��
////}

//void my_strcpy(char* dest,const char* src)                //�Ż���      const�������C���Գ����ؼ��֡�
//{
//	assert(dest != NULL);                //�⺯��assert-����  ������Ϊ�汨������Ϊ������
//	assert(src != NULL);
//
//	while (*dest++ = *src++)            //*dest��*src��++ǰ���и�ֵ,���"\0"��ʱ������"\0"��ASCLLֵΪ0,�Ӷ���ֹѭ��
//	{
//		;
//	}
//	
//}
//
//int main()
//{
//	//strcpy-�ַ�������
//	char arr1[] = "##########################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////struct stu                       //struct-�ṹ��ؼ���   stu-�ṹ���ǩ    struct stu-�ṹ������
////{
////	//��Ա����
////	char name[10];
////	short age;
////	char tele[12];
////	char sex[5];
////}s1,s2,s3;          //s1,s2,s3������ȫ�ֵĽṹ�����

//typedef struct stu                       
//{
//	//��Ա����
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;                //������ṹ��������ΪStu(����)
//
//void print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void print2(Stu* pc)
//{
//	printf("name:%s\n", pc->name);
//	printf("age:%d\n", pc->age);
//	printf("tele:%s\n", pc->tele);
//	printf("sex:%s\n", pc->sex);
//}
//
//int main()
//{
//	Stu s={"����",40,"13876598765","��"};
//	//��ӡ�ṹ������
//	print1(s);
//	print2(&s);
//	return 0;
//}

//double POW(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / (POW(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * POW(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = POW(n, k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}

//int my_strlen(char* str)                                  
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* arr)                             //ѭ����ʽʵ�ַ����ӡһ���ַ���
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//void print(int n)                             //�˷��ھ���
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);//%3d�Ǵ�ӡ�������ʱ��ӡ��λ(���)��������λ�ÿո��룻%-3d���ڴ˻����������
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("�������ӡ���˼��ĳ˷��ھ�:");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()                                 //�ֱ��ӡһ����������������ż��
//{
//	int m = 0;
//	printf("����������:");
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	/*while (n)
//	{
//		if (1 == n % 2)
//		{
//			count++;
//		}
//		n = n / 2;
//	}*/
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	printf("����������:");
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()                                    //����������м���1
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("��%d��1\n", count);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ", arr[i]);
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ======== %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()                               //�������һ���ַ������м����ַ�
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()                                        //��ָ�����δ�ӡ�����е�Ԫ��
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//int main()                                 //���������γ�ʼ��Ϊ1
//{
//	int arr[10] = { 0 };
//	//int* p = arr;
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x112233;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//int main()
//{
//	int c = 1;
//	int a = c + --c;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)//�����������ͣ����Բ���������������˿��Դ�ӡ
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a �ض�
//	char b = 127;
//	//00000000000000000000000001111111 ��������
//	//01111111 - b
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ��
//	printf("%d\n", c);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()                                                 //������ĸ���
//{
//	int a = 10;
//	//ʹ��struct stu������ʹ���һ��ѧ������S1,����ʼ��
//	struct stu S1 = { "����",20,"2019010305" };
//	struct stu* ps = &S1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//�ṹ��ָ��->��Ա��
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//
//	/*printf("%s\n", S1.name);
//	printf("%d\n", S1.age);
//	printf("%s\n", S1.id);*/
//	//�ṹ�����.��Ա��
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i=a++ || ++b || d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}


//int main()                                           //��ʹ����ʱ��������������
//{
//	int a = 3;
//	int b = 5;
//	printf("֮ǰ:a=%d b=%d\n", a, b);
//	a = a ^ b;//a��b�������һ��"����ֵ"����a����b���ʱ��a�������ԭ��a��ֵ��b����a���ʱ��a�������ԭ��b��ֵ��a,�Ӷ�ʵ�ֽ���
//	b = a ^ b;
//	a = a ^ b;
//	printf("֮��:a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	double a = 5 / 2.0;
//	printf("a=%lf", a);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	return 0;
//}

//int main()//��������ʲô��
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//����1��sizeof(������)-��������ʾ��������,sizeof(������)���������������Ĵ�С����λ���ֽ�
//	printf("%p\n", &arr);				  //����2��&�������������������������飬&��������ȡ��������������ĵ�ַ
//	printf("%p\n", &arr+1);				  //���&������+1�����Ӧ���һ��������ĵ�ַ��С���ȣ�����������4���ֽ�
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%d\n", *arr);
//	return 0;
//	//��������������Ԫ�صĵ�ַ�����������⣩
//}

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

//int main()
//{
//	int arr[3][4] = { {1,2,3,},{4,5} };//��ά����
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//һά����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);//%p�Ǵ�ӡ��ַ
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[]������ʲ��������±����ò�����
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int frog(int n)                                   //������̨������
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return frog(n - 1) + frog(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int way = frog(n);
//	printf("%d", way);
//	return 0;
//}


//void hanoi(int num, char sou, char tar, char aux)           //��ŵ������
//{
//	//ͳ���ƶ�����
//	static int i = 1;//���Բ���������� 1 ������ֱ�Ӵ���ʼ���ƶ���Ŀ����
//	if (num == 1) 
//	{
//		printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
//		i++;
//	}
//	else 
//	{
//		hanoi(num - 1, sou, aux, tar);//�ݹ���� hanoi() �������� num-1 ��Բ�̴���ʼ���ƶ�����������
//		//����ʼ����ʣ������һ����Բ���ƶ���Ŀ������
//		printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
//		i++;
//		hanoi(num - 1, aux, tar, sou);//�ݹ���� hanoi() ���������������ϵ� num-1 Բ���ƶ���Ŀ������
//	}
//}
//
//int main()
//{
//	hanoi(3, 'A', 'B', 'C');//���ƶ� 3 ��Բ��Ϊ������ʼ����Ŀ�������������ֱ��� A��B��C ��ʾ
//	return 0;
//}

//int count = 0;
//int Na(int n)//�ݹ�
//{
//	//if (n == 3)//���Ե�����쳲������������ڼ����б��ظ������˼���
//	//{
//	//	count++;
//	//}
//	if (n <= 2)
//		return 1;
//	else
//		return Na(n - 1) + Na(n - 2);
//}
// 
//int Na(int n)//ѭ��
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()                                 //������N��쳲�����������
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-������������
//	ret = Na(n);
//	printf("%d\n", ret);
//	/*printf("count=%d\n", count);*/
//	return 0;
//}

////int Fac1(int n)�׳�ѭ��
////{
////	int i = 0;
////	int ret = 1;
////	for(i=1;i<=n;i++)
////	{
////		ret *= i;
////	}
////	return ret;
////}
//int Fac2(int n)//�׳˵ݹ�
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n-1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	/*ret = Fac1(n);*/
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

////my_strlen("bit");
////1 + my_strlen("it");
////1 + 1 + my_strlen("t");
////1 + 1 + 1 + my_strlen("");
////1+1+1+0
////3
//int my_strlen(char* str)                         //�����ַ����ȵݹ�
//{
//	if (*str != 0)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//}

//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr);
//	printf("%d\n", len);*/
//	int len = my_strlen(arr);//���ֱ�ӽ�arr����ȥ�����Ĳ����������飬���Ǵ�����Ԫ�ص�ַ
//	printf("len=%d\n", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
// }

//void ADD(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//binary_search(int arr[],int k,int sz)
//{
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//		if (left > right)
//		{
//			return -1;
//		}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int ret=binary_search(arr, k,sz);//����������ֲ����Զ��庯�� ���ֱ�ӽ�arr����ȥ����������Ԫ�ص�ַ��������ָ��
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	printf("��������ݣ�\n");
//	int n;
//	scanf("%d", &n);
//	is_leap_year(n);
//	if (is_leap_year(n) == 1)
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//void is_prime(int* x)//�����ж��Ƿ�Ϊ����
//{
//	int z = 0;
//	for (z = 2; z<=sqrt(*x); z++)
//	{
//		if (*x % z == 0)
//			break;
//	}
//	if (z > sqrt(*x))
//		printf("������\n");
//	else
//		printf("��������\n");
//}
//int main()
//{
//	printf("���������֣�\n");
//	int i;
//	scanf("%d", &i);
//	is_prime(&i);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	//int left = 0;//���±�
	//int right = sz - 1;//���±�
	//while (left<=right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
 //		}
	//	else
	//	{
	//		printf("�ҵ��ˣ��±���: %d\n", mid);
	//		break;
	//	}
//	}
	/*if (left > right)
	{
		printf("�Ҳ���\n");
	}*/
	//	return 0;
	//}

	//int main()
	//{
	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int k = 7;//дһ�����룬��arr����(�����)���ҵ�7
	//	int i = 0;
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	for (i = 0; i < sz; i++)
	//	{
	//		if (k == arr[i])
	//		{
	//			printf("�ҵ��ˣ��±���: %d\n", i);
	//			break;
	//		}
	//	}
	//	if (i == sz)
	//		printf("�Ҳ���\n");
	//	return 0;
	//}

	//int is_prime(int n)
	//{
	//	int z = 0;
	//	for (z = 2; z<=sqrt(n); z++)
	//	{
	//		if (n % z == 0)
	//			return 0;
	//	}
	//	return 1;
	//}
	//
	//int main()
	//{
	//	int i = 1;
	//	for (i = 100; i <= 200; i++)
	//	{
	//		if (is_prime(i) == 1)
	//			printf("%d ", i);
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 0;
	//	int count = 0;
	//	for (i = 101; i <= 200; i+=2)
	//	{
	//		int j = 0;//�����Գ���
	//		for (j = 2; j < sqrt(i); j++)//sqrt����ѧ�⺯������˼�ǿ�ƽ��
	//		{
	//			if (i % j == 0)
	//			{
	//				break;
	//			}
	//		}
	//		if (j > sqrt(i))
	//		{
	//			count++;
	//			printf("%d ", i);
	//		}
	//	}
	//	printf("\ncount=%d", count);
	//	return 0;
	//}

	////void Swap1(int x,int y)ע��  ��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε���ʱ��������˴�ʱ���βε��޸��ǲ���ı�ʵ�ε�
	////{
	////	int tmp = 0;
	////	tmp = x;
	////	x = y;
	////	y = tmp;
	////}
	//void Swap2(int* pa, int* pb)//�β� �βδ�ֵ ����ǰ�ǰ�ʵ�εĵ�ַ����ȥ������ǿ��Ըı�ֵ��
	//{
	//	int tmp = 0;
	//	tmp = *pa;
	//	*pa = *pb;
	//	*pb = tmp;
	//}
	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	/*Swap1(a, b);ע��*/
	//	Swap2(&a, &b);//ʵ�� ʵ�δ�ַ��ʵ�α������ȷ�е�ֵ   ֵ�����������������ʽ����ֵ����
	//	printf("a=%d b=%d\n", a, b);
	//	return 0;
	//}

	//int main() {
	//	char ch = 'w';
	//	char* pc = &ch;
	//	printf("%d\n", sizeof(pc));
	//	return 0;
	//}

	//int main() {
	//	int a = 10;//4���ֽ�
	//	int* p = &a;//ȡ��ַ
	//	printf("%p\n", &a);
	//	printf("%p\n", p);
	//	//*p;*-�����ò�����/��ӷ��ʲ�������*p=20����˼����ͨ��p�ҵ�a�ĵ�ַ����a�ĳ�20������˵�ǵ�ַ���䣬�滻�˱�����
	//	return 0;
	//}

	//int get_max(int x, int y)
	//{
	//	x > y ? x : y;
	//	/*int z = 0;
	//	if (x > y)
	//		z = x;
	//	else
	//		z = y;
	//	return z;*/
	//}
	//int main()
	//{
	//	int a = 40;
	//	int b = 25;
	//	int max = get_max(a, b);
	//	printf("max=%d\n", max);
	//	return 0;
	//}

	//int main()
	//{
	//	char arr1[] = "bit";
	//	char arr2[20] = "########";
	//	strcpy(arr2, arr1);
	//	printf("%s\n", arr2);
	//	return 0;
	//}

	//int ADD(int x, int y)
	//{
	//	int z = 0;
	//	z = x + y;
	//	return z;
	//}
	//int main()
	//{
	//	int a = 0;
	//	int b = 0;
	//	scanf("%d %d", &a, &b);
	//	int sum = ADD(a, b);
	//	printf("sum=%d\n", sum);
	//	return 0;
	//}

	//int main()
	//{
	//	char input[20]= { 0 };
	//	system("shutdown -s -t 60");
	//again:
	//	printf("���ĵ��Խ���5���Ӻ�ػ��������룺���������򽫻�ػ���\n�����룺");
	//	scanf_s("%s", input);
	//	if (0==strcmp(input, "������"))
	//	{
	//		system("shutdown -a");
	//	}
	//	else
	//	{
	//		goto again;
	//	}
	//	return 0;
	//}

	//void menu()
	//{
	//	printf("####################\n");
	//	printf("##1.play ##0.exit ##\n");
	//	printf("####################\n");
	//}
	//void game()
	//{
	//	int ret = 0;
	//	int guess = 0;//���ղµ�����
	//	int count = 0;
	//	//time_t time(time_t *timer)
	//	//time
	//	
	//	ret = rand()%100+1;//���������,Ȼ��ģ��100���ټ�һ(������ʹ���ɵ��������1-100֮��)
	//	while (1)
	//	{
	//		printf("�������:\n");
	//		scanf("%d", &guess);
	//		if (guess > ret)
	//		{
	//			printf("�´���\n");
	//			count++;
	//		}
	//		else if(guess<ret)
	//		{
	//			printf("��С��\n");
	//			count++;
	//		}
	//		else
	//		{
	//			printf("�¶��ˣ����� %d\n",ret);
	//			printf("��һ������%d��\n",count);
	//			break;
	//		}
	//	}
	//}
	//int main()
	//{
	//	int input = 0;
	//	srand((unsigned int)time(NULL));//��������ʱ�������ʱ����������������������ʼ��   NULL-��ָ��
	//	do
	//	{
	//		menu();
	//		printf("��ѡ��\n");
	//		scanf("%d", &input);
	//		switch (input)
	//		{
	//		case 1:
	//				game();//��������Ϸ
	//				break;
	//		case 0:
	//				printf("�˳���Ϸ\n");
	//				break;
	//		default:
	//			printf("ѡ�����\n");
	//			break;
	//		}
	//	} while (input);
	//	return 0;
	//}

	//int main()
	//{
	//    for (int j = 1; j <= 9; j++) 
	//    {
	//        for (int i = 1; i <= 9; i++) 
	//        {
	//            printf("%d*%d=%-2d  ", i, j, i * j);//%2d�Ǵ�ӡ�������ʱ��ӡ��λ(���)��������λ�ÿո��룻%-2d���ڴ˻����������
	//            if (i == j) 
	//            {
	//                break;
	//            }
	//        }
	//        printf("\n");
	//    }
	//    return 0;
	//}

	//int main()
	//{
	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int i = 0;
	//	int max = arr[0];
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	for (i = 1; i < sz; i++)
	//	{
	//		if (arr[i] > max)
	//		{
	//			max = arr[i];
	//		}
	//	}
	//	printf("���ֵ�ǣ�%d\n", max);
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 0;
	//	double sum = 0.0;
	//	int flag = 1;
	//	for (i = 1; i <= 100; i++)
	//	{
	//		sum +=flag*1.0 / i;
	//		flag = -flag;
	//	}
	//	printf("%lf\n", sum);
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 0;
	//	int count = 0;
	//	for (i = 0; i < 100; i++)
	//	{
	//		if (i % 10 == 9)
	//			count++;
	//		if (i / 10 == 9)
	//			count++;
	//	}
	//	printf("���ֹ�%d ������9\n", count);
	//	return 0;
	//}



	//int main()
	//{
	//	int m = 0;
	//	int n = 0;
	//	int r = 0;
	//	scanf("%d %d",&m,&n);
	//	if (m< n)
	//	{
	//		int zjz = n;
	//		n = m;
	//		m = zjz;
	//	}
	//	while (m % n)
	//	{
	//		r = m % n;
	//		m = n;
	//		n = r;
	//	}
	//	printf("%d\n", r);
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 0;
	//	for (i = 1; i < 100; i++)
	//	{
	//		if (i % 3 == 0)
	//			printf("%d ", i);
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 3;
	//	while (i <= 100)
	//	{
	//		printf("%d ", i);
	//		i += 3;
	//	}
	//	return 0;
	//}

	//int main()//��������С����
	//{
	//	int a = 0;
	//	int b = 0;
	//	int c = 0;
	//	scanf("%d%d%d",&a,&b,&c);//213
	//	if (a<b)
	//	{
	//		int tmp = a;
	//		a = b;
	//		b = tmp;
	//	}
	//	if (a<c)
	//	{
	//		int tmp = a;
	//		a = c;
	//		c = tmp;
	//	}
	//	if (b<c)
	//	{
	//		int tmp = b;
	//		b = c;
	//		c = tmp;
	//	}
	//	printf("%d %d %d\n", a, b, c);
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 0;
	//	char password[20] = { 0 };
	//	for (i = 0; i < 3; i++)
	//	{
	//		printf("����������\n");
	//		scanf("%s", password);
	//		if (strcmp(password,"123456")==0)//"=="���������Ƚ������ַ����Ƿ����,Ӧ��ʹ��һ���⺯��-strcmp
	//		{
	//			printf("��½�ɹ�\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("�������\n");
	//		}
	//	}
	//	if (i == 3)
	//		printf("����������Σ����˳�����\n");
	//	return 0;
	//}

	//int main()
	//{
	//	char arr1[] = "welcome to my home!!!!";
	//	char arr2[] = "######################";
	//	int left = 0;
	//	/*int right = sizeof(arr1) / sizeof(arr1[0])-2;*/
	//	int right = strlen(arr1) - 1;
	//	while (left<=right)
	//	{
	//		arr2[left] = arr1[left];
	//		arr2[right] = arr1[right];
	//		printf("%s\n", arr2);
	//		Sleep(1000);//��Ϣһ��
	//		system("cls");//system-ִ��ϵͳ�����һ������ cls-�����Ļ
	//		left++;
	//		right--;
	//	}
	//	printf("%s\n", arr2);
	//	return 0;
	//}



	//int main()//����1��+2��+.....+10��
	//{
	//	int i = 0;
	//	int n = 0;
	//	int k = 1;
	//	int sum = 0;
	//	for (n = 1; n <= 10; n++)
	//	{
	//		k = k * n;
	//		sum = sum + k;
	//	}
	//	printf("sum=%d\n", sum);
	//	return 0;
	//}

	//int main()//����1��+2��+.....+10��
	//{
	//	int i = 0;
	//	int n = 0;
	//	int sum = 0;
	//	for (n = 1; n <= 10; n++)
	//	{
	//		int k = 1;//���½�k����Ϊ��1���Ӷ�������һ������
	//		for (i = 1; i <= n; i++)
	//		{
	//			k = k * i;
	//		}
	//		sum = sum + k;
	//	}
	//	printf("sum=%d\n", sum);
	//	return 0;
	//}

	//int main()//����N�Ľ׳�
	//{
	//	int i = 0;
	//	int k = 1;
	//	int n = 0;
	//	printf("���������֣�\n");
	//	scanf("%d", &n);
	//	for (i = 1; i <= n; i++)
	//	{
	//		k = k * i;
	//	}
	//	printf("%d\n", k);
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 1;
	//	do
	//	{
	//		if (i == 5)
	//			continue;
	//		printf("%d ", i);
	//		i++;
	//	} 
	//	while (i<=10);
	//	return 0;
	//}

	//int main()
	//{
	//	int x, y;
	//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	//	{
	//		printf("hehe\n");
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 0;
	//	int j = 0;
	//	for (; i < 10; i++)
	//	{
	//		for (; j < 10; j++)
	//		{
	//			printf("hehe\n");
	//		}
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 0;
	//	for ( i = 1; i <= 10; i++)
	//	{
	//		if (i == 5)
	//			continue;
	//		printf("%d ", i);
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int ch = 0;
	//	while ((ch = getchar()) != EOF)
	//	{
	//		if (ch < '0' || ch>'9')
	//			continue;
	//		putchar(ch);
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int ret = 0;
	//	int ch = 0;
	//	char password[20] = {0};
	//	printf("����������:>");
	//	scanf("%s", password);//��ȡ���벢����'password'������
	//	/*��������ʣһ��'\n'
	//	��ȡһ��'\n'*/
	//	while ((ch = getchar()) != '\n')
	//	{
	//		;
	//	}
	//	printf("��ȷ��(Y/N):>");
	//	ret = getchar();
	//	if (ret == 'Y')
	//	{
	//		printf("ȷ�ϳɹ�\n");
	//	}
	//	else
	//	{
	//		printf("����ȷ��\n");
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int ch = 0;
	//	while ((ch = getchar()) != EOF)//EOF=end of file �ļ�������־
	//	{
	//		putchar(ch);
	//	}
	//	/*int ch = getchar();
	//	putchar(ch);
	//	printf("%c\n", ch);*/
	//	return 0;
	//}

	//int main()
	//{
	//	int i = 1;
	//	while (i<=10)
	//	{
	//		if (i == 5)
	//			continue;
	//		printf("%d ", i);
	//		i++;
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int n = 1;
	//	int m = 2;
	//	switch (n)
	//	{
	//	case 1:m++;
	//	case 2:n++;
	//	case 3:
	//		switch (n)
	//		{//switch����Ƕ��ʹ��
	//		case 1:n++;
	//		case 2:m++; n++;
	//			break;
	//		}
	//	case 4:m++;
	//		break;
	//	default:
	//		break;
	//	}
	//	printf("m=%d,n=%d\n", m, n);
	//	return 0;
	//}

	//int main()
	//{
	//	int day = 0;
	//	scanf("%d", &day);
	//	switch (day)
	//	{
	//	case 1:
	//	case 2:
	//	case 3:
	//	case 4:
	//	case 5:
	//		printf("������\n");
	//		break;
	//	case 6:
	//	case 7:
	//		printf("��Ϣ��\n");
	//		break;
	//	default://��ԷǷ����ʹ��
	//		printf("������ʲô�󲡣����������⣿\n");
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	for (int i = 1; i <= 100; i++)
	//	{
	//		if (i % 2 != 0)
	//			printf("%d ", i);
	//	}
	//	return 0;
	//}

	//int main() 
	//{
	//	printf("����������:\n");
	//	int i;
	//	scanf("%d", &i);
	//	if(i%2==1)
	//		printf("������������\n");
	//	return 0;
	//}

	//int main() {
	//	int a = 0;
	//	int b = 2;
	//	if (a == 1)
	//	{
	//		if (b == 2)
	//			printf("hehe\n");
	//	}
	//	else
	//			printf("haha\n");
	//
	//	return 0;
	//}

	//int main() {
	//	printf("����������\n");
	//	int age;
	//	scanf("%d", &age);
	//	if (age < 18) 
	//	{
	//		printf("δ����\n");
	//		printf("����̸����\n");
	//	}
	//	else
	//	{
	//		if (age >= 18 && age < 28)
	//			printf("����\n");
	//		else if (age >= 28 && age < 50)
	//			printf("����\n");
	//		else if (age >= 50 && age < 90)
	//			printf("����\n");
	//		else
	//			printf("�ϲ���\n");
	//	}
	//	return 0;
	//}

	//struct Book
	//	{
	//		char name[20];//C���Գ������
	//		short price;//55
	//	};
	//	int main() {
	//		struct Book b1=
	//		{
	//			"C���Գ������",55//���ýṹ������-����һ�������͵Ľṹ�����
	//		};
	//		struct  Book* pb = &b1;
	//	printf("����:%s\n", b1.name);
	//	printf("�۸�:%d\n", b1.price);
	//	strcpy(b1.name, "c++");//��˼���ǰ�"c++"������b1��"name"��ȥ��strcpy-string copy:�ַ�������-�⺯������Ҫstring.hͷ�ļ���
	//	b1.price = 15;
	//	printf("�޸ĺ������Ϊ:%s\n", b1.name);
	//	printf("�޸ĺ�ļ۸�:%d\n", b1.price);
	// 
	//	return 0;
	//}

	//struct Book
	//{
	//	char name[20];//C���Գ������
	//	short price;//55
	//};
	//int main() {
	//	struct Book b1=
	//	{
	//		"C���Գ������",55//���ýṹ������-����һ�������͵Ľṹ�����
	//	};
	//	struct  Book* pb = &b1;
	//	printf("����:%s\n", pb->name);
	//	printf("�۸�:%d\n", pb->price);//->���������˼�Ǵ�pb�������ȡ��b1���ĳ������
	//	//"."����������˼����:�ṹ�����.��Ա
	//	//"->"����˼����:�ṹ��ָ��->��Ա
	// 
	//	/*printf("����:%s\n", b1.name);
	//	printf("�۸�:%d\n", b1.price);
	//	b1.price = 15;
	//	printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
	// 
	//	return 0;
	//}



	//#define MAX(X,Y)(X>Y?X:Y)
	//int main() {
	//	int a = 20;
	//	int b = 15;
	//	int max = MAX(a, b);
	//	printf("���ֵ=%d\n", max);
	//
	//	return 0;
	//}

	//void test()
	//{
	//	static int a = 1;
	//	a++;
	//	printf("a=%d\n", a);
	//}
	//
	//int main() {
	//	int i = 0;
	//	while (i < 5)
	//	{
	//		test();
	//		i++;
	//	}
	//	return 0;
	//}

	//int ADD(int a, int b)
	//{
	//	int z = 0;
	//	z = a + b;
	//	return z;
	//
	//}
	//int main() {
	//	//int arr[10] = { 0 };
	//	//arr[4];//[]-�±����ò�����
	//	int a = 10;
	//	int b = 20;
	//	int sum = ADD(a, b);//()-�������ò�����
	//	printf("%d\n", sum);
	//	return 0;
	//}
	//int main() {
	//	int a = 20;
	//	int b = 15;
	//	int max = 0;
	//	max = (a > b ? a : b);//����������������Ŀ������
	//	printf("%d\n", max);
	//
	//	return 0;
	//}
	//int main() {
	//	int a = 0;
	//	int b = ~a;//��λȡ��
	//	printf("%d\n", b);
	//
	//	return 0;
	//}
	//int MAX(int x, int y)//���庯��
	//{
	//	if (x > y)
	//		return x;
	//	else
	//		return y;
	//
	//}
	//int main() {
	//
	//	int num1 = 10;
	//	int num2 = 20;
	//	int max = 0;
	//	max = MAX(num1, num2);
	//	printf("max=%d\n", max);
	//	return 0;
	//}
	//int main() {
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����
	//	int i = 0;
	//	while (i < 10)//ѭ��
	//	{
	//		printf("%d ", arr[i]);
	//		i++;
	//	}
	//	
	//	return 0;
	//}
	//int main() {
	//	int line = 0;
	//	printf("�������\n");
	//
	//	while (line<5000)
	//	{
	//		printf("��һ�д���%d\n",line);
	//		line++;
	//	}
	//	if(line>=5000)
	//		printf("��offer\n");
	//	return 0;
	//}

	//int main() {
	//	int input = 0;
	//	printf("�������\n");
	//	printf("���ú�ѧϰ��?(1/0)>:");
	//	scanf("%d", &input);
	//	if (input == 1)//if���
	//		printf("��offer\n");
	//	else
	//		printf("�ؼ��ֺ���\n");
	//
	//	return 0;
	//}


	//int main() {
	//	printf("������������ߵ�Ӣ�ߺ�Ӣ�磬""��\"5 7\"��ʾ5Ӣ��7Ӣ�磺");
	//	int price;
	//	int amount;
	//	scanf("%d %d", &price, &amount);
	//	printf("�����%f�ס�\n", ((price + amount / 12.0) * 0.3048));
	//	return 0;
	//}


	//int main() {
	//	int hour1, minute1;
	//	int hour2, minute2;
	//	scanf("%d %d", &hour1, &minute1);
	//	scanf("%d %d", &hour2, &minute2);
	//	int t1 = hour1 * 60 + minute1;
	//	int t2 = hour2 * 60 + minute2;
	//	int t = t2 - t1;
	//	printf("ʱ�����%dʱ%d�֡�", t / 60, t % 60);
	//	return 0;
	//}

	//int main() {
	//	int price = 0;
	//	const int amount = 100;
	//	printf("�������Ԫ����");
	//	scanf("%d", &price);
	//	printf("������Ʊ��");
	//	scanf("%d", &amount);
	//	int chang = amount - price;
	//	printf("����%dԪ��\n", chang);
	//	return 0;
	//}