#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int get_diff_bit(int m, int n)
{
	int count = 0;
	int tmp = m ^ n;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = get_diff_bit(m,n);
	printf("%d\n", count);
	return 0;
}


void print(int m)
{
	int i = 0;
	printf("奇数位\n");
	for (i = 30; i >=0; i-=2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n偶数位\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	return 0;

}

void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", *(arr + i));
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}


int Fun(int n)
{
	if (n == 5)
		return 2;
	else
		return 2* Fun(n + 1);
}


void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d  ", j, i, j * i);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}



int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

void reverse_string(char* arr)
{
	int left = 0;
	int right = my_strlen(arr) - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void reverse_string(char* arr)
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if(my_strlen(arr+1)>=2)
	{
		reverse_string(arr + 1);
	}
	arr[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdefg";

	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}


int DigitSum(int n)
{
	int a = n % 10;
	if(n!=0)
	return a + DigitSum(n / 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);
	return 0;
}


double  Pow(int n, int k)
{
	if (k < 0)
		return(1 / (Pow(n, -k)));
	else if (k == 0)
		return 1;
	else
	return n * Pow(n, k-1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d,%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}