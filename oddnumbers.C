#include<stdio.h>
void main()
{
int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
if(a==b)
printf("no numbers between")
else
{
for(int i=a+1;i<b;i++)
{
if(i%2!=0)
printf("%d\t",i);
}
}
}
