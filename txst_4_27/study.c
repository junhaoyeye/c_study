#define _CRT_SECURE_NO_WARNINGS
// ����Դ�ļ���һ��ʹ��c������׼

#include<stdio.h>
#include<string.h>



// �ӷ�����
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
//	//const - ������
//	
//	//const int n = 10; // n�Ǳ������������ǳ����ԣ���������˵n�ǳ�����
//	//int arr[n] = { 0 };
//	//n = 20;
//	//const���εĳ�����
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	////���泣�� ֱ�ӵ�ֵ
//	///*3;
//	//100;
//	//3.14;*/
//
//
//	return 0;
//}

//#define ����ı�ʶ������
//#define MAX 10
//
//int main() {
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

// ö�ٳ���
//ö��һһ�о�
//�Ա��У� Ů �� ����
// ��ԭɫ�� �죬�ƣ���
//���ڣ�1��2��3��4��5��6��7


// ö�ٹؼ� - enme

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//	// ö�ٳ���
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
// �ַ�������
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";// ���ַ���
//	return 0;
//}

//int main()
//{
//	//�����ڼ������ϴ洢��ʱ�򣬴洢����2����
//	// #av&
//	// a -97
//	// A - 65
//	// ASCIIB����
//	char arr1[] = "abc";//����
//	// ��abc�� -- 'a', 'b', 'c', '\0' -- '\0'�ַ��������ı�־
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
//	printf("%d\n", strlen(arr1)); // strlen - string length- �����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//printf��"%d\n",
//	// \32 -- 32������8��������
//	// 32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	// 32 -- > 10���� 26 -> ��ΪASCII��ֵ�����ַ�
//	return 0;
//}

 //if��
//int main() 
//{
//	int input;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//while���
//int main()
//{
//	int line = 0;
//	printf("������Ѷ\n");
//	while (line<200)
//	{
//		printf("��һ�д���\n", line);
//		line++;
//	}
//	if(line>200)
//		printf("��offer\n");
//	return 0;
//}

// �ӷ�����
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


// ����
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
//��Ŀ������
// ˫Ŀ�����
//int main()
//{
//	// int a =10;
//	// int b = 20;
//	//a + b; // + ˫Ŀ�����
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
//	* sizeof ������Ǳ���/ ������ռ�ռ��С����λ���ֽ�
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof int);*/
//	return 0;
//}

//�Ƚ�
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", num2);
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

////��unsigned int ������Ϊuint_32, ����uint_32Ҳ��һ��������
//typedef unsigned int uint_32;
//int main()
//{
//    //�۲�num1��num2,������������������һ����
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
//	//extern �����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

// �����ⲿ����
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

//#define �����ʶ����
//#define MAX 100
//#define ���Զ���������

// ������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//// ��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// ����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	// ��ķ�ʽ
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4���ֽ�
//	int*p = &a;// ȡ��ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;// * - �����ò�����
// 
// 
//	printf("a = %d\n", a);
//  // ��һ�ֱ�����������ŵ�ַ��-ָ�����
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