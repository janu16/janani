#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("\n enter the num:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
sum=sum+i;
}
printf("\n sum is",sum);
getch();
}
