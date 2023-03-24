#include<stdio.h>
int main()
{
  int totalyears,years,months,days;
  printf("enter total years");
  scanf("%d",&totalyears);
  years=totalyears/365;
  months=(totalyears-years*365)/30;
  days=totalyears-years*365-months*30;
  printf("%d-%d-%d",years,months,days);
  return 0;
}
  
