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

//void menu()                                                 //利用函数指针数组实现计算器
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
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor};          //pfArr[]是一个函数指针数组 - 转移表
//	int sz = sizeof(pfArr) / sizeof(pfArr[0]);
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input >= 1 && input < sz)
//		{
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//
//	} while (input);
//}

//void menu()                                                                //利用回调函数实现计算器
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
//void Calc(int (*pf)(int, int))                                                //回调函数
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:");
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
//		printf("请选择:");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("输入数字无效\n");
//			break;
//		}
//
//	} while (input);
//}

//int main()
//{
//	char* my_strcpy(char* dest, const char* src);
//	char* (*pf)(char*, const char*) = my_strcpy;                         //写一个函数指针pf,能够指向my_strcpy                                                                      
//	char* (*pfArr[4])(char*, const char*);                               //写一个函数指针数组 pfArr,能够存放4个my_strcpy函数的地址
//	return 0;
//}

//int Add(int x,int y)                                                   //函数指针的数组
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
//	//需要一个数组,这个数组可以存放四个函数的地址 - 函数指针的数组
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组  里面存放四个函数指针,四个函数指针分别为四种函数
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

//参数是数组的形式
//void print1(int arr[3][5], int x, int y)                              //两种方式演示输出二维数组
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
////参数是指针的形式
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
//		Sleep(500);                         //睡眠函数,500代表0.5秒
//	}
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000-原码
//	//11111111111111111111111101111111-反码
//	//11111111111111111111111110000000-补码
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

//int check_sys()                        //一串代码告诉我们当前设备的字节序是大端还是小端
//{
//	int a = 1;
//	return *(char*)&a;                    //返回"1"-小端  返回"0"-大端
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}








////void my_strcpy(char* dest, char* src)             //优化前       //用代码实现库函数strcpy的功能
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		*src ++;                   //指针解引用是第一个参数因此++就可以访问下一个
//		*dest ++;
//	}
//	*dest = *src;                  //最后再将"\0"赋到dest里
////}

//void my_strcpy(char* dest,const char* src)                //优化后      const意义见“C语言常见关键字”
//{
//	assert(dest != NULL);                //库函数assert-断言  当条件为真报错，条件为假运行
//	assert(src != NULL);
//
//	while (*dest++ = *src++)            //*dest和*src在++前进行赋值,最后到"\0"的时候由于"\0"的ASCLL值为0,从而终止循环
//	{
//		;
//	}
//	
//}
//
//int main()
//{
//	//strcpy-字符串拷贝
//	char arr1[] = "##########################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////struct stu                       //struct-结构体关键字   stu-结构体标签    struct stu-结构体类型
////{
////	//成员变量
////	char name[10];
////	short age;
////	char tele[12];
////	char sex[5];
////}s1,s2,s3;          //s1,s2,s3是三个全局的结构体变量

//typedef struct stu                       
//{
//	//成员变量
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;                //把这个结构体重命名为Stu(类型)
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
//	Stu s={"李四",40,"13876598765","男"};
//	//打印结构体数据
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
//void reverse_string(char* arr)                             //循环方式实现反向打印一个字符串
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

//void print(int n)                             //乘法口诀表
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);//%3d是打印这个内容时打印两位(宽度)，不够两位用空格补齐；%-3d是在此基础上左对齐
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入打印几乘几的乘法口诀:");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()                                 //分别打印一个二进制数的奇数偶数
//{
//	int m = 0;
//	printf("请输入数字:");
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
//	printf("请输入数字:");
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()                                    //求二进制里有几个1
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
//	printf("有%d个1\n", count);
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
//int main()                               //求给定的一串字符串里有几个字符
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()                                        //用指针依次打印数组中的元素
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

//int main()                                 //将数组依次初始化为1
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
//	if (c == 0xb6000000)//本来就是整型，所以不用整型提升，因此可以打印
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a 截断
//	char b = 127;
//	//00000000000000000000000001111111 整型提升
//	//01111111 - b
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
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
//int main()                                                 //联合体的概念
//{
//	int a = 10;
//	//使用struct stu这个类型创建一个学生对象S1,并初始化
//	struct stu S1 = { "张三",20,"2019010305" };
//	struct stu* ps = &S1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//结构体指针->成员名
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//
//	/*printf("%s\n", S1.name);
//	printf("%d\n", S1.age);
//	printf("%s\n", S1.id);*/
//	//结构体变量.成员名
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


//int main()                                           //不使用临时变量交换两个数
//{
//	int a = 3;
//	int b = 5;
//	printf("之前:a=%d b=%d\n", a, b);
//	a = a ^ b;//a和b异或生成一个"加密值"赋给a，当b与此时的a异或则会把原来a的值给b，当a与此时的a异或则会把原来b的值给a,从而实现交换
//	b = a ^ b;
//	a = a ^ b;
//	printf("之后:a=%d b=%d\n", a, b);
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

