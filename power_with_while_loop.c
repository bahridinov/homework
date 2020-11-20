#include <stdio.h>

int main()
{
   int a, n, res; 
   res = 1; 

   printf("\nPlease, enter the value of variable a: ");
   scanf("%d", &a);
   printf("\nPlease, enter the value of variable n: ");
   scanf("%d", &n);
  
   while(n != 0)
   {
      res *= a;
      n--;
   }

   printf("\nEnding result of the task = %d\n", res);
   return 0;
}
