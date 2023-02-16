#include <stdio.h>

int main()
{
    int a=21;
    int b=10;
    int c;
    if (a==b)
    {
        printf("line1-a等于b\n");
    }
    else
    {
        printf("Line1-a不等于b\n");
    }
    if (a!=b)
    {
        printf("line2-a等于b\n");
    }
    else
    {
        printf("linr2-a不等于b\n");
    }
    if (a>b)
    {
        printf("line3-a大于b\n");
    }
    else
    {
        printf("Line3-a不大于b\n");
    }
    if (a<b)
    {
        printf("line4-a小于b\n");
    }
    else
    {
        printf("Line4-a不小于b\n");
    }
    
    a=5;
    b=20;
    if (a<=b)
   {
      printf("Line4-a小于或等于b\n");
   }
   if (b>=a)
   {
      printf("Line5-b大于或等于a\n");
   }       
}

