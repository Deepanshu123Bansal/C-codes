#include<stdio.h>
int main()
{
  int *p,a=1;
  p=&a;
  printf("%d %d",p,*p);
  return 0;
}
