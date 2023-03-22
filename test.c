#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//刷题练习
//1.忽略大小写，比较字符串大小，并从大到小输出
//
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	int i = 0;
//	scanf("%s %s", arr1, arr2);
//	while (arr1[i] != '\0')
//	{
//		if (arr1[i] >= 'A' && arr1[i] <= 'Z')
//			arr1[i] += 32;
//		i++;
//	}
//	while (arr2[i] != '\0')
//	{
//		if (arr2[i] >= 'A' && arr2[i] <= 'Z')
//			arr2[i] += 32;
//		i++;
//	}
//	i = 0;// -- 用完记得还为0
//	/*if (strcmp(arr1, arr2) >= 0)
//	{
//		printf("%s %s", arr1, arr2);
//	}
//	else if (strcmp(arr1, arr2) < 0)
//		printf("%s %s\n", arr2, arr1);*/
//	//不用strcmp
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 > len2)
//		printf("%s %s\n", arr1, arr2);
//	else if (len1 < len2)
//		printf("%s %s\n", arr2, arr1);
//	while (arr1[i] != '\0' && arr2[i] != '\0' && (arr1[i] == arr2[i]))
//	{
//		i++;
//	}
//	if (arr1[i] > arr2[i])
//		printf("%s %s\n", arr1, arr2);
//	else if (arr1[i] < arr2[i])
//		printf("%s %s\n", arr2, arr1);
//	//else if (arr1[i] == arr2[i])//arr1/2 == ‘\0'的情况
//	//	printf("%s %s\n", arr1, arr2);
//	return 0;
//}

//2.将链表A分解成两个链表，A中序号为奇数的元素留在链表A中，序号为偶数的元素放入链表B中，
//并分别用head1,head2头指针指向A、B链表

//typedef struct LNode {
//	int data;
//	struct LNode* next;
//}LNode, *ListNode;
//
//void DepartA_B(ListNode &La)
//{
//	LNode* Lb = (ListNode)malloc(sizeof(LNode));
//	LNode* head1 = La;
//	LNode* head2 = Lb;
//	Lb->next = NULL;
//	LNode* p = La->next;
//	La->next = NULL;
//	LNode* ra, *rb;
//	ra = La;
//	rb = Lb;
//	int i = 0;
//	while (p != NULL)
//	{
//		if (i % 2 == 1)//为奇数序号
//		{
//			ra->next = p;
//			ra = ra->next;
//			p = p->next;
//			i++;
//		}
//		else
//		{
//			rb->next = p;
//			rb = rb->next;
//			p = p->next;
//			i++;
//		}
//	}
//	ra->next = NULL;
//	rb->next = NULL;
//}

//3.汉诺塔问题: *************************************************************
//三个柱子 A B C ，要把A上的盘子全都移动到C上
//要求：每次移动的时候，保持大盘永远在下面，小盘在上面
//思路：假设有n个盘子 需要先把A上的n-1个盘子通过C柱移到B柱上
//      这时A柱就只剩一个大盘子，把这个盘子从A移到C上
//      再把B柱上的n-1个盘子通过A柱移到C柱上

//模拟移动
//void move(char pos1, char pos2)
//{
//	printf(" %c -> %c ", pos1, pos2);//从pos1移动到pos2
//}
//
////n ---- 盘子的个数
////pos1 -- 起始位置(A) , pos2 -- 中转位置(B) ， pos3 -- 目标位置(C)
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//		move(pos1, pos3);
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);//需要先把A上的n-1个盘子通过C柱移到B柱上
//		move(pos1, pos3);//这时A柱就只剩一个大盘子，把这个盘子从A移到C上
//		Hanoi(n - 1, pos2, pos1, pos3);//再把B柱上的n-1个盘子通过A柱移到C柱上
//	}
//}
//
//int main()
//{
//	Hanoi(1, 'A', 'B', 'C');
//	printf("\n");
//	Hanoi(2, 'A', 'B', 'C');
//	printf("\n");
//	Hanoi(3, 'A', 'B', 'C');
//	printf("\n");
//	return 0;
//}

//4.字符串交换问题：将字符串以A开头的和以K结尾的单词进行交换
//例：Before: I AM A OK BOY VERY OK
//    After : I OK OK A BOY VERY AM
//
//int main()
//{
//	char* s[50] = { 0 };
//	char arr[50] = "I AM A OK BOY VERY OK";
//	char* delim = " ";//strtok使用
//	int k = 0;
//	int i, j;
//	int len = 0;
//	printf("Befter:");
//	char* p = strtok(arr, delim);//strtok --- 分开取出字符串 --- <string,h>
//	printf("%s ", p);
//	s[k++] = p;
//	while (p = strtok(NULL, delim))
//	{
//		printf("%s ", p);
//		s[k++] = p;
//	}
//	i = 0;
//	j = k - 1;
//	while (i < j)
//	{
//		len = strlen(s[j]);
//		if (s[i][0] != 'A')
//			i++;
//		if (s[j][len - 1] != 'K')
//			j--;
//		if (s[i][0] == 'A' && s[j][len - 1] == 'K')
//		{
//			p = s[i];
//			s[i] = s[j];
//			s[j] = p;
//			i++;
//			j--;
//		}
//	}
//	printf("\nAfter:");
//	for (i = 0; i < k; i++)
//	{
//		printf("%s ", s[i]);
//	}
//	printf("\n");
//	return 0;
//}

//5.“三天打鱼两天晒网”。某人从1990年1月1日起开始“三天打鱼两天晒网”
//问：这个人在以后的某一天中是在打鱼还是在晒网
//日期结构体
//typedef struct Date
//{
//	int year;
//	int month;
//	int day;
//}Date;
//
////判断是不是闰年 是则返回1 不是则返回0
//int IsLeapYear(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
////获得某年某月的最大天数
//int GetMaxDay(int year, int month)
//{
//	switch (month)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		return 31;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		return 30;
//	case 2:
//		return IsLeapYear(year) ? 29 : 28;
//	default:
//		return -1;
//	}
//}
//
////两个日期是否相等
//int IsEqual(Date date1, Date date2)
//{
//	if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day)
//		return 1;
//	return 0;
//}
//
////计算日期之间的天数差(一天一天加，直到相等，算出加的天数)
//int GetBetwDays(Date date1, Date date2)
//{
//	int count = 0;
//	while (IsEqual(date1, date2) == 0)
//	{
//		if (date1.day != GetMaxDay(date1.year, date1.month))//这个月天数没满 加天数
//		{
//			date1.day++;
//		}
//		else if (date1.month != 12)//天数满了 月没满 到下一个月 也相当于加一天
//		{
//			date1.month++;
//			date1.day = 1;
//		}
//		else //天数也满了 月也满了 到下一年 也相当于加一天
//		{
//			date1.year++;
//			date1.month = 1;
//			date1.day = 1;
//		}
//		count++;
//	}
//	return count;//返回总共加的天数
//}
//
//int main()
//{
//	Date date1, date2;
//	int count = 0;
//	date1.year = 1990;
//	date1.month = 1;
//	date1.day = 1;
//	printf("请输入要查询的日期:>");
//	scanf("%d %d %d", &date2.year, &date2.month, &date2.day);
//	count = GetBetwDays(date1, date2);
//	printf("日期相差%d天\n", count);
//	if (count % 5 == 0 || count % 5 == 4)//后两天
//		printf("晒网!\n");
//	else
//		printf("打鱼!\n");
//	return 0;
//}

