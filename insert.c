#include<stdio.h>
int main()
{
int n,pos,val,i;
int a[100];
printf("\nEnter the number of elements in the array:");
scanf("%d",&n);
printf("\nEnter the elements in the array:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the position where the element is to be inserted:");
scanf("%d",&pos);
printf("Enter the value to be inserted:");
scanf("%d",&val);
i=n;
while(i>=pos){
a[i+1]=a[i];
i=i-1;
}
n=n+1;
a[pos]=val;
printf("array after insertion:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n");
return 0;
}
