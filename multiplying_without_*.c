#include <stdio.h>

int main()
{
   int a, b, res; 
   res = 0; 

   printf("\nPlease, enter the value of variable a: ");
   scanf("%d", &a);
   printf("\nPlease, enter the value of variable b: ");
   scanf("%d", &b);
  
   while(b != 0)
   {
      res += a;
      b--;
   }

   printf("\nEnding result = %d\n", res);
   return 0;
}
