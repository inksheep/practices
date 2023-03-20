#define _CRT_SECURE_NO_WARNINGS 1

//刷题练习

//1.求数列1-1/3+1/5-1/7+1/9......前20项之和。
//要求：保留小数点后两位有效数字

#include <stdio.h>

//int main()
//{
//	float sum = 0;
//	int i = 0;
//	int flag = 1;
//	int j = 1;
//	for (i = 0; i < 20; i++)
//	{
//		sum += flag * 1.0 / j;//也可用2i-1 除这个奇数
//		j += 2;
//		flag = -flag;
//	}
//	printf("sum = %.2f\n", sum);
//	return 0;
//}

//2.输入一个长度不超过100的字符串，采用“起泡法”将字符串中包含的各个字符按ASCII值从小到大排序。
//要求：排序在自定义函数sort中实现
#include <string.h>
//冒泡排序
//void sort(char* arr,int sz)
//{
//	int i, j;
//	int tmp;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)//最后一个元素不用再排 --- 代表趟数
//	{
//		flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)//例 十个元素比较 需要比较九对
//		{
//			//交换 用不到i
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	int sz = 0;
//	do
//	{
//		printf("输入一个长度不超过100的字符串:>");
//		scanf("%s", arr);
//		sz = strlen(arr);
//	} while (sz > 100);
//	printf("%s\n", arr);//排序前的样子
//	sort(arr,sz);
//	printf("%s\n", arr);//排序后的样子
//	return 0;
//}

//3.输入一个长度不超过100的字符串，然后输入一个字符，通过程序将字符串中该字符删除，并输出。
//要求：删除字符在自定义函数deletechar中实现

//void deletechar(char* arr, char ch)
//{
//	int i, j;
//	for (i = 0; i < arr[i]!='\0'; i++)
//	{
//		if (arr[i] == ch)
//		{
//			for (j = i; j < arr[j]!='\0'; j++)//[注意]要把'\0'也往前放
//			{
//				arr[j] = arr[j + 1];
//				
//			}
//		}
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	int sz;
//	char ch;
//	do
//	{
//		printf("请输入长度不超过100的字符串:>");
//		gets(arr);
//		sz = strlen(arr);
//	} while (sz > 100);
//	printf("请输入要删除的字符:>");
//	scanf("%c", &ch);
//	deletechar(arr, ch);
//	printf("%s\n", arr);
//	return 0;
//}


//4.从键盘输入10个整数，找出其中与这10个数的平均数最接近的数
#include <math.h>
//
//int Findclose(int* arr, double ave)
//{
//	double tmp[10] = { 0 };
//	int i = 0;
//	double min = 0;
//	int pos = 0;
//	for (i = 0; i < 10; i++)
//	{
//		tmp[i] = fabs((double)(arr[i] - ave));//fabs(double x) --- 求x的绝对值 --- <math.h>
//	}
//	min = tmp[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (tmp[i] < min)
//		{
//			min = tmp[i];
//			pos = i;
//		}
//	}
//	return pos;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	double ave = 0;
//	int pos = 0;
//	printf("请输入10个整数:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	ave = sum / 10.0;
//	pos = Findclose(arr,ave);
//	printf("与平均值%lf最接近的数是:%d", ave, arr[pos]);
//	return 0;
//}

//5.用递归的方式求斐波那契数列第n项Fn。
//要求：n由键盘输入
//递归
//int Fun(int n)
//{
//	if (n <= 2)
//		return 1;
//	else //n>2
//		return Fun(n - 1) + Fun(n - 2);
//}
////用循环的方法
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = -1;
//	int ret = 0;
//	while (n <= 0)
//	{
//		printf("请输入要得到的第n项斐波那契数:>");
//		scanf("%d", &n);
//	}
//	ret = Fun(n);
//	printf("%d\n", ret);
//	return 0;
//}

//6.求1+3+5+...+(2n-1)的值。
//要求：n通过键盘输入
//int Fun(int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 2 * n - 1; i += 2)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Fun(n);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//7.写一个函数，使给定的二维整型数组b[3][3]，然后对它进行行列转换，并输出结果。
//例：原数组： b = 1 2 7  变换为：b = 1 3 5
//                 3 4 8              2 4 6
//                 5 6 9              7 8 9
//void convert(int arr[3][3])
//{
//	int tmp = 0;
//	int i,j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i + 1; j < 3; j++)//上三角 只需要换一遍 i == j 的不用换 原地不动
//		{
//			tmp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int b[3][3] = { 0 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	convert(b);
//	printf("变换后:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//8.输入2001--2016之间的素数
//int main()
//{
//	int i, j;
//	for (i = 2001; i <= 2016; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)//sqrt() --- 开平方 --- <math.h>
//		{
//			if (i % j == 0)
//			{
//				break;//不是素数 接着循环
//			}
//		}
//		if (j > sqrt(i))//是素数
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//9.从键盘输入n,求(2*n)!
//递归的方法:
//int Fun(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * Fun(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	////循环的方法:
//	//for (i = 1; i <= 2 * n; i++)
//	//{
//	//	ret = ret * i;
//	//}
//	ret = Fun(2*n);
//	printf("(2*n)! = %d", ret);
//	return 0;
//}

//10.猴子摘桃题:
//第一天摘了桃，当天吃掉一半，再多吃一个
//第二天吃剩下的，吃一半，再多吃一个
//一直吃到第10天 发现只有1个桃子了，问第一天摘了多少桃子？
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i < 10; i++)//吃了9次
//	{
//		ret = (ret + 1) * 2;
//	}
//	printf("第一天摘了:%d\n", ret);
//	return 0;
//}

