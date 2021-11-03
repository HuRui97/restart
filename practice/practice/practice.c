#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//
//
//{
//    char ch = 0;
//    while ((ch=getchar()) != EOF)
//        //getchar只能读取一个字符，不适用
//    {
//        if (ch >= 140)
//        {
//            printf("Genius\n");
//        }
//        else
//        {
//            printf("no");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int c = 0;
//    while (scanf("%d", &c) != EOF)
//    {
//        if (90 <= c && c <= 100)
//        {
//            printf("Perfect\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int c = 0;
//    while (scanf("%d", &c) != EOF)
//    {
//        if (c >= 60)
//        {
//            printf("Pass\n");
//        }
//        else
//        {
//            printf("Fail\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n % 2 == 0)
//        {
//            printf("Even\n");
//        }
//        else
//        {
//            printf("Odd\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a > b)
//        ;
//    else
//        a = b;
//    if (a > c)
//        ;
//    else
//        a = c;
//    printf("%d\n", a);
//    return 0;
//}



//int main()
//{
//    char ch = 0;
//    char arr[10] = { 'A','E','I','O','U','a','e','i','o','u' };
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == arr[i])
//            {
//                j = 1;
//            }
//        }
//        if (j == 0)
//        {
//            printf("Consonant\n");
//        }
//        else if (j == 1)
//        {
//            printf("Vowel\n");
//        }
//    }
//    return 0;
//}
//
//
//
//int main()
//{
//    char ch = 0;
//    char arr[10] = { 'A','E','I','O','U','a','e','i','o','u' };
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == arr[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}




//int main()
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//    }
//    return 0;
//}


//int main()
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        if (ch < 'a')
//        {
//            printf("%c\n", ch + 32);
//        }
//        else if (ch > 'Z')
//        {
//            printf("%c\n", ch - 32);
//        }
//    }
//    return 0;
//}