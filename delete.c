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
printf("Enter the position where the element is to be deleted:");
scanf("%d",&pos);
printf("Enter the value to be deleted:");
scanf("%d",&val);
i=n;
while(i<=n-1){
a[i]=a[i+1];
i=i+1;
}
n=n-1;
printf("array after deleted:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n");
return 0;
}
