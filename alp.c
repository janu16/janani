#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("\n enter the char");
scanf("%c",&ch);
if(isalpha(ch))
{
printf("\n is alphabet");
}
else{
printf("\n noy alphabet");
}
getch();
}
