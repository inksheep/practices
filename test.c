#define _CRT_SECURE_NO_WARNINGS 1

//ˢ����ϰ

//1.������1-1/3+1/5-1/7+1/9......ǰ20��֮�͡�
//Ҫ�󣺱���С�������λ��Ч����

#include <stdio.h>

//int main()
//{
//	float sum = 0;
//	int i = 0;
//	int flag = 1;
//	int j = 1;
//	for (i = 0; i < 20; i++)
//	{
//		sum += flag * 1.0 / j;//Ҳ����2i-1 ���������
//		j += 2;
//		flag = -flag;
//	}
//	printf("sum = %.2f\n", sum);
//	return 0;
//}

//2.����һ�����Ȳ�����100���ַ��������á����ݷ������ַ����а����ĸ����ַ���ASCIIֵ��С��������
//Ҫ���������Զ��庯��sort��ʵ��
#include <string.h>
//ð������
//void sort(char* arr,int sz)
//{
//	int i, j;
//	int tmp;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)//���һ��Ԫ�ز������� --- ��������
//	{
//		flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)//�� ʮ��Ԫ�رȽ� ��Ҫ�ȽϾŶ�
//		{
//			//���� �ò���i
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	int sz = 0;
//	do
//	{
//		printf("����һ�����Ȳ�����100���ַ���:>");
//		scanf("%s", arr);
//		sz = strlen(arr);
//	} while (sz > 100);
//	printf("%s\n", arr);//����ǰ������
//	sort(arr,sz);
//	printf("%s\n", arr);//����������
//	return 0;
//}

//3.����һ�����Ȳ�����100���ַ�����Ȼ������һ���ַ���ͨ�������ַ����и��ַ�ɾ�����������
//Ҫ��ɾ���ַ����Զ��庯��deletechar��ʵ��

//void deletechar(char* arr, char ch)
//{
//	int i, j;
//	for (i = 0; i < arr[i]!='\0'; i++)
//	{
//		if (arr[i] == ch)
//		{
//			for (j = i; j < arr[j]!='\0'; j++)//[ע��]Ҫ��'\0'Ҳ��ǰ��
//			{
//				arr[j] = arr[j + 1];
//				
//			}
//		}
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	int sz;
//	char ch;
//	do
//	{
//		printf("�����볤�Ȳ�����100���ַ���:>");
//		gets(arr);
//		sz = strlen(arr);
//	} while (sz > 100);
//	printf("������Ҫɾ�����ַ�:>");
//	scanf("%c", &ch);
//	deletechar(arr, ch);
//	printf("%s\n", arr);
//	return 0;
//}


//4.�Ӽ�������10���������ҳ���������10������ƽ������ӽ�����
#include <math.h>
//
//int Findclose(int* arr, double ave)
//{
//	double tmp[10] = { 0 };
//	int i = 0;
//	double min = 0;
//	int pos = 0;
//	for (i = 0; i < 10; i++)
//	{
//		tmp[i] = fabs((double)(arr[i] - ave));//fabs(double x) --- ��x�ľ���ֵ --- <math.h>
//	}
//	min = tmp[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (tmp[i] < min)
//		{
//			min = tmp[i];
//			pos = i;
//		}
//	}
//	return pos;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	double ave = 0;
//	int pos = 0;
//	printf("������10������:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	ave = sum / 10.0;
//	pos = Findclose(arr,ave);
//	printf("��ƽ��ֵ%lf��ӽ�������:%d", ave, arr[pos]);
//	return 0;
//}

//5.�õݹ�ķ�ʽ��쳲��������е�n��Fn��
//Ҫ��n�ɼ�������
//�ݹ�
//int Fun(int n)
//{
//	if (n <= 2)
//		return 1;
//	else //n>2
//		return Fun(n - 1) + Fun(n - 2);
//}
////��ѭ���ķ���
//int Fib(int n)
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
//
//int main()
//{
//	int n = -1;
//	int ret = 0;
//	while (n <= 0)
//	{
//		printf("������Ҫ�õ��ĵ�n��쳲�������:>");
//		scanf("%d", &n);
//	}
//	ret = Fun(n);
//	printf("%d\n", ret);
//	return 0;
//}

//6.��1+3+5+...+(2n-1)��ֵ��
//Ҫ��nͨ����������
//int Fun(int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 2 * n - 1; i += 2)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Fun(n);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//7.дһ��������ʹ�����Ķ�ά��������b[3][3]��Ȼ�������������ת��������������
//����ԭ���飺 b = 1 2 7  �任Ϊ��b = 1 3 5
//                 3 4 8              2 4 6
//                 5 6 9              7 8 9
//void convert(int arr[3][3])
//{
//	int tmp = 0;
//	int i,j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i + 1; j < 3; j++)//������ ֻ��Ҫ��һ�� i == j �Ĳ��û� ԭ�ز���
//		{
//			tmp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int b[3][3] = { 0 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	convert(b);
//	printf("�任��:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//8.����2001--2016֮�������
//int main()
//{
//	int i, j;
//	for (i = 2001; i <= 2016; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)//sqrt() --- ��ƽ�� --- <math.h>
//		{
//			if (i % j == 0)
//			{
//				break;//�������� ����ѭ��
//			}
//		}
//		if (j > sqrt(i))//������
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//9.�Ӽ�������n,��(2*n)!
//�ݹ�ķ���:
//int Fun(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * Fun(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	////ѭ���ķ���:
//	//for (i = 1; i <= 2 * n; i++)
//	//{
//	//	ret = ret * i;
//	//}
//	ret = Fun(2*n);
//	printf("(2*n)! = %d", ret);
//	return 0;
//}

//10.����ժ����:
//��һ��ժ���ң�����Ե�һ�룬�ٶ��һ��
//�ڶ����ʣ�µģ���һ�룬�ٶ��һ��
//һֱ�Ե���10�� ����ֻ��1�������ˣ��ʵ�һ��ժ�˶������ӣ�
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i < 10; i++)//����9��
//	{
//		ret = (ret + 1) * 2;
//	}
//	printf("��һ��ժ��:%d\n", ret);
//	return 0;
//}

