#include<stdio.h>
int main()
{
  int n,sum=0,rem;
  printf("enter n");
  scanf("%d",&n);
  while(n>0)
  {
    srem=n%10;
    sum=sum+rem;
    n=n/10;
  }
  printf("%d",sum);
  return0;
}
