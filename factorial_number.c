#include<stdio.h>
int main()
{
  int factorial=1,i,n;
  printf("enter n");
  scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   factorial=factorial*i;
 }
  printf("%d",factorial);
  return 0;
}
