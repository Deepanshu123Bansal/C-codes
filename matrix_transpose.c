#include<stdio.h>
int main()
{
  int i,a[20][20],m,n,j,sum=0,temp,temp1;
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
      if(i!=j)
      {
          temp=a[i][j];
          temp1=a[j][i];
          a[i][j]=temp1;
          a[j][i]=temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
  }
  return 0;
}
