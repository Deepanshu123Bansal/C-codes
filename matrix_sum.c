#include<stdio.h>
int main()
{
  int i,a[20][20],m,n,j,sum=0;
  printf("enter m,n");
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
  { 
    for(j=0;j<n;j++)
  { 
    printf("enter array");
    scanf("%d",&a[i][j]);
  }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      sum=sum+a[i][j];
    }
  }
  printf("%d",sum);
  return 0;
}
