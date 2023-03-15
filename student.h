#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEFAULT_SZ 3 //Ĭ�ϳ�ʼ����
#define MAX_NAME  20
//#define MAX_NUM   20

//ѧ����Ϣ
typedef struct Student
{
	char name[MAX_NAME];
	int num;
	int score;
}Student;

//ѧ���洢����
typedef struct StuTotal
{
	Student*  data;//���20����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰ�ܴ�ŵ��������
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

//��������
//��ʼ��������ĺ���
void InitStuTotal(StuTotal* ps);

//����ѧ����Ϣ
void AddStuTotal(StuTotal* ps);

//����ѧ�Ž��в���
void SearchStuTotal(const StuTotal* ps);

//���з����Ӹߵ��͵�����
void SortStuTotal(StuTotal* ps);

//��ӡȫ����Ϣ
void ShowStuTotal(StuTotal* ps);

//�����ļ�
void SaveStuTotal(StuTotal* ps);

//�˳�����ڴ�
void DestoryStuTotal(StuTotal* ps);

//�޸�ѧ����Ϣ
void ModifyStuTotal(StuTotal* ps);

void CheckCapacity(StuTotal* ps);

void LoadStuTotal(StuTotal* ps);