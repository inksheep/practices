#define _CRT_SECURE_NO_WARNINGS 1

//一、char的题
#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	char a[1000];//char 值的范围为 -128 到 127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-1 -2 -3 ... -128 127 126 ... 3 2 1 0
//	}
//	printf("%d\n", strlen(a));//255 遇到0停止 即128 + 127 的长度
//	return 0;
//}

//二、qsort -- 排序库函数 使用
//void qsort(void* base , size_t num , size_t width , int (*cmp)(const void* e1 , const void* e2));
//base -- 排序的起始位置  num -- 排序元素的个数  width -- 每个元素的大小 cmp -- 两个元素如何交换 需要自己实现
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


//三、自幂数 求0到100000的自幂数
//例： 一个三位数 = 它的每一位数的三次方之和
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
//		//1.求有几位
//		int n = 1;//位数
//		int sum = 0;
//		int tmp = i;//需要i不变 所以用一个变量用它的值
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.求每位数的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow(x,y) --- 求x的y次方  <math.h>里的库函数
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//四、喝汽水的问题
//1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元可以喝多少瓶汽水？

//int main()
//{
//	int money = 0;
//	int total = 0;//总的汽水数量
//	int empty = 0;
//	scanf("%d", &money);//20
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;// 5/2 = 2 余 1 就会有3个空瓶 
//	}
//	printf("total = %d\n", total);//39
//	//有规律 total = money * 2 - 1
//	return 0;
//}


//五、实现一个函数，可以左旋字符串中的k个字符
//例：ABCD 左旋一个字符 BCDA
//    ABCD 左旋两个字符 CDAB

//1. 暴力求解法
#include <assert.h>

//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		//每一次左旋一个字符
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j <len-1 ; j++)
//		{
//			*(arr + j) = *(arr + j + 1);//arr[j] = arr[j + 1];//左移覆盖
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

//2.三步翻转法
//思路：要旋转的和不旋转的字符分别逆序
//      再全部逆序
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


//六、写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
//例： 给s1 = AABCD 和 s2 = BCDAA 返回1
//     给s1 = abcd  和 s2 = ACBD  返回0
// 1.穷举法
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
//		left_move(s1, 1);//每次移一个 移6次
//		int ret = strcmp(s1, s2);
//		if (ret == 0)//有相同的字符串
//			return 1;
//	}
//	return 0;
//}
//
//2.abcdef+abcdef法 后面加上自己 str后面加上一个str
//strcat(arr1,arr2) 用来加自己不可用，要用strncat(char* Dest,const char* Source,size_t X);
//用这个方法 记得s1的空间要开大一点
//int is_left_move(char* s1, char* s2)
//{
//	assert(s1 && s2);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//1.s1后面加上一个s1
//	strncat(s1, s1, len1);
//	//2.判断s1指向的字符串中是否有s2指向的字符串
//	//strstr(s1,s2) --- 找子串的库函数 有则返回子串地址，无则返回NULL
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

//七、杨氏矩阵
//有一个数字矩阵，矩阵的每一行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在？(需要复杂度小于O(n))
//矩阵例：1 2 3     1 2 3  思路：找右上角或左下 可排除一行或一列
//        3 4 5     4 5 6
//        4 5 6     7 8 9
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;//右上角的下标
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else//找到了 arr[x][y] == k
//		{
//			*px = x;//返回下标
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
//	int x = 3;//行数
//	int y = 3;//列数
//	scanf("%d", &k);
//	int ret = FindNum(arr, k, &x, &y);//返回型参数 可返回下标
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("坐标为 x = %d y = %d", x, y);
//	}
//	else
//		printf("找不到\n");
//	return 0;
//}


