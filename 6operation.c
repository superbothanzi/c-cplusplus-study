#include <stdio.h>
int main()
{
    int a=21;
    int b=10;
    int c;

    c=a+b;
    printf("line1-c=%d\n",c);
    c=a-b;
    printf("line2-c=%d\n",c);
    c=a*b;
    printf("line3-c=%d\n",c);
    c= a / b;
    printf("Line4-c=%d\n",c);
    c= a % b;
    printf("Line5-c=%d\n",c);
    c=a++;  
    printf("Line6-c=%d\n",c);
    c=a--;  
    printf("Line7-c=%d\n",c);
}



