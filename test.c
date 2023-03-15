#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//一、等级成绩与百分制成绩对换
//90及以上 --- A ； 80到90 --- B ； 70到80 --- C ；60到70 --- D ； 60以下 --- E

//int main()
//{
//	int score = 0;//分数
//	printf("请输入得分数:>");
//	scanf("%d", &score);
//	switch (score / 10)
//	{
//	case 10://得100分的情况
//	case 9:
//		printf("A");
//		break;
//	case 8:
//		printf("B");
//		break;
//	case 7:
//		printf("C");
//		break;
//	case 6:
//		printf("D");
//		break;
//	default:
//		printf("E");
//		break;
//	}
//
//	return 0;
//}

//二、大小写字母转换
//小写'a'的ASKII值比'A'大32
//int main()
//{
//	char buf[30] = { 0 };
//	scanf("%s", buf);
//	int i = 0;
//	while (buf[i] != '\0')
//	{
//		if (buf[i] >= 'a' && buf[i] <= 'z')
//			buf[i] -= 32;
//		else if (buf[i] >= 'A' && buf[i] <= 'Z')
//			buf[i] += 32;
//		i++;
//	}
//	printf("%s\n", buf);
//	return 0;
//}

//三、求第n个斐波那契数
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

//斐波那契数列求和
//int Sum(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int sum = a + b;//2 
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	while (n > 2) //从第三个开始加 这样才能有求第n个斐波那契数的循环 每求一个就加上去
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		sum += c;
//		n--;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	printf("输入要求的n个斐波那契数之和:>");
//	scanf("%d", &n);
//	int sum = Sum(n);
//	printf("%d\n", sum);
//	return 0;
//}

//四、冒泡法
//void Sort_Bubble(int arr[], int sz)
//{
//	int i, j, tmp;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)//sz - 1 因为最后一次不用移动
//	{
//		flag = 1;//标志 若一趟循环下来 一次都没有交换 则说明本来就有序 不需要再循环了
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			
//		}
//		if (flag == 1)//有序 不需要再循环 直接跳出
//			return;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Sort_Bubble(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//五、编写函数将一句话中每个单词的首字母大写，再在主函数中测试该函数。
// (提示：假设 a[0]是第一个单词的首字母，其它单词首字母的判断规则设为：
// a[i]是空格，并且 a[i + 1]是小写英文字母，则 a[i + 1]就是单词首字母。
// 例：输入 wish you a good mark in the exam.输出 Wish You A Good Mark In The Exam)。
//void checkAa(char arr[])
//{
//	if (arr[0] >= 'a' && arr[0] <= 'z')
//		arr[0] -= 32;
//	int i = 1;
//	while (arr[i] != '\0')
//	{
//		if ((arr[i - 1] == ' ') && (arr[i] >= 'a' && arr[i] <= 'z'))
//		{
//			arr[i] -= 32;
//		}
//		i++;
//	}
//}
//
//int main()
//{
//	char arr[] = "wish you a good mark in the exam";
//	checkAa(arr);//[注] 如果要输入的话 不能用scanf scanf是以空格为结束的 可以用gets()
//	printf("%s\n", arr);
//	return 0;
//}


//六、输入 a, b, c，编程判断它们能否构成一个三角形
//两边之和大于第三边 即: a+b>c && a+c>b && b+c>a
//[注] 要注意三边的边长都是大于零的
//int main()
//{
//	float a, b, c;
//	printf("请输入三边的长度:>");
//	scanf("%f %f %f", &a, &b, &c);
//	if (a > 0 && b > 0 && c > 0)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			printf("能组成三角形\n");
//		}
//		else
//			printf("不能\n");
//	}
//	return 0;
//}

//七、编程一个函数判断一个数是否是素数。再在主函数中测试这个函数
#include <math.h>

//int Check(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)//sqrt() -- 开平方数学库函数
//	{
//		if (n % i == 0)
//			return 0;//除得尽 不是素数
//	}
//	if (i > sqrt(n))
//		return 1;//是素数
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入你想判断的数:>");
//	scanf("%d", &n);
//	int ret = Check(n);
//	if (ret == 1)
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}

//八、从键盘任意输入一年份,编程输出该年份每月的天数。
//要求：数据按两行输出，每行分别显示6个月份的天数，且每行的数据之间以","隔开
//判断闰年 闰年二月29天 平年28天
//void PrintDay(int year)
//{
//	printf("一月:31 ,");
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		printf("二月:29 ,");
//	else
//		printf("二月:28 ,");
//	printf("三月:31 ,");
//	printf("四月:30 ,");
//	printf("五月:31 ,");
//	printf("六月:30\n");
//	printf("七月:31 ,");
//	printf("八月:31 ,");
//	printf("九月:30 ,");
//	printf("十月:31 ,");
//	printf("11月:30 ,");
//	printf("12月:31 ,");
//}
//
//int main()
//{
//	int year = 0;
//	printf("请输入年份:>");
//	scanf("%d", &year);
//	PrintDay(year);
//	return 0;
//}

//九、从键盘输入一个正整数n，编程计算并输出1~n之间所有素数之和。
//要求:素数的判定用自定义函数int IsPrime (int n)完成。

//int IsPrime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;//不是素数
//	}
//	if(j>sqrt(i))
//		return 1;//是素数
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个正整数:>");
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 2; i <= n; i++)//1不是素数 所以从2开始 2是素数
//	{
//		int ret = IsPrime(i);
//		if (ret == 1)//返回1 则是素数
//			sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//十、从键盘输入20位学生的信息，包含学号、姓名以及1门课的成绩，编写程序实现下功能:
//1）对20位学生的成绩按降序进行排序，并将排序后的学生信息写入到文件temp.txt文件中; （10分)
//2）按学号完成学生信息的检索，如果找到，则输出学生的相关信息，否则输出"Don't findthe corresponding message!”。(10分)

#include "student.h"

void menu()
{
	printf("####################################\n");
	printf("#####    1.add        2.sort    ####\n");
	printf("#####    3.find       4.show    ####\n");
	printf("#####    5.save       6.modify  ####\n");
	printf("#####           0.exit          ####\n");
	printf("####################################\n");
}

int main()
{
	StuTotal stu;//stu 就是学生信息存放库，里面有：data指针 和size ，capacity
	InitStuTotal(&stu);
	int input;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddStuTotal(&stu);
			break;
		case SORT:
			SortStuTotal(&stu);
			break;
		case FIND:
			SearchStuTotal(&stu);
			break;
		case SHOW:
			ShowStuTotal(&stu);
			break;
		case SAVE:
			SaveStuTotal(&stu);
			break;
		case MODIFY:
			ModifyStuTotal(&stu);
			break;
		case EXIT:
			printf("关闭程序\n");
			SaveStuTotal(&stu);
			//销毁 -- 释放动态开辟的内存
			DestoryStuTotal(&stu);
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}