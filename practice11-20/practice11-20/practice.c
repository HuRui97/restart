#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//    int i, j;
//    int x = 0;
//    int n = 0;
//    int arr[100] = { 0 };
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n - 1; i++)
//        {
//            arr[i] = i + 2;
//        }
//        for (j = 1; j < n - 1; j++)
//        {
//            for (i = j; i < n - 1; i++)
//            {
//                if (arr[i] % (j + 1) == 0)
//                {
//                    arr[i] = 0;
//                }
//            }
//        }
//        for (i = 0; i < n - 1; i++)
//        {
//            if (arr[i] != 0)
//            {
//                printf("%d ", arr[i]);
//            }
//            else
//                x++;
//        }
//        printf("\n%d\n", x);
//    }
//    return 0;
//}



//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    int i, j;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr2[i][j]);
//        }
//    }
//    float x = 0.0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                x++;
//        }
//    }
//    printf("%.2f", (x*100)/(m*n));
//    return 0;
//}





//int main()
//{
//    char arr[] = "admin";
//    char ch1[20];
//    char ch2[20];
//    while (scanf("%s %s", ch1, ch2) != EOF)
//    {
//        int i = strcmp(ch1, ch2);
//        int j = strcmp(ch1, arr);
//        if (i == j && i == 0)
//        {
//            printf("Login Success!\n");
//        }
//        else
//            printf("Login Fail!\n");
//    }
//    return 0;
//}




//int main()
//{
//    int n = 0;
//    int i = 1;
//    for (i = 1; i <= 2019; i++)
//    {
//        if (i % 10 == 9 || (i / 10) % 10 == 9 || (i / 100) % 10 == 9)
//            n++;
//    }
//    printf("%d\n", n);
//    return 0;
//}



int main()
{
    int n = 0;
    int i, j;
    scanf("%d", &n);
    j = n / 2;
    if (n % 2 == 0)
    {
        i = n / 2;
    }
    else
    {
        i = j + 1;
    }
    printf("%d %d", i, j);
    return 0;
}