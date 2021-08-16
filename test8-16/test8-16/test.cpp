#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void InIt(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void Reverse(int arr[], int sz)
{
	int i = 0;
	int j = sz - 1;
	int tmp = 0;
	while (i < j)
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		i++;
		j--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//InIt(arr, sz);
	Print(arr, sz);
	Reverse(arr, sz);
	Print(arr, sz);
	return 0;
}


int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	return 0;
}


int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
	/*	*p = 0;
		p++;*/
		*(p + i) = 0;
	}
		for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}

int i;
int main()
{
	i--;
	if (i > sizeof(i))//sizeof计算所占内存大小》=0，为无符号数，与-1比较时先将-1转化为无符号数
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}


int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("%d,%d,%d", a, b, c);
	return 0;
}