#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<ctype.h>

//int main()
//{
//    char ch;
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        if (isalpha(ch))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//    }
//
//    return 0;
//}




//int main()
//{
//    int NO;
//    float C, Math, English;
//    scanf("%d;%f,%f,%f", &NO, &C, &Math, &English);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", NO, C, Math, English);
//    return 0;
//}



//int main()
//{
//    printf("\n%d", printf("Hello world!"));
//    return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    printf("%d", (((int)a) % 10));
//    return 0;
//}



//int main()
//{
//    long age = 0;
//    scanf("%d", &age);
//    printf("%lld\n", (age * 31560000));
//    return 0;
//}



int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    a = a % 100;
    b = b % 100;
    printf("%d", ((a + b) % 100));
    return 0;
}



