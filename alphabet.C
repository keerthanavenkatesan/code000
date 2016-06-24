void check(char a)
{
char b[5]={a,e,i,o,u};int vowel=0;
for(i=0;i<5;i++)
{
if(b[i]==a)
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
