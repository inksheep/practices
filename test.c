#define _CRT_SECURE_NO_WARNINGS 1

//���������
//1.���ַ��������еĴ�д��ĸת��ΪСд�������ַ����䣨��ʹ��ת����������
//���磬���ַ���Ϊ"This Is a c Program"
//�����"this is a c program"
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[30] = { 0 };
//	printf("�������ַ���:>");
//	gets(arr);
//	int i = 0;
//	//��forѭ��
//	/*for (i = 0; i < (int)strlen(arr); i++)
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//			arr[i] += 32;
//	}*/
//	//��whileѭ��
//	while (arr[i] != '\0')
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//			arr[i] += 32;
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//2.��[1��1000]֮��Ȳ��ܱ�7����Ҳ���ܱ�5����������֮�ͣ�������������s��
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

//3.ͳ���ַ�����Ԫ����ĸ��a������e������i������o������u���ĸ����������
//���磬���ַ���Ϊ"This Is a c Program"
//�����Result is : 4
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
//	printf("�������ַ���:>");
//	gets(arr);
//	n = fun(arr);
//	printf("Result is :%d\n", n);
//	return 0;
//}

//4.ͳ���ַ�����Ӣ����ĸ�ĸ����������
//���磬���ַ���Ϊ"This Is a c Program"
//�����Result is : 15

//int main()
//{
//	char arr[50] = { 0 };
//	int count = 0;
//	int i = 0;
//	printf("�������ַ���:>");
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

//5.��N*N����ĵ�2�У����±�Ϊ������Ԫ�صĺͲ������
//���磬������Ϊ��
//1   2   3   4
//5   6   7   8
//9  10  11  12
//13  14  15  16
//���2��Ԫ���ǣ�9��10��11��12����2��Ԫ��֮��Ϊ��42
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


//6.���ַ����ĳ��Ȳ������
//���磬���ַ���1Ϊ"This Is a c Program"
//��Ӧ�����Result is : 19
#include <assert.h>
//����ʱ������
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

//����ʱ������ --- �ݹ�
//int my_strlen(const char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}

//ָ�� - ָ�� = Ԫ�ظ��� (Ҫͬ����ָ�����)
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
//	printf("�������ַ���:>");
//	gets(arr);
//	int len = my_strlen(arr);
//	printf("Result is : %d\n", len);
//	return 0;
//}

//7.��[m��n]֮�����в��ܱ�3����������֮�ͣ�m��n��ֵ�ɼ������롣
//���磬�������3��12����������Ϊ��45

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


//8.������Ĺ�ʽ��sum��ֵ��
//sum = m + (m + 1) + (m + 2) + (m + 3) + ���� + (n - 1) + n
//���磬���m��n��ֵ�ֱ�Ϊ1��100���������Ϊ5050��

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

//9.���ַ��������Ų������
//���磬���ַ���Ϊ"This Is a c Program"
//�����"margorP c a sI sihT"
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
//	printf("�����ַ���:>");
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

//10.������Ĺ�ʽ��sum��ֵ��
//sum = 1 - 2 + 3 - 4 + 5 - 6 + ���� + 99 - 100
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
