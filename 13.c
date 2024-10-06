#include <stdio.h>
#include <stdlib.h>
int main()
{
 int m,n,i,j;
 printf("enter number of rows and columns=");
 scanf("%d%d",&m,&n);

 if(m!=n)
 {
 printf("invalid as it not a square matrix");
 exit(0);
 }

int a[m][n];
printf("enter elements of matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}

int sym=1;

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
    if(a[i][j]!=a[j][i]) 
   sym=0;
}
}

 if( sym==1)
{
    printf("matrix is symmetric ");

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d \t",a[i][j]);
}
 printf("\n");
 }
}
 
else
 printf("matrix is not symmetric");


    return 0;
}