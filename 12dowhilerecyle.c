#include <stdio.h>

int main()
{
    int a = 0;

    do
    {
        printf("1.a=%d\n", a);
        a++;
    } while (a < 1);

    a = 0;
    while (a < 1)
    {
        printf("2.a=%d\n", a);
        a++;
    }

    for (a = 0; a < 1; a++)
    {
        printf("3.a=%d\n", a);
    }

    for (int i = 0; i <= 9; i++)
    {
        printf("one\n");
        // for (int j = 0; j <= 9; j++)
        // {
        //     // && 并且 ， ！非 , || 或者
        //     if(i == 0 || j==0){
        //         printf("0\t");
        //         continue;
        //     }
        //     printf("two\t");
        // }
        // int j = 0;
        // do
        // {
        //     j++;
        //     if (i == 0 || j == 0)
        //     {
        //         printf("0\t");
        //         continue;
        //     }
        //     printf("two\t");
        // } while (j <= 9);
        int j = 0;
        while (j <= 9)
        {
            j++;
            if (i == 0 || j == 0)
            {
                printf("0\t");
                continue;
            }
            printf("two\t");
        }
        // ctrl + c = copy
        // ctrl + x = trim
        // ctrl + v = paste
        // alt +shift + f = format
        // ctrl + f = find
        // ctrl + h 
        // ctrl + shift + f 
        // ctrl + shift + H
        // ctrl + shift + p =  minglingmianban


        printf("one end\n");
    }
    // 代码块 = 一起执行的代码

    return 0;
}
