#include<stdio.h>
int main(){
int i,num;
printf("\nEnter a number:");
scanf("%d",&num);
for(i=2;i<=num/2;i++){
if(num%i==0)
{
printf("%d is composite",num);
return 0;
}
}
printf("%d is prime number ",num);
return 0;
}


