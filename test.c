#define _CRT_SECURE_NO_WARNINGS 1

//刷题
#include <stdio.h>
//1.
//int d = 1;
//int fun(int p)
//{
//    static int d = 3;
//    d += p;
//    printf("%3d", d);// 4 10
//    return(d);
//}
//void main()
//{
//    printf("%3d\n", fun(2 + fun(d))); // 10
//}
//得 4 10 10 

//2.
//void main()
//{
//    char x[] = "123456789", * p = x;
//    int i = 0;
//    while (*p)
//    {
//        if (i % 2 == 0) *p = '*'; //*2*4*6*8*
//            p++; i++;
//    }
//    puts(x);
//}

//编程题
//3.编程输入实数x，计算下面函数的值，并输出y值。
//          - x²           x < 1
//    y = -|  3x - 1       1<= x<= 10
//          - x/5          x > 10

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x < 1)
//	{
//		printf("y = %d\n", x * x);
//	}
//	else if (x > 10)
//	{
//		printf("y = %lf\n", x / 5.0);
//	}
//	else
//	{
//		printf("y = %d\n", 3*x - 1);
//	}
//	return 0;
//}

//4.编写一个函数，由实参传来一个字符串，
//统计此字符串中字母、数字、空格和其他字符的个数，并输出统计结果
#include <string.h>

//void fun(char* pc)
//{
//	int len = strlen(pc);
//	int i = 0;
//	int letter = 0;//字母
//	int num = 0;//数字
//	int space = 0;//空格
//	int other = 0;//其他字符
//	for (i = 0; i < len; i++)
//	{
//		if (((pc[i] >= 'A') && (pc[i] <= 'Z')) || ((pc[i] >= 'a') && (pc[i] <= 'z')))
//			letter++;
//		else if (pc[i] >= '0' && pc[i] <= '9')
//			num++;
//		else if (pc[i] == ' ')
//			space++;
//		else
//			other++;
//	}
//	printf("字符串中字母数为:%d\n", letter);
//	printf("字符串中数字数为:%d\n", num);
//	printf("字符串中空格数为:%d\n", space);
//	printf("字符串中其他字符数为:%d\n", other);
//}
//
//
//int main()
//{
//	char ch[30] = { 0 };
//	printf("请输入字符串:>");
//	gets(ch); // 不用scanf 因为scanf遇到空格就停了 --> scanf遇到 回车(enter)，空格，TAB 就会结束一次输入，空格不会接收
//    //并且， scanf在一次输入结束后，不会舍弃最后的回车符（即回车符会残留在数据缓冲区中） 消除可用 gerchar()
//	//scanf ：当遇到回车，空格和tab键会自动在字符串后面添加'\0'，但是回车，空格和tab键仍会留在输入的缓冲区中
//	//而，gets() -- gets能够接受空格、制表符Tab和回车等；对末尾回车符的处理：接收回车，但把回车替换为\0
//	//gets：可接受回车键之前输入的所有字符，并用'\n'替代 '\0'.回车键不会留在输入缓冲区中
//	//gets从标准输入设备读字符串函数，其可以无限读取，不会判断上限，以回车结束读取
//	fun(ch);
//	return 0;
//}

//5.编写打印如下图形的程序 (必须用循环语句实现) 
//    *
//   **
//  ***
// ****
//*****

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入要打印的行数:>");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//6.编写程序，从键盘上任意输入20个整数，存入一个数组中，然后输出这些数中最大数及其下标以及最小数及其下标

//int main()
//{
//	int arr[30] = { 0 };
//	int i = 0;
//	int max = 0;
//	int min = 0;
//	int pos1 = 0;
//	int pos2 = 0;
//	printf("请输入20个整数:>");
//	for (i = 0; i < 20; i++)
//	{
//		scanf(" %d", &arr[i]);
//	}
//	max = arr[0];
//	min = arr[0];
//	for (i = 0; i < 20; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			pos1 = i;
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			pos2 = i;
//		}
//	}
//	printf("max = %d , pos = %d\n", max, pos1);
//	printf("min = %d , pos = %d\n", min, pos2);
//	return 0;
//}

//7.编程打印下列的杨辉三角形。（设8行）
//1
//1  1
//1  2  1
//1  3  3   1
//1  4  6   4   1
//1  5  10  10  5  1

//二维数组方法
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int arr[30][30] = { 0 };
//	printf("请输入要打印的行数:>");
//	while (n < 1 || n > 30)//初始化输入不正确时 重新输入
//	{
//		scanf("%d", &n);
//	}
//	for (i = 0; i < n; i++)
//	{
//			arr[i][i] = 1;
//			arr[i][0] = 1;
//	}
//	for (i = 2; i < n; i++)
//	{
//		for (j = 1; j < i ; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		/*for (j = 0; j < n-i-1; j++)
//		{
//			printf(" ");
//		}*/
//		for (j = 0; j < i+1; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//递归的方法
//int Tri(int i, int j)
//{
//	return (j == 0) || (j == i) ? 1 : Tri(i - 1, j) + Tri(i - 1, j - 1);
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	printf("请输入行数(1~20):>");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		/*for (j = 0; j < n - i - 1; j++)
//		{
//			printf(" ");
//		}*/
//		for (j = 0; j < i+1; j++)
//		{
//			printf("%d ", Tri(i, j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//8.求分段函数的值
//          - 1 + e^x      x > 0
//    y = -|  1            x = 0
//          - ln(x^2)      x < 0
#include <math.h>
//
//int main()
//{
//	double x = 0;
//	double y = 0;
//	scanf("%lf", &x);
//	if (x == 0)
//	{
//		y = 1;
//	}
//	else if (x < 0)
//	{
//		y = log(x * x);// log (x) 表示是以e为底的自然对数，即 ln (x)  ---- <math.h>
//	}                  // 函数 log10 (x) 以10为底的对数  以其它数为底的对数用换底公式来表示 log（a) / log(b)
//	else
//	{
//		y = 1 + exp(x);//exp(x) --- e的x次方 --- <math.h>
//	}
//	printf(" y = %lf", y);
//	return 0;
//}


//题目 输出什么
void main()
{
	char ch;
	scanf("%3c", &ch);//abc
	printf("%c", ch);//a
}