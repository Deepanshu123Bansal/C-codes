#include<stdio.h>
int main()
{
  int a[20],n,*p,i;
  p=&a;
  printf("enter n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("enter array");
      scanf("%d",(p+i));
  }
  for(i=0;i<n;i++)
  {
      printf("%d\n",*(p+i));
  }
  return 0;
}
