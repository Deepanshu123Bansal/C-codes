#include<stdio.h>
int main()
{
    int n,rem,sum=0,t;
    printf("enter n");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(t==sum)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
    return 0;
}
