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
	//���ļ�
	while (fread(&tmp, sizeof(Student), 1, pfRead))// fread �ķ���ֵС��Ҫ������ʱ ������ȡ���� ���ﷵ��0ʱ �����ȡ�ļ���Ϣ����
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

//��ʼ�� -- ���ٿռ�
void InitStuTotal(StuTotal* ps)
{
	//��̬�ġ�
	ps->data = (Student*)malloc(DEFAULT_SZ * sizeof(Student));//�����3��λ��
	if (ps->data == NULL)
		return;
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//���Ǿ�̬��ʱ���
	//memset(ps->data, 0, sizeof(ps->data));//��ʼ����0
	//ps->size = 0;

	//���ļ����Ѵ�ŵ���Ϣ��ȡ����
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
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddStuTotal(StuTotal* ps)
{
	//��������Ƿ�����
	//1.�����ˣ�������
	//2.��û����ʲô������
	CheckCapacity(ps);
	//��д��Ϣ
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("������ѧ��:>");
	scanf("%d", &(ps->data[ps->size].num));
	printf("���������:>");
	scanf("%d", &(ps->data[ps->size].score));

	ps->size++;
	printf("��ӳɹ�\n");
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

//����ѧ�Ž��в���
void SearchStuTotal(const StuTotal* ps)
{
	int num = 0;
	int pos = 0;
	printf("������ѧ��ѧ��:>");
	scanf("%d", &num);
	//��������ʲôλ��
	//1.�ҵ��� ����ѧ������Ԫ�ص��±�
	//2.û�ҵ� ����-1
	pos = FindByNum(ps,num);
	if (pos == -1)
	{
		printf("Don't findthe corresponding message!");
	}
	else
	{
		printf("%-20s\t %-20s\t %-5s\n", "����", "ѧ��", "����");
		printf("%-20s\t %-20d\t %-5d\n",
			ps->data[pos].name,
			ps->data[pos].num,
			ps->data[pos].score);
	}

}

int cmp_stu_by_num(const void* e1, const void* e2)
{
	return ((Student*)e1)->num - ((Student*)e2)->num;
	//�Ƚ��ַ���
	//return strcmp(((Student*)e1)->num, ((Student*)e2)->num);
}

int cmp_stu_by_score(const void* e1, const void* e2)
{
	return ((Student*)e1)->score - ((Student*)e2)->score;
}

//�Լ�ʵ�� �������������ð������ --- ģ��qsort����
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
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) < 0)//��ΪҪ���� ������<0 С������� ��ķ�ǰ��
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}

//���з����Ӹߵ��͵�����
void SortStuTotal(StuTotal* ps)
{
	//qsort(ps->data, ps->size, sizeof(Student), cmp_stu_by_num);
	bubble_sort(ps->data, ps->size, sizeof(Student), cmp_stu_by_score);

}

//��ӡȫ����Ϣ
void ShowStuTotal(StuTotal* ps)
{
	int i = 0;
	printf("%-20s\t %-20s\t %-5s\n", "����", "ѧ��", "����");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-20s\t %-20d\t %-5d\n",
			ps->data[i].name,
			ps->data[i].num,
			ps->data[i].score);
	}
	
}

//�˳�����ڴ�
void DestoryStuTotal(StuTotal* ps)
{
	free(ps->data);
	ps->data = NULL;
}

//�����ļ�
void SaveStuTotal(StuTotal* ps)
{
	FILE* pfWrite = fopen("StuTotal.dat", "wb");//�Զ����Ƶ���ʽд���ļ�
	if (pfWrite == NULL)
	{
		//printf("%s\n", strerror(errno)); --- ��ӡ������ --- <errno.h>
		perror("write StuTotal.dat");// --- ��ӡ������
		return;
	}
	//д���ݵ��ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(Student), 1, pfWrite);
	}

	fclose(pfWrite);
	pfWrite = NULL;
}

//�޸�ѧ����Ϣ
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
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("������ѧ��:>");
		scanf("%d", &(ps->data[pos].num));
		printf("���������:>");
		scanf("%d", &(ps->data[pos].score));
	}
	
}