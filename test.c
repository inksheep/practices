#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//ˢ����ϰ
//1.���Դ�Сд���Ƚ��ַ�����С�����Ӵ�С���
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
//	i = 0;// -- ����ǵû�Ϊ0
//	/*if (strcmp(arr1, arr2) >= 0)
//	{
//		printf("%s %s", arr1, arr2);
//	}
//	else if (strcmp(arr1, arr2) < 0)
//		printf("%s %s\n", arr2, arr1);*/
//	//����strcmp
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
//	//else if (arr1[i] == arr2[i])//arr1/2 == ��\0'�����
//	//	printf("%s %s\n", arr1, arr2);
//	return 0;
//}

//2.������A�ֽ����������A�����Ϊ������Ԫ����������A�У����Ϊż����Ԫ�ط�������B�У�
//���ֱ���head1,head2ͷָ��ָ��A��B����

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
//		if (i % 2 == 1)//Ϊ�������
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

//3.��ŵ������: *************************************************************
//�������� A B C ��Ҫ��A�ϵ�����ȫ���ƶ���C��
//Ҫ��ÿ���ƶ���ʱ�򣬱��ִ�����Զ�����棬С��������
//˼·��������n������ ��Ҫ�Ȱ�A�ϵ�n-1������ͨ��C���Ƶ�B����
//      ��ʱA����ֻʣһ�������ӣ���������Ӵ�A�Ƶ�C��
//      �ٰ�B���ϵ�n-1������ͨ��A���Ƶ�C����

//ģ���ƶ�
//void move(char pos1, char pos2)
//{
//	printf(" %c -> %c ", pos1, pos2);//��pos1�ƶ���pos2
//}
//
////n ---- ���ӵĸ���
////pos1 -- ��ʼλ��(A) , pos2 -- ��תλ��(B) �� pos3 -- Ŀ��λ��(C)
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//		move(pos1, pos3);
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);//��Ҫ�Ȱ�A�ϵ�n-1������ͨ��C���Ƶ�B����
//		move(pos1, pos3);//��ʱA����ֻʣһ�������ӣ���������Ӵ�A�Ƶ�C��
//		Hanoi(n - 1, pos2, pos1, pos3);//�ٰ�B���ϵ�n-1������ͨ��A���Ƶ�C����
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

//4.�ַ����������⣺���ַ�����A��ͷ�ĺ���K��β�ĵ��ʽ��н���
//����Before: I AM A OK BOY VERY OK
//    After : I OK OK A BOY VERY AM
//
//int main()
//{
//	char* s[50] = { 0 };
//	char arr[50] = "I AM A OK BOY VERY OK";
//	char* delim = " ";//strtokʹ��
//	int k = 0;
//	int i, j;
//	int len = 0;
//	printf("Befter:");
//	char* p = strtok(arr, delim);//strtok --- �ֿ�ȡ���ַ��� --- <string,h>
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

//5.�������������ɹ������ĳ�˴�1990��1��1����ʼ�������������ɹ����
//�ʣ���������Ժ��ĳһ�������ڴ��㻹����ɹ��
//���ڽṹ��
//typedef struct Date
//{
//	int year;
//	int month;
//	int day;
//}Date;
//
////�ж��ǲ������� ���򷵻�1 �����򷵻�0
//int IsLeapYear(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
////���ĳ��ĳ�µ��������
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
////���������Ƿ����
//int IsEqual(Date date1, Date date2)
//{
//	if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day)
//		return 1;
//	return 0;
//}
//
////��������֮���������(һ��һ��ӣ�ֱ����ȣ�����ӵ�����)
//int GetBetwDays(Date date1, Date date2)
//{
//	int count = 0;
//	while (IsEqual(date1, date2) == 0)
//	{
//		if (date1.day != GetMaxDay(date1.year, date1.month))//���������û�� ������
//		{
//			date1.day++;
//		}
//		else if (date1.month != 12)//�������� ��û�� ����һ���� Ҳ�൱�ڼ�һ��
//		{
//			date1.month++;
//			date1.day = 1;
//		}
//		else //����Ҳ���� ��Ҳ���� ����һ�� Ҳ�൱�ڼ�һ��
//		{
//			date1.year++;
//			date1.month = 1;
//			date1.day = 1;
//		}
//		count++;
//	}
//	return count;//�����ܹ��ӵ�����
//}
//
//int main()
//{
//	Date date1, date2;
//	int count = 0;
//	date1.year = 1990;
//	date1.month = 1;
//	date1.day = 1;
//	printf("������Ҫ��ѯ������:>");
//	scanf("%d %d %d", &date2.year, &date2.month, &date2.day);
//	count = GetBetwDays(date1, date2);
//	printf("�������%d��\n", count);
//	if (count % 5 == 0 || count % 5 == 4)//������
//		printf("ɹ��!\n");
//	else
//		printf("����!\n");
//	return 0;
//}

