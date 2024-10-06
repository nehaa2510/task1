#include <stdio.h>
int main()
{
 int n,i,small,large;
 int a[20];
 printf("enter total number of elements=");
 scanf("%d",&n);
 printf("enter elements of the array");
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}

small=a[0];
large=a[1];
for(i=0;i<n;i++)
{
if(small>a[i])
{
small=a[i];
}
if(large<a[i])

{
    large=a[i];
}
}

printf("largest is %d and smallest is %d",large,small);
    return 0;
}