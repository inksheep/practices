#define _CRT_SECURE_NO_WARNINGS 1


//刷题练习
//1.1--100以内所有素数存放在数组s中
//要求:判断素数在函数中完成
#include <stdio.h>
#include <math.h>
//判断是否是素数
//int IsPrime(int i)
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j++)//sqrt() --- 开平方函数
//	{
//		if (i % j == 0)
//		{
//			return 0;//除得尽 不是素数
//		}
//	}
//	return 1;//是素数
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	int s[100] = { 0 };
//	for (i = 1; i <= 100; i++)
//	{
//		ret = IsPrime(i);
//		if (ret == 1)//是素数 放数组中
//		{
//			s[j] = i;
//			j++;
//		}
//	}
//	//素数打印出来看一眼
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		printf("%d ", s[i]);
//	}
//	return 0;
//}

//2.已定义一个数组int a[10] = {1,2,3,4,5,6,7,8,9,10} 输入一个下标k，
//从数组中删除与该下标对应的元素，要求删除操作在函数中完成
//
//删除下标对应元素 n --- 元素个数
//int MyDel(int* p, int n, int k)
//{
//	int i = 0;
//	for (i = k; i < n - 1; i++)
//	{
//		*(p + i) = *(p + i + 1);
//	}
//	n--;
//	return n;
//}
// 
//打印数组元素
//void MyOut(int* a, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int n = 10;
//	printf("Before:");
//	MyOut(a, n);
//	printf("请输入要删除元素的下标:>");
//	scanf("%d", &k);
//	n = MyDel(a,n,k);
//	printf("After:");
//	MyOut(a, n);
//	return 0;
//}

//3.求一个整数存储在内存中的二进制中1的个数
//用特殊方法n&(n-1) -- 每&一次 少一个1 直到为0
//（此方法最好）
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//用>>右移然后&1的方法
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	count = count_bit_one(n);
//	printf("%d二进制中1的个数为:%d", n, count);
//	return 0;
//}
