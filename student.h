#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEFAULT_SZ 3 //默认初始容量
#define MAX_NAME  20
//#define MAX_NUM   20

//学生信息
typedef struct Student
{
	char name[MAX_NAME];
	int num;
	int score;
}Student;

//学生存储类型
typedef struct StuTotal
{
	Student*  data;//存放20个信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前能存放的最大容量
}StuTotal;


enum
{
	EXIT,
	ADD,
	SORT,
	FIND,
	SHOW,
	SAVE,
	MODIFY
};

//声明函数
//初始化存放器的函数
void InitStuTotal(StuTotal* ps);

//增加学生信息
void AddStuTotal(StuTotal* ps);

//根据学号进行查找
void SearchStuTotal(const StuTotal* ps);

//进行分数从高到低的排序
void SortStuTotal(StuTotal* ps);

//打印全部信息
void ShowStuTotal(StuTotal* ps);

//保存文件
void SaveStuTotal(StuTotal* ps);

//退出清空内存
void DestoryStuTotal(StuTotal* ps);

//修改学生信息
void ModifyStuTotal(StuTotal* ps);

void CheckCapacity(StuTotal* ps);

void LoadStuTotal(StuTotal* ps);