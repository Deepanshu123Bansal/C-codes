#include<stdio.h>
int main()
{
  int a[20],i,n,even=0,odd=0;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("enter n");
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
    if(a[i]%2==0)
    {
      even=even+a[i];
    }
    else
    {
      odd=odd+a[i];
    }
  }
  printf("%d\n%d",even,odd);
  return 0;
}
