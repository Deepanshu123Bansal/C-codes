#include<stdio.h>
int main()
{
  int amount;
  float tax;
  printf("enter Amount");
  scanf("%d",&amount);
  if(0<amount<250000)
  {
    printf("NILL");
  }
  else if(amount<500000)
  {
    tax=0.05*amount;
  }
  else if(amount<750000)
  {
    tax=2500+0.1*(amount-500000);
  }
  else if(amount<100000)
  {
    tax=7500+0.15*(amount-750000)
  }
  else 
  {
    tax=15000+0.2*(amount-1000000)
  }
  printf("%f",tax);
  return 0;
}
  
