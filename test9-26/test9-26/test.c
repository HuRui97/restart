#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		printf("****\n");
//	}
//	return 0;
//}




//int main()
//{
//	int a, b, c,max;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	if (c > max)
//		max = c;
//
//	printf("%d\n", max);
//	return 0;
//}




//int main()
//{
//	int a, b, c,tmp;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	else
//	{
//		if (a < c)
//		{
//			tmp = a;
//			a = c;
//			c = tmp;
//			if (b < c)
//			{
//				tmp = b;
//				b = c;
//				c = tmp;
//			}
//		}
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//	{
//		if (n % 5 == 0)
//		{
//			printf("能\n");
//		}
//		else
//		{
//			printf("不能\n");
//		}
//	}
//	else
//	{
//		printf("不能\n");
//	}
//	return 0;
//}





//int main()
//{
//	int n = 101;
//	while (n < 200)
//	{
//		int i = 2;
//		while (i < n)
//		{
//			if (n % i != 0)
//			{
//				i++;
//			}
//			else
//			{
//				n += 2;
//			}
//		}
//		printf("%d ", n);
//		n += 2;
//	}
//	return 0;
//}



//int main()
//{
//	int m, n,tmp, r;
//	scanf("%d %d", &m, &n);
//	if (m > n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	else
//	{
//		while (n)
//		{
//			r = m % n;
//			m = n;
//			n = r;
//		}
//		printf("%d\n", m);
//	}
//	return 0;
//}