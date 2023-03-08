#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//一、关机程序
//int main()
//{
//	char ch[20] = { 0 };
//	while (1)
//	{
//		system("shutdown -s -t 60");//60s后关机
//		printf("请输入我是超人，否则电脑将会在1min中内关机\n");
//		scanf("%s", ch);
//		if (strcmp("我是超人", ch) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	//printf("%d", printf("%d", printf("%d", 43)));//打印43 返回2 打印2 返回1
//	printf("%d", printf("%d", printf("%d", 654)));//65431
//	return 0;
//}


//二、递归
//把输入的数从左到右一位一位的打出来

//void print(int n)
//{
//	if (n > 9)//二位数及以上 123  12  1
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//三、模拟实现strlen 
// 
//1.用指针-指针的方式
#include <assert.h>

//int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	char* strat = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - strat;//指针 - 指针 = 元素个数 要同一类型的指针
//}
// 
//2.用变量的
//int my_strlen(const char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}

//3.不用变量的 用递归的方法
//int my_strlen(const char* p)
//{
//	assert(p);
//	if (*p != '\0')
//	{
//		return 1 + my_strlen(p+1);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";//6
//	int len = my_strlen(arr);
//	/*char* open = arr;
//	char* end = &arr[6];
//	int len = end - open;*/
//	printf("%d\n", len);
//	return 0;
//}

//四、斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ... (后面的数 = 前面两数之和)
//求第n个斐波那契数
//1.用循环的方法
//(更好一点)
//int Find(int n)
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

//2.用递归的方法
//(用递归会重复计算很多，效率低)
//int Find(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Find(n - 1) + Find(n - 2);
//}

//int main()
//{
//	//TDD -- 测试驱动开发 ： 先写使用再实现
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Find(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//五、交换两个变量 不用临时变量
//(效率不高 可读性差 正常还是使用临时变量来交换)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//加减法
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//异或的方法
//	a = a ^ b;// a^b 相当于得到了一个密码 这个密码和b异或 得 a 反之即得b
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//六、求一个整数存储在内存中的二进制中1的个数

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((n>>i)  & 1))
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//（最好）n & (n - 1)
//例： 1101 & 1100   得 1100
//     1100 & 1011   得 1000 一次少一个1 有几个1执行几次 最终得0
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
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
//	int a = 13;//1101  3个1
//	scanf("%d", &a);
//	printf("%d\n", count_bit_one(a));
//	return 0;
//}

//七、sizeof()的注意情况
//int main()
//{
//	int i = -1;
//	if (i > sizeof(i))//sizeof() 运算时会先把旁边的数变无符号数类型
//		printf(">");
//	else
//		printf("<");
//	return 0;
//}

//八、求二进制中，两个数 不同二进制位的个数
//思路：异或 相同为0 不同为1 然后再求1的个数
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	int i = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	/*for (i = 0; i < 32; i++)
//	{
//		if (1 == ((tmp >> i) & 1))
//		{
//			count++;
//		}
//	}*/
//	return count;
//}
//
//int main()
//{
//	int m = 0;//1100 12
//	int n = 0;//0011 3
//	scanf("%d %d", &m, &n);
//	int ret = get_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}

//九、计算一个数的每位之和
//输入一个数 调用DigitSum(1729) 返回1+7+2+9 和为19
//1729 9+DS(172)
//172 9+2+DS(17)
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n % 10;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//十、计算n的k次方
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else //k < 0 时
//		return (1.0 / Pow(n,-k));
//}
//
////double Pow(int n, int k)
////{
////	if (k < 0)
////		return (1.0 / Pow(n, -k));
////	else if (k == 0)
////		return 1;
////	else
////		return n * Pow(n, k - 1);
////}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);//因为有负数次方 会有分数 所以用double
//	printf("%lf\n", ret);
//	return 0;
//}

//十一、判断当前机器的字节序是什么
//大端：低位放到高地址处，高位放到低地址处
//小端：低位放到低地址处，高位放到高地址处
//int check_sys()
//{
//	int n = 1;//00 00 00 01 大端：00 00 00 01 小端：01 00 00 00 
//	char* tmp = (char*)&n;
//	//返回1 为小端
//	//返回0 为大端
//	return *tmp; // 简洁为： return *((char*)&n);
//	/*if (tmp == 1)
//		return 1;
//	else
//		return 0;*/
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("是小端存储");
//	else
//		printf("是大端存储");
//	return 0;
//}

