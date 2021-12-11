#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        sum += arr[i];
//    }
//    printf("%d\n", sum);
//    return 0;
//}



//int main()
//{
//    int n, i;
//    int a1[100] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a1[i]);
//    }
//    int max = a1[0];
//    int min = a1[0];
//    for (i = 0; i < n; i++)
//    {
//        if (max < a1[i])
//            max = a1[i];
//        if (min > a1[i])
//            min = a1[i];
//    }
//    printf("%d\n", max - min);
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int i;
//    int flag = 0;
//    int a1[50] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a1[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (a1[i] <= a1[i + 1])
//            ;
//        else
//        {
//            flag = 1;
//            break;
//        }
//    }
//    if (flag == 1)
//    {
//        for (i = 0; i < n - 1; i++)
//        {
//            if (a1[i] >= a1[i + 1])
//                ;
//            else
//            {
//                flag = 2;
//                break;
//            }
//        }
//    }
//    if (flag == 2)
//        printf("unsorted\n");
//    else
//        printf("sorted\n");
//    return 0;
//}




//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int i;
//	int flag1 = 0;
//	int flag2 = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] < arr[i - 1])
//				flag1 = 1;
//			else if (arr[i] > arr[i - 1])
//				flag2 = 1;
//		}
//	}
//	if(flag1+flag2>1)
//		printf("unsorted\n");
//	else
//		printf("sorted\n");
//	return 0;
//}



//int main()
//{
//    int n, x;
//    int i, j = 0;
//    int a1[50] = { 0 };
//    int a2[50] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a1[i]);
//    }
//    scanf("%d", &x);
//    for (i = 0; i < n; i++)
//    {
//        if (a1[i] != x)
//        {
//            a2[j] = a1[i];
//            j++;
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", a2[i]);
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int a1[1000] = { 0 };
//    int a2[1000] = { 0 };
//    int i, j, k = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a1[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int flag = 0;
//        for (j = 0; j < i; j++)
//        {
//            if (a1[i] == a1[j])
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag != 1)
//        {
//            a2[k] = a1[i];
//            k++;
//        }
//    }
//    for (i = 0; i < k; i++)
//    {
//        printf("%d ", a2[i]);
//    }
//    return 0;
//
//}




int main()
{
    int m, n, x;
    int i, j = 0;
    int a1[1000] = { 0 };
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (i = n; i < n + m; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (i = 0; i < (n + m); i++)
    {
        for (j = i + 1; j < (n + m); j++)
        {
            if (a1[i] > a1[j])
            {
                x = a1[i];
                a1[i] = a1[j];
                a1[j] = x;
            }
        }
    }
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", a1[i]);
    }
    return 0;
}