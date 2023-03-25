#include<stdio.h>
int main()
{
    int unit,puc,totlaamount;
    float totalamount;
    printf("enter units");
    scanf("%d",&unit);
    if(0<=unit<200)
    {
        puc=100+3.5*unit;
    }
    else if(unit<350)
    {
        puc=200+5.5*unit;
    }
    else if(unit<600)
    {
        puc=400+7*unit;
    }
    else 
    {
    puc=500+10*unit;
    }
    totalamount=puc+puc*0.025;
    printf("%f",totalamount);
    return 0;
}
