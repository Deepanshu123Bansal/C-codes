#include<stdio.h>
int main()
{
  int ch,a,b;
  printf("enter ch");
  scanf("%d",&ch);
  printf("enter a,b");
  scanf("%d%d",&a,&b);
  switch(ch)
   {
     case '+':
     {
       printf("%d",a+b);
     }
     case '-':
     {
       printf("%d",a-b);
     }
     case '*'
     {
       printf("%d",a*b);
     }
     case '/':
     {
       printf("%d",a/b);
     }
     default:
     {
       printf("no pesent");
     }
   }
     return 0;
}
