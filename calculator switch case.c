#include<stdio.h>
int main()
{
  int a,b;
  char ch;
  printf("enter ch");
  scanf("%c",&ch);
  printf("enter a,b");
  scanf("%d%d",&a,&b);
  switch(ch)
   {
     case '+':
     {
       printf("%d",a+b);
     }
      break;
     case '-':
     {
       printf("%d",a-b);
     }
      break;
    case '*':
     {
       printf("%d",a*b);
     }
      break;
     case '/':
     {
       printf("%d",a/b);
     }
      break;
     default:
     {
       printf("no pesent");
     }
      break;
   }
     return 0;
}
