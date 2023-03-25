#include<stdio.h>
int main()
{
  int n,rem,even=0,odd=0;
  printf("enter n");
  scanf("%d",&n);
  while(n>0)
  {
    rem=n%10;
    if(rem%2==0)
    {
      even=even+rem;
    }
    else
    {
      odd=odd+rem;
    }
    n=n/10;
  }
  printf("even=%d",even);
  printf("\nodd=%d",odd);
    return 0;
  }
