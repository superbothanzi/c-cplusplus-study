/*for的嵌套循环*/
#include <stdio.h>

void method1()
{
    int i = 1, j;
    while (i <= 9)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d*%d=%d\t", i, j, i * j);
            j++;
        }
        printf("\n");
        i++;
    }
}
void method2()
{
    int a = 1;
    int b = 1;
    for (a = 1; a < 10; a++)
    {
        // a<=b  一直都是ture
        for (b = 1; b <= 10 - a; b++)
        {
            printf("%d*%d=%d\t", a, b, a * b);
        }
        printf("\n");
    }
}
void method3()
{
    int c = 1;
    do
    {
        int d = 1;
        while (d <= c)
        {
            int e = c * d;
            printf("%d*%d=%d\t", c, d, e);
            if (c == d)
            {
                printf("\n");
            }
            d++;
        }
        c++;
    } while (c <= 9);
}
void method3_1()
{
    int c = 1;
    do
    {
        int d = 1;
        while (d < c)
        {
            printf("      \t");
            d++;
        }
        d = c;
        while (d <= 9)
        {
            printf("%d*%d=%3d\t", c, d, c * d);
            d++;
        }
        printf("\n\n");
        c++;
    } while (c <= 9);
}
// 这个函数只能有一个，称为入口函数
int main()
{
    // method1();
    // method2();
    // method3();
    method3_1();
}
