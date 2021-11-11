#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            j = i;
//            while (j)
//            {
//                printf(" ");
//                j--;
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}




int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n + 1; i++)
        {
            j = n - i;
            while (j)
            {
                printf(" ");
                j--;
            }
            for (j = 0; j < i + 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            j = i + 1;
            while (j)
            {
                printf(" ");
                j--;
            }
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}



