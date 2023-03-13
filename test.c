#define _CRT_SECURE_NO_WARNINGS 1

//一、自己实现strcpy
#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* tmp = dest;
//	while (*dest++ = *src++)//会把'\0'拷贝过去
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

//二、追加字符串的自我实现 strcat
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

//三、字符串比较  
//int strcmp(const char* str1,const char* str2);
//str1 > str2 返回 >0   s1<s2 返回 <0  s1 == s2 返回 0
 
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
//		printf("相等");
//	else if (ret > 0)
//		printf("大于");
//	else
//		printf("小于");
//}

//四、查找字符串 strstr
// char * strstr(const char* str1,const char* str2);
//在str1指向的字符串中找 有没有str2指向的字符串
//有 则返回第一次出现的地址； 无 则返回NULL

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
//			return NULL;//主串短的情况 
//		else if (*s2 == '\0')
//			return cur;//找到了
//		cur++;//没找到 接着循环
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


//五、strtok的使用 取分隔符分开的串
//char* strtok(char* str,const char* sep);
//int main()
//{
//	char arr[] = "dmy@123456.com";
//	char* a = "@.";
//	char buf[50] = { 0 };//strtok会改变操作后的字符串，所以用临时数组来拷贝使用
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(buf, a); ret != NULL; ret = strtok(NULL, a))
//	{
//		printf("%s ", ret);
//	}
//
//	return 0;
//}

//六、使用perror 进行报错

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test.txt");//会自动在后面添加: (一个空格)
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//七、memcpy -- 内存拷贝  重叠的空间用memmove --- <string.h>
// void* memcpy(void* dest, const void* src, size_t num);
// 同一个空间可能会被覆盖
//适用于两个不相关的空间 重叠的空间用memmove
//自己实现
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)//num --- 要拷贝的字节数
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

//memmove -- 处理内存重叠的情况 内存拷贝
//void* memmove(void* dest, const void* src, size_t num)
//自己实现
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)//从前向后拷贝
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else//dest>=src 从后向前拷贝
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


