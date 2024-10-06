#include<stdio.h>
int main()
{
    int i,j,k,n,p1=0,p2=0,p3=0;
    int a[100];
   printf("enter total number of elements");
   scanf("%d",&n);
   printf("enter elements of array=");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
 for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
 for(k=0;k<n;k++)
 {
    int sum=a[i]+a[j]+a[k];
if(sum==9)
{
    p1=a[i];
    p2=a[j];
    p3=a[k];
    break;
}

 }

   }
   
}
printf("%d %d %d",p1,p2,p3);


    return 0;
}