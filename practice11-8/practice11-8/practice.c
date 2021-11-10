#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//    int t = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)
//            printf("1\n");
//        else if (t < 0)
//            printf("0\n");
//        else
//            printf("0.5\n");
//    }
//    return 0;
//}


int main()
{
    int a, b, c, n;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if ((a + b) > c && (a + c) > b && (b + c) > a)
        {
            if (a == b && b == c)
                printf("Equilateral triangle!\n");
            else if (a == b || a == c || c == b)
                printf("Isosceles triangle!\n");
            else
                printf("Ordinary triangle!\n");
        }
        else
            printf("Not a triangle!\n");
    }
    return 0;
}