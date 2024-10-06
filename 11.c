#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int palin,i,j;
 printf("enter a string \t");
scanf("%s",s);
 int n;
 n=strlen(s);
palin=1;
 for(i=0,j=n-1;i<n/2;i++,j--)
 {
  if(s[i]!=s[j])
  {
  palin=0;
  break;
  }

 }
 if (palin==1)
 {
 printf("it is a palindrome");
 }
 else
 {
printf("it is not a palindrome");
 }
  return 0;
}
