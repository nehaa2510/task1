#include <stdio.h>
int main()
{
 int marks;
 char grade;
 printf("enter marks of student=");
 scanf("%d",&marks);
 if(marks>=90)
 grade='A';
 else if (marks>=80 && marks<90)
 grade='B';
 else if(marks>=70&& marks<80)
 grade='C';
 else if(marks>=60 && marks<70)
 grade='D';
 else
 grade='F';

 printf("grade of student is %c",grade);

    return 0;
}














