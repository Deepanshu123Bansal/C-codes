#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("prime number %d\n",i);
        }
        else
        {
            printf("not prime number %d\n",i);
        }
    }
    return 0;
}
