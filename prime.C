void prime(int a)
{
int i=2,prime=1;
for(;i<=a/2;i++)
{
if(a%i==0)
{
prime=0;
break;
}
}
if(prime)
printf("%d is a prime number",a);
else
printf("%d is not a prime number",a);
}
