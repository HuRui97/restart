#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int i = 0;
//    char arr[20] = { 0 };
//    scanf("%s", arr);
//    int s = strlen(arr);
//    for (i = 0; i < s; i++)
//    {
//        if (arr[i] == 'A')
//        {
//            a++;
//        }
//        else if (arr[i] == 'B')
//        {
//            b++;
//        }
//        else
//            break;
//    }
//    if (a > b)
//    {
//        printf("A");
//    }
//    else if (a < b)
//    {
//        printf("B");
//    }
//    else
//    {
//        printf("E");
//    }
//    return 0;
//}





int main()
{
    int n = 0; int i = 0; int c = 0; int j = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}