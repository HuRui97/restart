#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//         j = 0;
//        for (n = 10; n <= 10000; n *= 10)
//        {
//            j += (i % n) * (i / n);
//        }
//        if (i == j)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int i, j, sum;
//    for (i = 10000; i <= 99999; i++)
//    {
//        //计算
//        sum = 0;
//        for (j = 10; j <= 10000; j *= 10)
//            sum += (i / j) * (i % j);
//
//        //符合要求?
//        if (sum == i)
//            printf("%d ", i);
//
//    }
//    return 0;
//}
//
//
//
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}




#include<math.h>
//int main()
//{
//    float r = 0;
//    double v = 0;
//    scanf("%f", &r);
//    v = (4.0 / 3) * 3.1415926 * pow(r, 3);
//    printf("%.3f", v);
//    return 0;
//}
//
//
//
//int main()
//{
//    int a, b, c;
//    float l, p, s;
//    scanf("%d %d %d", &a, &b, &c);
//    l = a + b + c;
//    p = l / 2;
//    s = pow(p * (p - a) * (p - b) * (p - c), (0.5));
//    printf("circumference=%.2f area=%.2f", l, s);
//    return 0;
//}


//
//int main()
//{
//    int m, h;
//    float bmi, l;
//    scanf("%d %d", &m, &h);
//    l = (float)h / 100;
//    bmi = m / (pow(l, 2));
//    printf("%.2f", bmi);
//    return 0;
//}



int main()
{
	float a = 333333.1415926;
	printf("%1.0f", a);
	return 0;
}