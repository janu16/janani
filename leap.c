#include<stdio.h>
#include<conio.h>
void main()
{
int n,yr;
printf("\n enter yr");
scanf("%d",&yr);
int n=yr%4;
if(n==0)
{
printf("\n leap year");
}
else{
printf("\n not leap year");
}
getch();
}
