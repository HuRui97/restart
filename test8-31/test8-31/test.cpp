#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(str1, str1,len1);
//	//strstr找子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
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





//int findnum(int arr[3][3], int k,int row,int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (y >= 0 && x <= 2)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//	}



int findnum(int arr[3][3], int k, int* px, int *py)
{
	int x = 0;
	int y = *py - 1;
	while (y >= 0 && x <= *px)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}


int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 0;
	int x = 3;
	int y = 3;
	scanf("%d", &k);
	int ret=findnum(arr, k,&x,&y);
	if (ret == 1)
	{
		printf("找得到,下标为%d %d\n",x,y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}



