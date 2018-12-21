#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,s;
printf("enter the value of s");
scanf("%d",&s);
printf("enter the value of n");
scanf("%d",&n);
for(i=s;i<=n;i=i+2);
{
printf("\n%d",i);
getch();
}
