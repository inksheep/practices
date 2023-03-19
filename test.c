#define _CRT_SECURE_NO_WARNINGS 1

//程序设计题
//1.将字符串中所有的大写字母转换为小写，其它字符不变（不使用转换函数）。
//例如，当字符串为"This Is a c Program"
//输出："this is a c program"
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[30] = { 0 };
//	printf("请输入字符串:>");
//	gets(arr);
//	int i = 0;
//	//用for循环
//	/*for (i = 0; i < (int)strlen(arr); i++)
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//			arr[i] += 32;
//	}*/
//	//用while循环
//	while (arr[i] != '\0')
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//			arr[i] += 32;
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//2.求[1，1000]之间既不能被7整除也不能被5整除的整数之和，将结果存入变量s中
// 
//int main()
//{
//	int i = 0;
//	int s = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		if ((i % 7 != 0) && (i % 5 != 0))
//			s += i;
//	}
//	printf("s = %d\n", s);
//	return 0;
//}

//3.统计字符串中元音字母’a’、’e’、’i’、’o’、’u’的个数并输出。
//例如，当字符串为"This Is a c Program"
//输出：Result is : 4
//int fun(char* arr)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		if ((arr[i] == 'a') || (arr[i] == 'e') || (arr[i] == 'i') || (arr[i] == 'o') || (arr[i] == 'u'))
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[50] = { 0 };
//	int n = 0;
//	printf("请输入字符串:>");
//	gets(arr);
//	n = fun(arr);
//	printf("Result is :%d\n", n);
//	return 0;
//}

//4.统计字符串中英文字母的个数并输出。
//例如，当字符串为"This Is a c Program"
//输出：Result is : 15

//int main()
//{
//	char arr[50] = { 0 };
//	int count = 0;
//	int i = 0;
//	printf("请输入字符串:>");
//	gets(arr);
//	while (arr[i] != '\0')
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//			count++;
//		else if(arr[i] >= 'a' && arr[i] <= 'z')
//			count++;
//		i++;
//	}
//	printf("Result is : %d\n", count);
//	return 0;
//}

//5.求N*N矩阵的第2行（以下标为行数）元素的和并输出。
//例如，当矩阵为：
//1   2   3   4
//5   6   7   8
//9  10  11  12
//13  14  15  16
//则第2行元素是：9，10，11，12。第2行元素之和为：42
//#define N 4 
//
//int main()
//{
//	int arr[N][N] = { 0 };
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (j = 0; j < N; j++)
//	{
//		sum += arr[2][j];
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//6.求字符串的长度并输出。
//例如，当字符串1为"This Is a c Program"
//则应输出：Result is : 19
#include <assert.h>
//有临时变量的
//int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}

//无临时变量的 --- 递归
//int my_strlen(const char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}

//指针 - 指针 = 元素个数 (要同类型指针相减)
//int my_strlen(const char* arr)
//{
//	char* start = arr;
//	while (*arr != '\0')
//		arr++;
//	return arr - start;
//}
//
//int main()
//{
//	char arr[50] = { 0 };
//	printf("请输入字符串:>");
//	gets(arr);
//	int len = my_strlen(arr);
//	printf("Result is : %d\n", len);
//	return 0;
//}

//7.求[m，n]之间所有不能被3整除的整数之和，m，n的值由键盘输入。
//例如，如果输入3和12，则输出结果为：45

//int main()
//{
//	int m, n;
//	int tmp = 0;
//	int sum = 0;
//	scanf("%d%d", &m, &n);
//	if (m > n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	while (m <= n)
//	{
//		if (m % 3 != 0)
//		{
//			sum += m;
//		}
//		m++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//8.按下面的公式求sum的值。
//sum = m + (m + 1) + (m + 2) + (m + 3) + …… + (n - 1) + n
//例如，如果m和n的值分别为1和100，则计算结果为5050。

//int main()
//{
//	int m, n,tmp;
//	int sum = 0;
//	int i = 0;
//	scanf("%d%d", &m, &n);
//	if (m > n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	for (i = m; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//9.将字符串逆序存放并输出。
//例如，当字符串为"This Is a c Program"
//输出："margorP c a sI sihT"
#include <stdlib.h>

//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char* pa = (char*)malloc(50 * sizeof(char));
//	int len = 0;
//	//char* left, *right;
//	if (pa == NULL)
//		return 0;
//	printf("输入字符串:>");
//	gets(pa);
//	/*left = pa;
//	right = pa;
//	while (*right != '\0')
//		right++;
//	reverse(left, right-1);*/
//	len = strlen(pa);
//	reverse(pa, pa+len-1);
//	printf("%s\n", pa);
//	free(pa);
//	pa = NULL;
//	return 0;
//}

//10.按下面的公式求sum的值。
//sum = 1 - 2 + 3 - 4 + 5 - 6 + …… + 99 - 100
//
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * i;
//		flag = -flag;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
