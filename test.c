#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//һ���ȼ��ɼ���ٷ��Ƴɼ��Ի�
//90������ --- A �� 80��90 --- B �� 70��80 --- C ��60��70 --- D �� 60���� --- E

//int main()
//{
//	int score = 0;//����
//	printf("������÷���:>");
//	scanf("%d", &score);
//	switch (score / 10)
//	{
//	case 10://��100�ֵ����
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

//������Сд��ĸת��
//Сд'a'��ASKIIֵ��'A'��32
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

//�������n��쳲�������
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

//쳲������������
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
//	while (n > 2) //�ӵ�������ʼ�� �������������n��쳲���������ѭ�� ÿ��һ���ͼ���ȥ
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
//	printf("����Ҫ���n��쳲�������֮��:>");
//	scanf("%d", &n);
//	int sum = Sum(n);
//	printf("%d\n", sum);
//	return 0;
//}

//�ġ�ð�ݷ�
//void Sort_Bubble(int arr[], int sz)
//{
//	int i, j, tmp;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)//sz - 1 ��Ϊ���һ�β����ƶ�
//	{
//		flag = 1;//��־ ��һ��ѭ������ һ�ζ�û�н��� ��˵������������ ����Ҫ��ѭ����
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
//		if (flag == 1)//���� ����Ҫ��ѭ�� ֱ������
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

//�塢��д������һ�仰��ÿ�����ʵ�����ĸ��д�������������в��Ըú�����
// (��ʾ������ a[0]�ǵ�һ�����ʵ�����ĸ��������������ĸ���жϹ�����Ϊ��
// a[i]�ǿո񣬲��� a[i + 1]��СдӢ����ĸ���� a[i + 1]���ǵ�������ĸ��
// �������� wish you a good mark in the exam.��� Wish You A Good Mark In The Exam)��
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
//	checkAa(arr);//[ע] ���Ҫ����Ļ� ������scanf scanf���Կո�Ϊ������ ������gets()
//	printf("%s\n", arr);
//	return 0;
//}


//�������� a, b, c������ж������ܷ񹹳�һ��������
//����֮�ʹ��ڵ����� ��: a+b>c && a+c>b && b+c>a
//[ע] Ҫע�����ߵı߳����Ǵ������
//int main()
//{
//	float a, b, c;
//	printf("���������ߵĳ���:>");
//	scanf("%f %f %f", &a, &b, &c);
//	if (a > 0 && b > 0 && c > 0)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			printf("�����������\n");
//		}
//		else
//			printf("����\n");
//	}
//	return 0;
//}

//�ߡ����һ�������ж�һ�����Ƿ��������������������в����������
#include <math.h>

//int Check(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)//sqrt() -- ��ƽ����ѧ�⺯��
//	{
//		if (n % i == 0)
//			return 0;//���þ� ��������
//	}
//	if (i > sqrt(n))
//		return 1;//������
//}
//
//int main()
//{
//	int n = 0;
//	printf("�����������жϵ���:>");
//	scanf("%d", &n);
//	int ret = Check(n);
//	if (ret == 1)
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//�ˡ��Ӽ�����������һ���,�����������ÿ�µ�������
//Ҫ�����ݰ����������ÿ�зֱ���ʾ6���·ݵ���������ÿ�е�����֮����","����
//�ж����� �������29�� ƽ��28��
//void PrintDay(int year)
//{
//	printf("һ��:31 ,");
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		printf("����:29 ,");
//	else
//		printf("����:28 ,");
//	printf("����:31 ,");
//	printf("����:30 ,");
//	printf("����:31 ,");
//	printf("����:30\n");
//	printf("����:31 ,");
//	printf("����:31 ,");
//	printf("����:30 ,");
//	printf("ʮ��:31 ,");
//	printf("11��:30 ,");
//	printf("12��:31 ,");
//}
//
//int main()
//{
//	int year = 0;
//	printf("���������:>");
//	scanf("%d", &year);
//	PrintDay(year);
//	return 0;
//}

//�š��Ӽ�������һ��������n����̼��㲢���1~n֮����������֮�͡�
//Ҫ��:�������ж����Զ��庯��int IsPrime (int n)��ɡ�

//int IsPrime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;//��������
//	}
//	if(j>sqrt(i))
//		return 1;//������
//}
//
//int main()
//{
//	int n = 0;
//	printf("������һ��������:>");
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 2; i <= n; i++)//1�������� ���Դ�2��ʼ 2������
//	{
//		int ret = IsPrime(i);
//		if (ret == 1)//����1 ��������
//			sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//ʮ���Ӽ�������20λѧ������Ϣ������ѧ�š������Լ�1�ſεĳɼ�����д����ʵ���¹���:
//1����20λѧ���ĳɼ�������������򣬲���������ѧ����Ϣд�뵽�ļ�temp.txt�ļ���; ��10��)
//2����ѧ�����ѧ����Ϣ�ļ���������ҵ��������ѧ���������Ϣ���������"Don't findthe corresponding message!����(10��)

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
	StuTotal stu;//stu ����ѧ����Ϣ��ſ⣬�����У�dataָ�� ��size ��capacity
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
			printf("�رճ���\n");
			SaveStuTotal(&stu);
			//���� -- �ͷŶ�̬���ٵ��ڴ�
			DestoryStuTotal(&stu);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}