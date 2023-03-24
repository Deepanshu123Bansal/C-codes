#include<stdio.h>
int main()
{
  int a,b,c,sum;
  float ave;
  printf("Enter a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  sum=a+b+c;
  ave=sum/3;
  printf("%f",ave);
  return 0;
}
