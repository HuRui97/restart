#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//    int n = 0;
//    int i;
//    float max, min, sum;
//    float arr[100] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f", &arr[i]);
//    }
//    max = arr[0];
//    min = arr[0];
//    sum = arr[0];
//    for (i = 1; i < n; i++)
//    {
//        if (max < arr[i])
//            max = arr[i];
//        if (min > arr[i])
//            min = arr[i];
//        sum += arr[i];
//    }
//    printf("%.2f %.2f %.2f\n", max, min, sum / n);
//}




//int main()
//{
//    char a1[10] = "0";
//    char a2[10] = "0";
//    while (scanf("%s %s", a1, a2) != EOF)
//    {
//        int flag = 0;
//        int i = 0;
//        for (i = 0; (a1[i] != '\0') || (a2[i] != '\0'); i++)
//        {
//            if (a1[i] != a2[i])
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 1)
//            printf("different\n");
//        else
//            printf("same\n");
//    }
//    return 0;
//}



//int main()
//{
//    int M, N;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &M, &N);
//    int i, j;
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    int n = 0;
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            if (arr[i][j] > 0)
//                n += arr[i][j];
//        }
//    }
//    printf("%d\n", n);
//    return 0;
//
//}




//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}



//int main()
//{
//    int arr[20] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    int j = 9;
//    for (i = 10; i < 20; i++)
//    {
//        arr[i] = arr[j];
//        j--;
//    }
//    for (i = 10; i < 20; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}




int main()
{
    int arr[10] = { 0 };
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int p = 0;
    int n = 0;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
            p++;
        if (arr[i] < 0)
            n++;
    }
    printf("positive:%d\nnegative:%d\n", p, n);
    return 0;
}