#include<stdio.h>
#include<conio.h>
void main()
{
int pow,num,i=1;
long int sum=1;
printf("\nEnter a number: ");
scanf("%d",&num);
printf("\nEnter the power: \n");
scanf("%d",&pow);
while(i<=pow)
{
sum=sum*num;
i++;
}
printf("%d to the power %d is: %ld",num,pow,sum);
}

