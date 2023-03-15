#define _CRT_SECURE_NO_WARNINGS 1

#include "student.h"

void LoadStuTotal(StuTotal* ps)
{
	Student tmp;
	FILE* pfRead = fopen("StuTotal.dat", "rb");
	if (pfRead == NULL)
	{
		perror("read StuTotal.dat");
		return;
	}
	//读文件
	while (fread(&tmp, sizeof(Student), 1, pfRead))// fread 的返回值小于要读个数时 则代表读取结束 这里返回0时 代表读取文件信息结束
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

//初始化 -- 开辟空间
void InitStuTotal(StuTotal* ps)
{
	//动态的↓
	ps->data = (Student*)malloc(DEFAULT_SZ * sizeof(Student));//最初给3个位置
	if (ps->data == NULL)
		return;
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//这是静态的时候↓
	//memset(ps->data, 0, sizeof(ps->data));//初始化成0
	//ps->size = 0;

	//把文件中已存放的信息读取出来
	LoadStuTotal(ps);
}

void CheckCapacity(StuTotal* ps)
{
	if (ps->size == ps->capacity)
	{
		Student* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(Student));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddStuTotal(StuTotal* ps)
{
	//检查容量是否满了
	//1.若满了，则增容
	//2.若没满，什么都不做
	CheckCapacity(ps);
	//填写信息
	printf("请输入姓名:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入学号:>");
	scanf("%d", &(ps->data[ps->size].num));
	printf("请输入分数:>");
	scanf("%d", &(ps->data[ps->size].score));

	ps->size++;
	printf("添加成功\n");
}

int FindByNum(const StuTotal* ps, int num)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->data[i].num == num)
		{
			return i;
		}
	}
	return -1;
}

//根据学号进行查找
void SearchStuTotal(const StuTotal* ps)
{
	int num = 0;
	int pos = 0;
	printf("请输入学生学号:>");
	scanf("%d", &num);
	//查找人在什么位置
	//1.找到了 返回学号所在元素的下标
	//2.没找到 返回-1
	pos = FindByNum(ps,num);
	if (pos == -1)
	{
		printf("Don't findthe corresponding message!");
	}
	else
	{
		printf("%-20s\t %-20s\t %-5s\n", "名字", "学号", "分数");
		printf("%-20s\t %-20d\t %-5d\n",
			ps->data[pos].name,
			ps->data[pos].num,
			ps->data[pos].score);
	}

}

int cmp_stu_by_num(const void* e1, const void* e2)
{
	return ((Student*)e1)->num - ((Student*)e2)->num;
	//比较字符串
	//return strcmp(((Student*)e1)->num, ((Student*)e2)->num);
}

int cmp_stu_by_score(const void* e1, const void* e2)
{
	return ((Student*)e1)->score - ((Student*)e2)->score;
}

//自己实现 任意类型排序的冒泡排序 --- 模仿qsort函数
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void*, const void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) < 0)//因为要逆序 所以用<0 小的往后放 大的放前面
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}

//进行分数从高到低的排序
void SortStuTotal(StuTotal* ps)
{
	//qsort(ps->data, ps->size, sizeof(Student), cmp_stu_by_num);
	bubble_sort(ps->data, ps->size, sizeof(Student), cmp_stu_by_score);

}

//打印全部信息
void ShowStuTotal(StuTotal* ps)
{
	int i = 0;
	printf("%-20s\t %-20s\t %-5s\n", "名字", "学号", "分数");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-20s\t %-20d\t %-5d\n",
			ps->data[i].name,
			ps->data[i].num,
			ps->data[i].score);
	}
	
}

//退出清空内存
void DestoryStuTotal(StuTotal* ps)
{
	free(ps->data);
	ps->data = NULL;
}

//保存文件
void SaveStuTotal(StuTotal* ps)
{
	FILE* pfWrite = fopen("StuTotal.dat", "wb");//以二进制的形式写进文件
	if (pfWrite == NULL)
	{
		//printf("%s\n", strerror(errno)); --- 打印错误码 --- <errno.h>
		perror("write StuTotal.dat");// --- 打印错误码
		return;
	}
	//写数据到文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(Student), 1, pfWrite);
	}

	fclose(pfWrite);
	pfWrite = NULL;
}

//修改学生信息
void ModifyStuTotal(StuTotal* ps)
{
	int num = 0;
	scanf("%d", &num);
	int pos = 0;
	pos = FindByNum(ps, num);
	if (pos == -1)
	{
		printf("Don't findthe corresponding message!");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入学号:>");
		scanf("%d", &(ps->data[pos].num));
		printf("请输入分数:>");
		scanf("%d", &(ps->data[pos].score));
	}
	
}