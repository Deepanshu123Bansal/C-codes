#include<stdio.h>
int main()
{
  int totaldays,years,months,days;
  printf("enter total days");
  scanf("%d",&totaldays);
  years=totaldays/365;
  months=(totaldays-years*365)/30;
  days=totaldays-years*365-months*30;
  printf("%d-%d-%d",years,months,days);
  return 0;
}
  
