//Take something return something
#include<stdio.h>
int main()
{
  int n,fac;
  int factorial(int);
  printf("enter n");
  scanf("%d",&n);
  fac=factorial(n);
  printf("%d",fac);
  return 0;
}

int factorial(int n)
{
  int result=1,i;
  for(i=1;i<=n;i++)
  {
    result=result*i;
  }
  return result;
}

//Take something return nothing
#include<stdio.h>
int main()
{
  int n;
  int factorial(int);
  printf("enter n");
  scanf("%d",&n);
  factorial(n);
  return 0;
}

int factorial(int n)
{
  int result=1,i;
  for(i=1;i<=n;i++)
  {
    result=result*i;
  }
  printf("%d",result);
}

//Take nothing return nothing
#include<stdio.h>
int main()
{
  void factorial();
  factorial();
  return 0;
}

void factorial()
{
  int fac=1,i,n;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fac=fac*i;
  }
  printf("%d",fac);
}

//Take nothing return something
#include<stdio.h>
int main()
{
    int fac;
 int factorial();
  fac=factorial();
  printf("%d",fac);
  return 0;
}

int factorial()
{
  int result=1,i,n;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    result=result*i;
  }
  return result;
}
