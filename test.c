#define _CRT_SECURE_NO_WARNINGS 1

//һ��char����
#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	char a[1000];//char ֵ�ķ�ΧΪ -128 �� 127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-1 -2 -3 ... -128 127 126 ... 3 2 1 0
//	}
//	printf("%d\n", strlen(a));//255 ����0ֹͣ ��128 + 127 �ĳ���
//	return 0;
//}

//����qsort -- ����⺯�� ʹ��
//void qsort(void* base , size_t num , size_t width , int (*cmp)(const void* e1 , const void* e2));
//base -- �������ʼλ��  num -- ����Ԫ�صĸ���  width -- ÿ��Ԫ�صĴ�С cmp -- ����Ԫ����ν��� ��Ҫ�Լ�ʵ��
#include <stdlib.h>
//int my_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = {  9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), my_cmp);
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//���������� ��0��100000��������
//���� һ����λ�� = ����ÿһλ�������η�֮��
//153 = 1 + 125 + 27
#include <math.h>

//double my_Pow(int x, int y)
//{
//	if (y < 0)
//		return (1.0 / Pow(x, -y));
//	else if (y == 0)
//		return 1;
//	else
//		return x * Pow(x, y - 1);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.���м�λ
//		int n = 1;//λ��
//		int sum = 0;
//		int tmp = i;//��Ҫi���� ������һ������������ֵ
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.��ÿλ����n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow(x,y) --- ��x��y�η�  <math.h>��Ŀ⺯��
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//�ġ�����ˮ������
//1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ���Ժȶ���ƿ��ˮ��

//int main()
//{
//	int money = 0;
//	int total = 0;//�ܵ���ˮ����
//	int empty = 0;
//	scanf("%d", &money);//20
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;// 5/2 = 2 �� 1 �ͻ���3����ƿ 
//	}
//	printf("total = %d\n", total);//39
//	//�й��� total = money * 2 - 1
//	return 0;
//}


//�塢ʵ��һ�����������������ַ����е�k���ַ�
//����ABCD ����һ���ַ� BCDA
//    ABCD ���������ַ� CDAB

//1. ������ⷨ
#include <assert.h>

//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		//ÿһ������һ���ַ�
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j <len-1 ; j++)
//		{
//			*(arr + j) = *(arr + j + 1);//arr[j] = arr[j + 1];//���Ƹ���
//		}
//		*(arr + len - 1) = tmp;//arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//2.������ת��
//˼·��Ҫ��ת�ĺͲ���ת���ַ��ֱ�����
//      ��ȫ������
//void reverse(char* left,char* right)
//{
//	assert(left && right);
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
//void left_move(char* arr, int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//����дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//���� ��s1 = AABCD �� s2 = BCDAA ����1
//     ��s1 = abcd  �� s2 = ACBD  ����0
// 1.��ٷ�
//void left_move(char* s1, int k)
//{
//	assert(s1 != NULL);
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *s1;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			s1[j] = s1[j + 1];
//		}
//		s1[len - 1] = tmp;
//	}
//}
//
//int is_left_move(char* s1, char* s2)
//{
//	assert(s1 && s2);
//	int i = 0;
//	int len = strlen(s1);
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//ÿ����һ�� ��6��
//		int ret = strcmp(s1, s2);
//		if (ret == 0)//����ͬ���ַ���
//			return 1;
//	}
//	return 0;
//}
//
//2.abcdef+abcdef�� ��������Լ� str�������һ��str
//strcat(arr1,arr2) �������Լ������ã�Ҫ��strncat(char* Dest,const char* Source,size_t X);
//��������� �ǵ�s1�Ŀռ�Ҫ����һ��
//int is_left_move(char* s1, char* s2)
//{
//	assert(s1 && s2);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//1.s1�������һ��s1
//	strncat(s1, s1, len1);
//	//2.�ж�s1ָ����ַ������Ƿ���s2ָ����ַ���
//	//strstr(s1,s2) --- ���Ӵ��Ŀ⺯�� ���򷵻��Ӵ���ַ�����򷵻�NULL
//	char* ret = strstr(s1, s2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//�ߡ����Ͼ���
//��һ�����־��󣬾����ÿһ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڣ�(��Ҫ���Ӷ�С��O(n))
//��������1 2 3     1 2 3  ˼·�������Ͻǻ����� ���ų�һ�л�һ��
//        3 4 5     4 5 6
//        4 5 6     7 8 9
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;//���Ͻǵ��±�
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else//�ҵ��� arr[x][y] == k
//		{
//			*px = x;//�����±�
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int  arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	int x = 3;//����
//	int y = 3;//����
//	scanf("%d", &k);
//	int ret = FindNum(arr, k, &x, &y);//�����Ͳ��� �ɷ����±�
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("����Ϊ x = %d y = %d", x, y);
//	}
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}


