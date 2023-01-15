#include<stdio.h>
int main()
{
  int n,i,count=0;
  printf("enter the n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
      count++;
  }
  if(count==2)
  {
    printf("armstrong number");
  }
  else
  {
    printf("not armstrong");
  }
}
