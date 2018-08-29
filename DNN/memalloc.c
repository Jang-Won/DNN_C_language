#include "memalloc.h"

double **MemAlloc_D_2D(const int height, const int width) // (double��)2���� �迭�� ���� �޸� �Ҵ��ϴ� �Լ�
{
	double **arr; //�Լ� ������ ����� 2���� �迭�� ����� ���� 2�� ������ ����
	int i;
	arr = (double**)malloc(sizeof(double*)*height); //���̸�ŭ�� ũ��� ���� �Ҵ�
	for (i = 0; i<height; i++)
	{
		arr[i] = (double*)malloc(sizeof(double)*width); //���� �ϳ��ϳ����� �ʺ�ŭ�� ũ��� ���� �Ҵ�
	}
	return arr; //������ 2���� �迭 ��ȯ
}
void MemFree_D_2D(double **arr, const int height) // (double��)2���� ���� �޸� �Ҵ��� �����ϴ� �Լ�
{
	int i;
	for (i = 0; i<height; i++)
	{
		free(arr[i]);
	}
	free(arr);
}