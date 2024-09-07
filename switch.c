#include<stdio.h>
int main()
{
char x;
printf("Enter a letter:");
scanf("%c",&x);
switch(x){
case 'A':
case 'a':
printf("The given letter is a vowel");
break;

case 'E':
case 'e':
printf("The given letter is a vowel");
break;

case 'I':
case 'i':
printf("The given letter is a vowel");
break;

case 'O':
case 'o':
printf("The given letter is a vowel");
break;

case 'U':
case 'u':
printf("The given letter is a vowel");
break;

default:
printf("The given letter is not a vowel");
break;
}
return 0;
}




