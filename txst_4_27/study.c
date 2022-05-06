#define _CRT_SECURE_NO_WARNINGS
// 加载源文件第一行使用c语音标准

#include<stdio.h>
#include<string.h>



// 加法运算
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0; 
//}


//int main()
//{
//	//const - 常属性
//	
//	//const int n = 10; // n是变量，但是又是常属性，所以我们说n是常变量
//	//int arr[n] = { 0 };
//	//n = 20;
//	//const修饰的常变量
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	////字面常量 直接的值
//	///*3;
//	//100;
//	//3.14;*/
//
//
//	return 0;
//}

//#define 定义的标识符常量
//#define MAX 10
//
//int main() {
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

// 枚举常量
//枚举一一列举
//性别：男， 女 ， 保密
// 三原色： 红，黄，蓝
//星期：1，2，3，4，5，6，7


// 枚举关键 - enme

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//	// 枚举常量
//};
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	return 0;
//}

//int float
//char
// 字符串类型
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";// 空字符串
//	return 0;
//}

//int main()
//{
//	//数据在计算器上存储的时候，存储的是2进制
//	// #av&
//	// a -97
//	// A - 65
//	// ASCIIB编码
//	char arr1[] = "abc";//数组
//	// “abc” -- 'a', 'b', 'c', '\0' -- '\0'字符串结束的标志
//	char arr2[] = { 'a', 'b', 'c', 0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0'};
//	printf("%d\n", strlen(arr1)); // strlen - string length- 计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//printf（"%d\n",
//	// \32 -- 32是两个8进制数字
//	// 32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	// 32 -- > 10进制 26 -> 作为ASCII码值代表字符
//	return 0;
//}

 //if语
//int main() 
//{
//	int input;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//while语句
//int main()
//{
//	int line = 0;
//	printf("加入腾讯\n");
//	while (line<200)
//	{
//		printf("敲一行代码\n", line);
//		line++;
//	}
//	if(line>200)
//		printf("好offer\n");
//	return 0;
//}

// 加法运算
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;	
//	sum = Add(num1, num2);\
//		printf("sum = %d\n", sum);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0; 
//}


// 数组
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	/*printf("%d\n", arr[4]);*/
//	/*char ch[20];
//	float arr2[5];*/
//	return 0;
//}
//单目操作符
// 双目运算符
//int main()
//{
//	// int a =10;
//	// int b = 20;
//	//a + b; // + 双目运算符
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	/*int a = 10;
//	* sizeof 计算的是变量/ 类型所占空间大小，单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof int);*/
//	return 0;
//}

//比较
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
//	return 0;
//}

//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	max =  Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//int min()
//{
//	int a = 10;
//	int b = a--;
//	printf("a = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}
//int main()
//{
//	int a = 100;
//	int b = 10;
//	int max = 0;
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}

//int main()
//{
//	/*int arr[10] = { 0 };
//	arr[4];*/
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = -2;
//	unsigned int num = 1;
//	return 0;
//}

////将unsigned int 重命名为uint_32, 所以uint_32也是一个类型名
//typedef unsigned int uint_32;
//int main()
//{
//    //观察num1和num2,这两个变量的类型是一样的
//    unsigned int num1 = 0;
//    uint_32 num2 = 0;
//    return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//extern 声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

// 声明外部函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#define 定义标识常量
//#define MAX 100
//#define 可以定义宏带参数

// 函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//// 宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// 函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	// 宏的方式
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4个字节
//	int*p = &a;// 取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;// * - 解引用操作符
// 
// 
//	printf("a = %d\n", a);
//  // 有一种变量是用来存放地址的-指针变量
// printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%zd\n", sizeof(pc));
//	return 0;
//}