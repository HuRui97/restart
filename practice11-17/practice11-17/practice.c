#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//    float a, b, c, d, e, n;
//    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//    n = a + b + c + d + e;
//    printf("%.2f", n / 5.0);
//    return 0;
//}




//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//
//    }
//    return 0;
//}




//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("%d ", j + 1);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int i, n, m;
//    int arr[7] = { 0 };
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    n = arr[0];
//    m = arr[0];
//    for (i = 1; i < 7; i++)
//    {
//        if (n > arr[i])
//        {
//            n = arr[i];
//        }
//        if (m < arr[i])
//        {
//            m = arr[i];
//        }
//    }
//    float add = 0.0;
//    for (i = 0; i < 7; i++)
//    {
//        add += arr[i];
//    }
//    add = add - m - n;
//    printf("%.2f\n", add / 5.0);
//    return 0;
//}



int main()
{
    int i, c, j;
    int n = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &c);
    i = 0;
    while (arr[i] < c && i < n)
    {
        i++;
    }
    for (j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("%d ", c);
    for (j = i; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}