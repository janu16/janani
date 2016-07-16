#inclued<stdio.h>
void main()
{
int n1,n2,p1,p2,sum;
printf("\n enter 2 num");
scanf("\n%d,%d",&n1,&n2);
p1=&n1;
p2=&n2;
sum=*p1+*p2;
printf( "sum=%d",sum);
getch();
}
