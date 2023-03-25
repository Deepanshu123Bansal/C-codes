#include<stdio.h>
int main()
{
  int a,b,c,marks,per;
  printf("enter a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  marks=a+b+c;
  per=marks/3;
  if(per>=75)
  {
    printf("A");
  }
  else if(per>=60)
  {
    printf("B")
    }
  else if(per>=48)
  {
    printf("c")
    }
  else
  {
    printf("F")
    }
  return 0;
}
