#define _CRT_SECURE_NO_WARNINGS 1

//һ���Լ�ʵ��strcpy
#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* tmp = dest;
//	while (*dest++ = *src++)//���'\0'������ȥ
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[30] = "ABCDEF";
//	char arr2[] = "abcd";
//	//char* ret = strcpy(arr1, arr2);
//	char* ret = my_strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	printf("%s\n", arr1);
//	return 0;
//}

//����׷���ַ���������ʵ�� strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[30] = "abcd";
//	char arr2[] = "efg";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//}

//�����ַ����Ƚ�  
//int strcmp(const char* str1,const char* str2);
//str1 > str2 ���� >0   s1<s2 ���� <0  s1 == s2 ���� 0
 
//int strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)//return *str1 - *str2;
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char arr1[30] = "abcd";
//	char arr2[] = "ab";
//	int ret = strcmp(arr1, arr2);
//	if (ret == 0)
//		printf("���");
//	else if (ret > 0)
//		printf("����");
//	else
//		printf("С��");
//}

//�ġ������ַ��� strstr
// char * strstr(const char* str1,const char* str2);
//��str1ָ����ַ������� ��û��str2ָ����ַ���
//�� �򷵻ص�һ�γ��ֵĵ�ַ�� �� �򷵻�NULL

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s1 == '\0')
//			return NULL;//�����̵���� 
//		else if (*s2 == '\0')
//			return cur;//�ҵ���
//		cur++;//û�ҵ� ����ѭ��
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr[] = "qweabbcdef";
//	char a[] = "abbc";
//	char* ret = my_strstr(arr, a);
//	if(ret != NULL)
//		printf("%s\n", ret);
//	return 0;
//}


//�塢strtok��ʹ�� ȡ�ָ����ֿ��Ĵ�
//char* strtok(char* str,const char* sep);
//int main()
//{
//	char arr[] = "dmy@123456.com";
//	char* a = "@.";
//	char buf[50] = { 0 };//strtok��ı��������ַ�������������ʱ����������ʹ��
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(buf, a); ret != NULL; ret = strtok(NULL, a))
//	{
//		printf("%s ", ret);
//	}
//
//	return 0;
//}

//����ʹ��perror ���б���

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test.txt");//���Զ��ں������: (һ���ո�)
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ߡ�memcpy -- �ڴ濽��  �ص��Ŀռ���memmove --- <string.h>
// void* memcpy(void* dest, const void* src, size_t num);
// ͬһ���ռ���ܻᱻ����
//��������������صĿռ� �ص��Ŀռ���memmove
//�Լ�ʵ��
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)//num --- Ҫ�������ֽ���
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
// 
//int main()
//{
//	int arr1[30] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
//	my_memcpy(arr1, arr2, sizeof(arr2));
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	//printf("%s\n", arr1);
//	return 0;
//}

//memmove -- �����ڴ��ص������ �ڴ濽��
//void* memmove(void* dest, const void* src, size_t num)
//�Լ�ʵ��
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)//��ǰ��󿽱�
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else//dest>=src �Ӻ���ǰ����
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	my_memmove(arr1, arr1 + 2, 5*sizeof(int));
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


