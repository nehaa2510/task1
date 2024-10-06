#include<stdio.h>
int main()
{
 int a,b,c;
 int hy,s1,s2;
 printf("enter three sides of triangle=");
 scanf("%d%d%d",&a,&b,&c);

if(a>b && b>c)
{
hy=a;
s1=b;
s2=c;
}

else if(b>a && a>c)
{
hy=b;
s1=c;
s2=a;
}

else{
hy=c;
s1=b;
s2=a;
}

if(hy*hy==s1*s1+s2*s2)
{
printf("it is right angled triangle");
}
else
{
printf("it is not right angled triangle");
}





    return 0;
}