#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//
//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n + 1; i++)
//        {
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < i + 2; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n + 1; i++)
//        {
//            for (j = 0; j < 2 * (n - i); j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < 2 * (i + 1); j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
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
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int n, m, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        m = n / 2 + n % 2;
//        for (i = 0; i < m; i++)
//        {
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < n - 2 * (i + 1); j++)
//            {
//                printf(" ");
//            }
//            if (n % 2 == 0 || i != m - 1)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n - m; i++)
//        {
//            for (j = 0; j < n - m - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < n % 2 + 2 * i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
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
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}



//
//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//        for (i = 0; i < n - 2; i++)
//        {
//            printf("* ");
//            for (j = 0; j < 2 * (n - 2); j++)
//            {
//                printf(" ");
//            }
//            printf("* \n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}



int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        printf("* \n");
        for (i = 0; i < n - 2; i++)
        {
            printf("*");
            for (j = 0; j < 1 + 2 * i; j++)
            {
                printf(" ");
            }
            printf("* \n");
        }
        for (i = 0; i < n; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}