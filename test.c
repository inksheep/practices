#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//һ���ػ�����
//int main()
//{
//	char ch[20] = { 0 };
//	while (1)
//	{
//		system("shutdown -s -t 60");//60s��ػ�
//		printf("���������ǳ��ˣ�������Խ�����1min���ڹػ�\n");
//		scanf("%s", ch);
//		if (strcmp("���ǳ���", ch) == 0)
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
//	//printf("%d", printf("%d", printf("%d", 43)));//��ӡ43 ����2 ��ӡ2 ����1
//	printf("%d", printf("%d", printf("%d", 654)));//65431
//	return 0;
//}


//�����ݹ�
//���������������һλһλ�Ĵ����

//void print(int n)
//{
//	if (n > 9)//��λ�������� 123  12  1
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

//����ģ��ʵ��strlen 
// 
//1.��ָ��-ָ��ķ�ʽ
#include <assert.h>

//int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	char* strat = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - strat;//ָ�� - ָ�� = Ԫ�ظ��� Ҫͬһ���͵�ָ��
//}
// 
//2.�ñ�����
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

//3.���ñ����� �õݹ�ķ���
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

//�ġ�쳲���������
//1 1 2 3 5 8 13 21 34 55 ... (������� = ǰ������֮��)
//���n��쳲�������
//1.��ѭ���ķ���
//(����һ��)
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

//2.�õݹ�ķ���
//(�õݹ���ظ�����ܶ࣬Ч�ʵ�)
//int Find(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Find(n - 1) + Find(n - 2);
//}

//int main()
//{
//	//TDD -- ������������ �� ��дʹ����ʵ��
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Find(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//�塢������������ ������ʱ����
//(Ч�ʲ��� �ɶ��Բ� ��������ʹ����ʱ����������)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//�Ӽ���
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//���ķ���
//	a = a ^ b;// a^b �൱�ڵõ���һ������ ��������b��� �� a ��֮����b
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//������һ�������洢���ڴ��еĶ�������1�ĸ���

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

//����ã�n & (n - 1)
//���� 1101 & 1100   �� 1100
//     1100 & 1011   �� 1000 һ����һ��1 �м���1ִ�м��� ���յ�0
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
//	int a = 13;//1101  3��1
//	scanf("%d", &a);
//	printf("%d\n", count_bit_one(a));
//	return 0;
//}

//�ߡ�sizeof()��ע�����
//int main()
//{
//	int i = -1;
//	if (i > sizeof(i))//sizeof() ����ʱ���Ȱ��Աߵ������޷���������
//		printf(">");
//	else
//		printf("<");
//	return 0;
//}

//�ˡ���������У������� ��ͬ������λ�ĸ���
//˼·����� ��ͬΪ0 ��ͬΪ1 Ȼ������1�ĸ���
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

//�š�����һ������ÿλ֮��
//����һ���� ����DigitSum(1729) ����1+7+2+9 ��Ϊ19
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


//ʮ������n��k�η�
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else //k < 0 ʱ
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
//	double ret = Pow(n, k);//��Ϊ�и����η� ���з��� ������double
//	printf("%lf\n", ret);
//	return 0;
//}

//ʮһ���жϵ�ǰ�������ֽ�����ʲô
//��ˣ���λ�ŵ��ߵ�ַ������λ�ŵ��͵�ַ��
//С�ˣ���λ�ŵ��͵�ַ������λ�ŵ��ߵ�ַ��
//int check_sys()
//{
//	int n = 1;//00 00 00 01 ��ˣ�00 00 00 01 С�ˣ�01 00 00 00 
//	char* tmp = (char*)&n;
//	//����1 ΪС��
//	//����0 Ϊ���
//	return *tmp; // ���Ϊ�� return *((char*)&n);
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
//		printf("��С�˴洢");
//	else
//		printf("�Ǵ�˴洢");
//	return 0;
//}

