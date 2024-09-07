#include <stdio.h>
struct poly
{
int coeff;
int expo;
};
struct poly p1[10],p2[10],p3[10];
int readpoly(struct poly[]);
int addpoly(struct poly[],struct poly[],int,int,struct poly[]);
void displaypoly(struct poly[],int terms);
int main()
{
int t1,t2,t3;

t1=readpoly(p1);

printf("\t first poly:");

displaypoly(p1,t1);


t2=readpoly(p2);

printf("\t second poly:");

displaypoly(p2,t2);

t3=addpoly(p1,p2,t1,t2,p3);

displaypoly(p3,t3);

return 0;
}
int readpoly(struct poly p[10])
{
int t1,i;
printf("\t enter no of terms:");
scanf("%d",&t1);
printf("\t enter the coeff and expo:");
for(i=0;i<t1;i++)
{
printf("\t enter coeff %d:",i+1);
scanf("%d",&p[i].coeff);
printf("\t enter expo %d:",i+1);
scanf("%d",&p[i].expo);
}
return(t1);
}
int addpoly(struct poly p1[10],struct poly p2[10],int t1,int t2,struct poly p3[10])
{
int i=0,j=0,k=0;
while(i<t1 && j<t2)
{
if(p1[i].expo==p2[j].expo)
{
p3[k].coeff=p1[i].coeff+p2[j].coeff;
p3[k].expo=p1[i].expo;
i++;
j++;
k++;
}
else if(p1[i].expo>p2[j].expo)
{
p3[k].coeff=p1[i].coeff;
p3[k].expo=p1[i].expo;
i++;
k++;
}
else
{
p3[k].coeff=p2[j].coeff;
p3[k].expo=p2[j].expo;
j++;
k++;
}
}
while(i<t1)
{
p3[k].coeff=p1[i].coeff;
p3[k].expo=p1[i].expo;
i++;
k++;
}
while(j<t2)
{
p3[k].coeff=p2[j].coeff;
p3[k].expo=p2[j].expo;
j++;
k++;
}
return(k);
}
void displaypoly(struct poly p[10],int term)
{
int k;
for(k=0;k<term-1;k++)
{
printf("%d(x^%d)+",p[k].coeff,p[k].expo);
printf("%d(x^%d)",p[term-1].coeff,p[term-1].expo);
}
}
