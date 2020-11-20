#include<stdio.h>  
 int main()    
{    
int a, b;      
printf("\nPlease, enter the value of your first number: ");
scanf("%d", &a);   
printf("\nPlease, enter the value of your second number: ");
scanf("%d", &b);
printf("\nThere are your variables: a = %d, b = %d", a, b);
a=a+b; 
b=a-b;   
a=a-b;    
printf("\nThere are your variables with swapped values: a = %d b = %d",a,b);    
return 0;  
}   