//int main()//数组名是什么？
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//例外1：sizeof(数组名)-数组名表示整个数组,sizeof(数组名)计算的是整个数组的大小，单位是字节
//	printf("%p\n", &arr);				  //例外2：&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//	printf("%p\n", &arr+1);				  //因此&数组名+1，相对应相加一整个数组的地址大小长度，而别的是相加4个字节
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%d\n", *arr);
//	return 0;
//	//数组名是数组首元素的地址（有两个例外）
//}

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

//int main()
//{
//	int arr[3][4] = { {1,2,3,},{4,5} };//二维数组
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
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//一维数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);//%p是打印地址
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[]数组访问操作符、下标引用操作符
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

//int frog(int n)                                   //青蛙跳台阶问题
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


//void hanoi(int num, char sou, char tar, char aux)           //汉诺塔问题
//{
//	//统计移动次数
//	static int i = 1;//如果圆盘数量仅有 1 个，则直接从起始柱移动到目标柱
//	if (num == 1) 
//	{
//		printf("第%d次:从 %c 移动至 %c\n", i, sou, tar);
//		i++;
//	}
//	else 
//	{
//		hanoi(num - 1, sou, aux, tar);//递归调用 hanoi() 函数，将 num-1 个圆盘从起始柱移动到辅助柱上
//		//将起始柱上剩余的最后一个大圆盘移动到目标柱上
//		printf("第%d次:从 %c 移动至 %c\n", i, sou, tar);
//		i++;
//		hanoi(num - 1, aux, tar, sou);//递归调用 hanoi() 函数，将辅助柱上的 num-1 圆盘移动到目标柱上
//	}
//}
//
//int main()
//{
//	hanoi(3, 'A', 'B', 'C');//以移动 3 个圆盘为例，起始柱、目标柱、辅助柱分别用 A、B、C 表示
//	return 0;
//}

//int count = 0;
//int Na(int n)//递归
//{
//	//if (n == 3)//测试第三个斐波那契数列数在计算中被重复计算了几次
//	//{
//	//	count++;
//	//}
//	if (n <= 2)
//		return 1;
//	else
//		return Na(n - 1) + Na(n - 2);
//}
// 
//int Na(int n)//循环
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
//int main()                                 //描述第N个斐波那契数列数
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	ret = Na(n);
//	printf("%d\n", ret);
//	/*printf("count=%d\n", count);*/
//	return 0;
//}

////int Fac1(int n)阶乘循环
////{
////	int i = 0;
////	int ret = 1;
////	for(i=1;i<=n;i++)
////	{
////		ret *= i;
////	}
////	return ret;
////}
//int Fac2(int n)//阶乘递归
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
//int my_strlen(char* str)                         //计算字符长度递归
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
//	int len = my_strlen(arr);//如果直接将arr传过去，传的不是整个数组，而是传的首元素地址
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
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int ret=binary_search(arr, k,sz);//有序数组二分查找自定义函数 如果直接将arr传过去，传的是首元素地址，本质是指针
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
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
//	printf("请输入年份：\n");
//	int n;
//	scanf("%d", &n);
//	is_leap_year(n);
//	if (is_leap_year(n) == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}

//void is_prime(int* x)//函数判断是否为素数
//{
//	int z = 0;
//	for (z = 2; z<=sqrt(*x); z++)
//	{
//		if (*x % z == 0)
//			break;
//	}
//	if (z > sqrt(*x))
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//}
//int main()
//{
//	printf("请输入数字：\n");
//	int i;
//	scanf("%d", &i);
//	is_prime(&i);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	//int left = 0;//左下标
	//int right = sz - 1;//右下标
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
	//		printf("找到了，下标是: %d\n", mid);
	//		break;
	//	}
