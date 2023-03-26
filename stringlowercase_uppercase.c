//method 1
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int b,i;
    printf("enter string");
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        printf("%c\n",a[i]-32);
    }
    return 0;  
}

outpur:-
enter stringabcd
A
B
C
D


//method 2
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int l,i;
    printf("enter string");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
       b[i]=a[i]-32;
    }
    printf("%s",b);
    return 0;  
}

output:-
enter stringabcd
ABCD
