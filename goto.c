#include<stdio.h>
int main()
{
  int n;
 l1:
 printf("enter n");
 scanf("%d",&n);
  if(n>0)
  {
      printf("greater");
  }
  else
  {
  goto l1;
  }
  return 0;
}
