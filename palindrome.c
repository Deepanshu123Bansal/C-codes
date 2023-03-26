#include<stdio.h>
int main()
{
  int n,rem,reverse=0,t;
  printf("enter n");
  scanf("%d",&n);
  t=n;
  while(n>0)
  {
    rem=n%10;
    reverse=reverse*10+rem;
    n=n/10;
  }
  
  if(reverse==t)
  {
    printf("palindrome number");
  }
  else
  {
    printf("not palindrome");
  }
  return 0;
}
