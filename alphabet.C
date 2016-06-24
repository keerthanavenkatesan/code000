void check(char a)
{
char b[5]={a,e,i,o,u,A,E,I,O,U};int vowel=0;
for(int i=0;i<10;i++)
{
if(b[i]=a)
{
vowel=1;
break;
}
}
if(vowel)
printf("%d is a vowel",a);
else
printf("%d is a consonant",a);
}
