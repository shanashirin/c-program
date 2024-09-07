#include<stdio.h>
int main()
{
int i=0,n;
float avg=0,sum=0;
printf("\nEnter the number:");
scanf("%d",&n);
do
{
sum=sum+i;
i++;
}
while(i<=n);
avg=sum/n;
printf("The average is %f",avg);
return 0;
}

