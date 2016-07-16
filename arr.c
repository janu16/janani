#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,lar,less,a[10];
printf("\n enter the no of array elements");
scanf("\n%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
lar=a[0];
less=a[o];
for(i=0;i<=n;i++)
{
if(a[i]>lar)
{
lar=a[i];
}
}
for(i=0;i<=n;i++)
{
if(a[i]<less)
{
less=a[i];
}}
printf("\n highest num %d and smallest num %d",lar,less);
getch();
}
