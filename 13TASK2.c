/*while的嵌套循环*/
#include <stdio.h>
int main()
{
    int i=1;
    while(i<=9)
    {
      int j=1;
      while(j<=i)
      {
       printf("%d*%d=%d\t",i,j,i*j);
       j+=1;
      }
      printf("\n");
      i+=1;
    }
   printf("\n");
   return 0;
}

   