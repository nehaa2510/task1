#include <stdio.h>
int main()

{
 int n1,n2,i,j;
 int a1[20],a2[20];
 printf("enter number of elements in first array and second array (n1>n2)=");
 scanf("%d%d",&n1,&n2);
 printf("enter elements of first array");
 for(i=0;i<n1;i++)
 {
    scanf("%d",&a1[i]);
 }
 printf("enter elements of second array");
 for(i=0;i<n2;i++)
 {
    scanf("%d",&a2[i]);

 }

 printf("intersection is");
for(i=0;i<n1;i++)
{
    for(int j=0;j<n2;j++)
    {
        if (a1[i]==a2[j])
        printf("%d\t",a2[j]);
    }

}
printf("union is");
int a[30];
int n=0;
for(i=0;i<n1;i++)
{
 a[n++]=a1[i];
}
for(i=0;i<n2;i++)
{ int found=0;

    for(j=0;j<n;j++)
    {
 if(a[j]==a2[i])
 {
   found=1;
     break;
 }
    }
if(found==0)
{
    a[n++]=a2[i];
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}

    return 0;
}