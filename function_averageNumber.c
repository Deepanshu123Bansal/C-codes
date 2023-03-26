//Take something return something
#include<stdio.h>
int main()
{
  int a,b,c,ave;
  int average(int ,int ,int);
  ave=average(a,b,c);
  printf("%d",ave);
  return 0;
}

int average (int a,int b,int c)
{
  int result;
  result=(a+b+c)/3;
  return result;
}


//Take something return nothing
#include<stdio.h>
int main()
{
  int a,c,b,ave;
  int average(int ,int ,int);
  printf("enter a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  average(a,b,c);
  return 0;
}

int average(int a,int b,int c)
{
  int result=(a+b+c)/3;
  printf("%d",result);
}

//Take nothing return nothing
#include<stdio.h>
int main()
{
  void average();
  average();
  return 0;
}

void average()
{
  int a,b,c,ave;
  printf("enter a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  ave=(a+b+c)/3;
  printf("%d",ave);
}

//Take nothing return something
#include<stdio.h>
int main()
{
  int avg;
  int average();
  avg=average();
  return 0;
}

int average()
{
  int a,b,c,result;
  printf("enter a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  result=(a+b+c)/3;
  return result;
}
