#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    float price = 0.0;
//    int m = 0;
//    int d = 0;
//    int flag = 0;
//    if (scanf("%f%d%d%d", &price, &m, &d, &flag) == 4)
//    {
//        if (m == 11 && d == 11)
//        {
//            price *= 0.7;
//            if (flag == 1)
//                price -= 50;
//        }
//        else if (m == 12 && d == 12)
//        {
//            price *= 0.8;
//            if (flag == 1)
//                price -= 50;
//        }
//        if (price < 0.0)
//            price = 0.0;
//        printf("%.2f\n", price);
//    }
//    return 0;
//}


//int main()
//{
//    float n = 0;
//    int m, d, f;
//    int i = 0;
//    scanf("%f %d %d %d", &n, &m, &d, &f);
//    if (m == 11 && d == 11)
//    {
//        n = n * 0.7;
//        i = 1;
//    }
//    else if (m == 12 && d == 12)
//    {
//        n = n * 0.8;
//        i = 1;
//    }
//    if (f == 1 && i == 1)
//    {
//        n -= 50.0;
//    }
//    if (n <= 0)
//    {
//        n = 0.0;
//    }
//    printf("%.2f", n);
//    return 0;
//}



//int main()
//{
//    int a, b;
//    scanf("%x %o", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}


//int main()
//{
//    int n, i;
//    float p = 0.0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d ", &n);
//        p += n;
//    }
//    printf("%.1f", p / 5);
//    return 0;
//}



//int main()
//{
//    struct S
//    {
//        char name[10];
//        int age;
//        char gender[10];
//    };
//    struct S s = { "Jack",18,"man" };
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("%s    %d     %s\n", s.name, s.age, s.gender);
//    return 0;
//}



//int main()
//{
//    printf("I lost my cellphone!");
//    return 0;
//
//}



//int main()
//{
//    int n, h, m;
//    while (scanf("%d %d %d", &n, &h, &m) != EOF)
//    {
//        int i = m / h;
//        if (m % h != 0)
//        {
//            i++;
//        }
//        printf("%d\n", n - i);
//    }
//    return 0;
//}



//int main()
//{
//    float a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//    printf("%.2f %.2f", a + b + c, (a + b + c) / 3.0);
//    return 0;
//}



int main()
{
    int s = 0;
    int m, h;
    scanf("%d", &s);
    h = s / 3600;
    m = (s % 3600) / 60;
    s = s % 60;
    printf("%d %d %d", h, m, s);
    return 0;
}