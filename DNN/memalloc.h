#ifndef __MEMALLOC
#define __MEMALLOC
#include <stdlib.h>

double **MemAlloc_D_2D(const int height, const int width); // (double��)2���� �迭�� ���� �޸� �Ҵ��ϴ� �Լ�
void MemFree_D_2D(double **arr, const int height); // (double��)2���� ���� �޸� �Ҵ��� �����ϴ� �Լ�

#endif