#define _CRT_SECURE_NO_WARNINGS 1


//ˢ����ϰ
//1.1--100���������������������s��
//Ҫ��:�ж������ں��������
#include <stdio.h>
#include <math.h>
//�ж��Ƿ�������
//int IsPrime(int i)
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j++)//sqrt() --- ��ƽ������
//	{
//		if (i % j == 0)
//		{
//			return 0;//���þ� ��������
//		}
//	}
//	return 1;//������
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
//		if (ret == 1)//������ ��������
//		{
//			s[j] = i;
//			j++;
//		}
//	}
//	//������ӡ������һ��
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		printf("%d ", s[i]);
//	}
//	return 0;
//}

//2.�Ѷ���һ������int a[10] = {1,2,3,4,5,6,7,8,9,10} ����һ���±�k��
//��������ɾ������±��Ӧ��Ԫ�أ�Ҫ��ɾ�������ں��������
//
//ɾ���±��ӦԪ�� n --- Ԫ�ظ���
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
//��ӡ����Ԫ��
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
//	printf("������Ҫɾ��Ԫ�ص��±�:>");
//	scanf("%d", &k);
//	n = MyDel(a,n,k);
//	printf("After:");
//	MyOut(a, n);
//	return 0;
//}

//3.��һ�������洢���ڴ��еĶ�������1�ĸ���
//�����ⷽ��n&(n-1) -- ÿ&һ�� ��һ��1 ֱ��Ϊ0
//���˷�����ã�
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

//��>>����Ȼ��&1�ķ���
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
//	printf("%d��������1�ĸ���Ϊ:%d", n, count);
//	return 0;
//}
