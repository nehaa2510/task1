#include <stdio.h>
int main()
{
int i,j,temp;
temp=5;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
    if(j>=temp)
    {
 printf("*");
    }
 else 
 {
 printf(" ");
 }
}
temp--;
printf("\n");
}
   return 0;
}