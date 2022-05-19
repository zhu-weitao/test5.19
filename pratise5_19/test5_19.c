#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "hhh";
//	char arr2[] = { 'h','h','h' };
//	char  arr3[] = { 'h','h','h','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//
////}
//#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//	//问题1：在屏幕上打印一个单引号'，怎么做？
//	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcd\0ef"));
//	printf("%d", sizeof("abcd\0ef"));
//	return 0;
//}
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = add(a, b);
//	int sum2 = sub(a, b);
//	printf("sum =%d\n", sum);
//	printf("dut = %d\n", sum2);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("你会每天都敲代码吗，请选择（0 or 1)\n");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("好好努力，会有工作的\n");
//	}
//	else
//		printf("回家卖红薯去吧\n");
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	printf("转行程序员\n");
//	int line = 0;
//	while (line < 2000)
//	{
//		printf("努力学习鸭！\n");
//	}
//	if (line > 2000)
//	{
//		printf("小伙子很不戳");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
//#include <stdio.h>
//void test()
//{
//	/*static int i = 0;*//*1 2 3 4 5 6 7 8 9 10*/
//	int i = 0;//1 1 1 1 1 1 1 1 1 1
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//
////}
//#include <stdio.h>
//
//int main()
//{
//	printf("%d ", add(2, 3));
//	return 0;
//}
//#include <stdio.h>
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	int sum = 0;
//	sum = ADD(2, 4);
//	printf("%d ", sum);
//	sum = 10 * ADD(2, 5);
//	printf("%d ", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	p = &num;
//	*p = 20;
//	printf("%d ", num);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	char ch = 'z';
//	char* pc = &ch;
//	*pc = 'x';
//	printf("%c ", ch);
//	return 0;
//}
//#include <stdio.h>
// 
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(short*));
//	return 0;
//}
//#include <stdio.h>
//struct Su
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[10];
//};
//int main()
//{
//	struct Su s = { "张三",20,"男","22334" };
//	printf("%s %d %s %s", s.name, s.age, s.sex, s.id);
//	struct Su* ps = &s;
//	printf(" % s % d % s % s", ps->name, ps->age, ps->sex, ps->id);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age > 18 && age < 30)
//		printf("成年\n");
//	else  if (age > 30 && age < 50)
//		printf("中年");
//	else
//		printf("老年");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("是奇数\n");
//	}
//	else
//	{
//		printf("是偶数\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//#include <stdio.h>
//int main()
//{
//	char ch = '/0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int num = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for(j=1;j<=n;j++)
//	{
//		  num = 1;
//		for (i = 1; i <= j; i++)
//		{
//			num = num * i;
//		}
//		sum = sum + num;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "welcome to world";
//	char arr2[] = "################";
//	printf("%s\n", arr2);
//	int left = 0;
//	int right = 0;
//	//while
//	//right = strlen(arr1) - 1;
//	//printf("%s\n", arr2);
//	//while (left <= right)
//	//{
//	//	Sleep(1000);
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
////for
//		for (left = 0, right = strlen(arr2)-1;left<=right; left++, right--)
//		{
//			Sleep(1000);
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//		    printf("%s\n", arr2);
//	   }
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "welcome to world";
//	char arr2[] = "################";
//	int left = 0;
//	int right = 0;
//	right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left<=right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//	    right--;
//		printf("%s\n", arr2);
//	}
//
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	char psw[10] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", psw);
//		if (strcmp(psw, "abcdef") == 0)
//			break;
//	}
//	if (i == 3)
//	{
//		printf("exit\n");
//	}
//	else
//		printf("log in");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int key = 7;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	 }
//	if (left <= right)
//		printf("找到了，下标是 %d ",mid );
//	else
//		printf("没找到\n");
//	return 0;
//}
//#include <stdio.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//	    int mid = 0;
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//			if (arr[mid] > key)
//			{
//				right = mid - 1;
//			}
//			else if (arr[mid] < key)
//			{
//				left = mid + 1;
//			}
//			else
//				return mid;
//		}
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 22;
//	int ret = 0;
//	ret = bin_search(arr, left, right, key);
//	if (ret != -1)
//	{
//		printf("找到了，下标是 %d", ret);
//	}
//	else
//		printf("没找到");
//	return 0;
//}
//猜数字游戏
//#include <stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("##############################\n");
//	printf("#####1.play    0.exit#########\n");
//	printf("##############################\n");
//}
//void game()
//{
//	int input = 0;
//	int randoum_num = 0;
//	randoum_num = rand() % 100 + 1;
//		while (1)
//		{
//			printf("请输入猜的数字");
//				scanf("%d", &input);
//			if (input >randoum_num)
//			{
//				printf("猜大了\n");
//			}
//			else if(input<randoum_num)
//			{
//				printf("猜小了\n");
//			 }
//			else
//			{
//				printf("恭喜你才对了\n");
//				break;
//			}
//	    }
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//		}
//	} 
//	while (input);
//	return;
//
//}
//#include <stdio.h>
//int global = 2019;//全局变量
//typedef unsigned int   unint;
//int main()
//{
//	
//	float weight = 45.5f;
//	double hight = 20.0;
//	int global = 2020;//局部变量
//	printf("%f", hight);/*当局部变量和全局变量同名时，局部变量优先使用*/
//	return 0;
//}
//#include <stdio.h>
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("%d", max);
//	return 0;
//}
//
//#include <stdio.h>
// void swap1(int* ps1, int* ps2)
//{
//	int tmp = 0;
//	tmp = *ps1;
//	*ps1 = *ps2;
//	*ps2 = tmp;
//}
//int main()
//{
//	int num1 = 3;
//	int num2 = 4;
//	swap1(&num1, &num2);
//	printf("%d %d", num1, num2);
//	return 0;
//}
//#include <stdio.h>
//void one_line()
//{
//	printf("haha\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		one_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//#include <stdio.h>
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//}
//#include <stdio.h>
//int strlen(char* str)
//{
//	if (*str == 0)
//	{
//		return 0;
//	}
//	else return 1 + strlen(str + 1);
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = strlen(p);
//	printf("%d", len);
//	return 0;
//}
//#include <stdio.h>
//int is_pre(int n)
//{
//	int j = 0;
//	for (j = 2; j <sqrt (n); j++)
//	{
//		if (n%j==0)
//		{
//			return 0;
//		}
//	}
//	  return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_pre(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	
//	}
//	return 0;
//}
//#include <stdio.h>
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int search(int arr[], int key,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] >key)
//		{
//			right = mid - 1;
//		}
//		else return mid;
//	}
//		return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, key,sz);
//	if (ret != 0)
//	{
//		printf("找到了，下标是 %d", ret);
//	}
//	else
//		printf("没找到");
//	return 0;
//}
//#include <stdio.h>
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//#include <stdio.h>
//int Fac1(n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//Fac2(n)
//{
//	
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int ret = Fac1(n);
//	int ret = Fac2(n);
//	printf("%d", ret);
//	return 0;
//}
//#include <stdio.h>
//int Fib(n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d ",ret);
//	return 0;
//
//}
//#include <stdio.h>
//int fin(n)
//{
//	int result = 1;
//	while (n)
//	{
//		if (n > 1)
//			result *= n;
//		n = n - 1;
//	}
//	return result;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fin(n);
//	printf("%d", ret);
//	return 0;
//}
#include <stdio.h>
int fib(n)
{
	int z=1;
	int x = 1;
	int c = 0;
	c= x = 1;
	while(n>2)
	{
		z = x;
		x = c;
		c = z + x;
		n--;
	}
	return c;
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
}