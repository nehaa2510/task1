#include<stdio.h>
int main()
{
 int l1,l2,i,num,j,pr;
 printf("enter two numbers between which prime numbers are to be found=");
 scanf("%d%d",&l1,&l2);
 printf("the prime numbers are");
for(num=l1;num<=l2;num++)
{ pr=1;

for(j=2;j<num/2;j++)
{
if(num%j==0)
{
pr=0;
break;
}
}
if(pr==1)
printf("%d\t",num);
}
return 0;
}