//	}
	/*if (left > right)
	{
		printf("找不到\n");
	}*/
	//	return 0;
	//}

	//int main()
	//{
	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int k = 7;//写一个代码，在arr数组(有序的)中找到7
	//	int i = 0;
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	for (i = 0; i < sz; i++)
	//	{
	//		if (k == arr[i])
	//		{
	//			printf("找到了，下标是: %d\n", i);
	//			break;
	//		}
	//	}
	//	if (i == sz)
	//		printf("找不到\n");
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
	//		int j = 0;//采用试除法
	//		for (j = 2; j < sqrt(i); j++)//sqrt是数学库函数，意思是开平方
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

	////void Swap1(int x,int y)注释  当实参传给形参的时候，形参其实是实参的临时拷贝，因此此时对形参的修改是不会改变实参的
	////{
	////	int tmp = 0;
	////	tmp = x;
	////	x = y;
	////	y = tmp;
	////}
	//void Swap2(int* pa, int* pb)//形参 形参传值 而当前是把实参的地址传过去，因此是可以改变值的
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
	//	/*Swap1(a, b);注释*/
	//	Swap2(&a, &b);//实参 实参传址、实参必须得有确切的值   值：常数、变量、表达式、有值函数
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
	//	int a = 10;//4个字节
	//	int* p = &a;//取地址
	//	printf("%p\n", &a);
	//	printf("%p\n", p);
	//	//*p;*-解引用操作符/间接访问操作符（*p=20，意思就是通过p找到a的地址，把a改成20，所以说是地址不变，替换了变量）
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
	//	printf("您的电脑将在5分钟后关机，请输入：我是猪，否则将会关机！\n请输入：");
	//	scanf_s("%s", input);
	//	if (0==strcmp(input, "我是猪"))
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
	//	int guess = 0;//接收猜的数字
	//	int count = 0;
	//	//time_t time(time_t *timer)
	//	//time
	//	
	//	ret = rand()%100+1;//生成随机数,然后“模”100后再加一(意义是使生成的随机数在1-100之间)
	//	while (1)
	//	{
	//		printf("请猜数字:\n");
	//		scanf("%d", &guess);
	//		if (guess > ret)
	//		{
	//			printf("猜大了\n");
	//			count++;
	//		}
	//		else if(guess<ret)
	//		{
	//			printf("猜小了\n");
	//			count++;
	//		}
	//		else
	//		{
	//			printf("猜对了，答案是 %d\n",ret);
	//			printf("您一共猜了%d次\n",count);
	//			break;
	//		}
	//	}
	//}
	//int main()
	//{
	//	int input = 0;
	//	srand((unsigned int)time(NULL));//里面设置时间戳，用时间戳来设置随机数的生成起始点   NULL-空指针
	//	do
	//	{
	//		menu();
	//		printf("请选择：\n");
	//		scanf("%d", &input);
	//		switch (input)
	//		{
	//		case 1:
	//				game();//猜数字游戏
	//				break;
	//		case 0:
	//				printf("退出游戏\n");
	//				break;
	//		default:
	//			printf("选择错误\n");
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
	//            printf("%d*%d=%-2d  ", i, j, i * j);//%2d是打印这个内容时打印两位(宽度)，不够两位用空格补齐；%-2d是在此基础上左对齐
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
	//	printf("最大值是：%d\n", max);
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
	//	printf("出现过%d 次数字9\n", count);
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

	//int main()//三个数大小排序
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
	//		printf("请输入密码\n");
	//		scanf("%s", password);
	//		if (strcmp(password,"123456")==0)//"=="不能用来比较两个字符串是否相等,应该使用一个库函数-strcmp
	//		{
	//			printf("登陆成功\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("密码错误\n");
	//		}
	//	}
	//	if (i == 3)
	//		printf("密码错误三次，请退出程序\n");
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
	//		Sleep(1000);//休息一秒
	//		system("cls");//system-执行系统命令的一个函数 cls-清空屏幕
	//		left++;
	//		right--;
	//	}
	//	printf("%s\n", arr2);
	//	return 0;
	//}



	//int main()//计算1！+2！+.....+10！
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

	//int main()//计算1！+2！+.....+10！
	//{
	//	int i = 0;
	//	int n = 0;
	//	int sum = 0;
	//	for (n = 1; n <= 10; n++)
	//	{
	//		int k = 1;//重新将k定义为“1”从而进行下一次运算
	//		for (i = 1; i <= n; i++)
	//		{
	//			k = k * i;
	//		}
	//		sum = sum + k;
	//	}
	//	printf("sum=%d\n", sum);
	//	return 0;
	//}

	//int main()//计算N的阶乘
	//{
	//	int i = 0;
	//	int k = 1;
	//	int n = 0;
	//	printf("请输入数字：\n");
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
	//	printf("请输入密码:>");
	//	scanf("%s", password);//读取密码并放在'password'数组里
	//	/*缓冲区还剩一个'\n'
	//	读取一下'\n'*/
	//	while ((ch = getchar()) != '\n')
	//	{
	//		;
	//	}
	//	printf("请确认(Y/N):>");
	//	ret = getchar();
	//	if (ret == 'Y')
	//	{
	//		printf("确认成功\n");
	//	}
	//	else
	//	{
	//		printf("放弃确认\n");
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	int ch = 0;
	//	while ((ch = getchar()) != EOF)//EOF=end of file 文件结束标志
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
	//		{//switch允许嵌套使用
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
	//		printf("工作日\n");
	//		break;
	//	case 6:
	//	case 7:
	//		printf("休息日\n");
	//		break;
	//	default://针对非法情况使用
	//		printf("你是有什么大病，哪有这玩意？\n");
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
	//	printf("请输入数字:\n");
	//	int i;
	//	scanf("%d", &i);
	//	if(i%2==1)
	//		printf("该数字是奇数\n");
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
	//	printf("请输入年龄\n");
	//	int age;
	//	scanf("%d", &age);
	//	if (age < 18) 
	//	{
	//		printf("未成年\n");
	//		printf("不能谈恋爱\n");
	//	}
	//	else
	//	{
	//		if (age >= 18 && age < 28)
	//			printf("青年\n");
	//		else if (age >= 28 && age < 50)
	//			printf("中年\n");
	//		else if (age >= 50 && age < 90)
	//			printf("老年\n");
	//		else
	//			printf("老不死\n");
	//	}
	//	return 0;
	//}

	//struct Book
	//	{
	//		char name[20];//C语言程序设计
	//		short price;//55
	//	};
	//	int main() {
	//		struct Book b1=
	//		{
	//			"C语言程序设计",55//利用结构体类型-创建一个该类型的结构体变量
	//		};
	//		struct  Book* pb = &b1;
	//	printf("书名:%s\n", b1.name);
	//	printf("价格:%d\n", b1.price);
	//	strcpy(b1.name, "c++");//意思就是把"c++"拷贝到b1的"name"里去。strcpy-string copy:字符串拷贝-库函数（需要string.h头文件）
	//	b1.price = 15;
	//	printf("修改后的书名为:%s\n", b1.name);
	//	printf("修改后的价格:%d\n", b1.price);
	// 
	//	return 0;
	//}

	//struct Book
	//{
	//	char name[20];//C语言程序设计
	//	short price;//55
	//};
	//int main() {
	//	struct Book b1=
	//	{
	//		"C语言程序设计",55//利用结构体类型-创建一个该类型的结构体变量
	//	};
	//	struct  Book* pb = &b1;
	//	printf("书名:%s\n", pb->name);
	//	printf("价格:%d\n", pb->price);//->这个符号意思是从pb这个里面取出b1里的某个变量
	//	//"."操作符的意思就是:结构体变量.成员
	//	//"->"的意思就是:结构体指针->成员
	// 
	//	/*printf("书名:%s\n", b1.name);
	//	printf("价格:%d\n", b1.price);
	//	b1.price = 15;
	//	printf("修改后的价格:%d\n", b1.price);*/
	// 
	//	return 0;
	//}



	//#define MAX(X,Y)(X>Y?X:Y)
	//int main() {
	//	int a = 20;
	//	int b = 15;
	//	int max = MAX(a, b);
	//	printf("最大值=%d\n", max);
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
	//	//arr[4];//[]-下标引用操作符
	//	int a = 10;
	//	int b = 20;
	//	int sum = ADD(a, b);//()-函数调用操作符
	//	printf("%d\n", sum);
	//	return 0;
	//}
	//int main() {
	//	int a = 20;
	//	int b = 15;
	//	int max = 0;
	//	max = (a > b ? a : b);//条件操作符或者三目操作符
	//	printf("%d\n", max);
	//
	//	return 0;
	//}
	//int main() {
	//	int a = 0;
	//	int b = ~a;//按位取反
	//	printf("%d\n", b);
	//
	//	return 0;
	//}
	//int MAX(int x, int y)//定义函数
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
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组
	//	int i = 0;
	//	while (i < 10)//循环
	//	{
	//		printf("%d ", arr[i]);
	//		i++;
	//	}
	//	
	//	return 0;
	//}
	//int main() {
	//	int line = 0;
	//	printf("加入比特\n");
	//
	//	while (line<5000)
	//	{
	//		printf("敲一行代码%d\n",line);
	//		line++;
	//	}
	//	if(line>=5000)
	//		printf("好offer\n");
	//	return 0;
	//}

	//int main() {
	//	int input = 0;
	//	printf("加入比特\n");
	//	printf("你会好好学习吗?(1/0)>:");
	//	scanf("%d", &input);
	//	if (input == 1)//if语句
	//		printf("好offer\n");
	//	else
	//		printf("回家种红薯\n");
	//
	//	return 0;
	//}


	//int main() {
	//	printf("请输入您的身高的英尺和英寸，""如\"5 7\"表示5英尺7英寸：");
	//	int price;
	//	int amount;
	//	scanf("%d %d", &price, &amount);
	//	printf("身高是%f米。\n", ((price + amount / 12.0) * 0.3048));
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
	//	printf("时间差是%d时%d分。", t / 60, t % 60);
	//	return 0;
	//}

	//int main() {
	//	int price = 0;
	//	const int amount = 100;
	//	printf("请输入金额（元）：");
	//	scanf("%d", &price);
	//	printf("请输入票面");
	//	scanf("%d", &amount);
	//	int chang = amount - price;
	//	printf("找您%d元。\n", chang);
	//	return 0;
	//}