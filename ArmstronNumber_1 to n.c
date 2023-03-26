#include<stdio.h>
int main()
{
    int n,i,t,rem,sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=i;
        sum=0;
        while(t>0)
        {
           rem=t%10;
           sum=sum+rem*rem*rem;
           t=t/10;
        }
        if(sum==i)
        {
            printf("armstrong number %d\n",i);
        }
        else
        {
            printf("not armstrong %d\n",i);
        }
    }
    return 0;
}
