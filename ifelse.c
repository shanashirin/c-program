#include<stdio.h>
int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a>0)
{
printf("\nThe given number is positive");
}
else if(a<0)
{
printf("\nThe given number is negative");
}
else
{
printf ("\nThe given number is zero");
}
return 0;
}
