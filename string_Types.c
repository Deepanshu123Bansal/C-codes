//concatenation
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20];
    printf("enter a");
    scanf("%s",a);
    printf("\nenter b");
    scanf("%s",b);
    strcat(a,b);
    printf("%s",a);
    return 0;  
}

//copy
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20];
    printf("enter a");
    scanf("%s",a);
    printf("\nenter b");
    scanf("%s",b);
    strcpy(a,b);
    printf("%s",a);
    return 0;  
}

//len
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20];
    int l;
    printf("enter a");
    scanf("%s",a);
    l=strlen(a);
    printf("%d",l);
    return 0;  
}

//compresion
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int c;
    printf("enter a");
    scanf("%s",a);
    printf("\nenter b");
    scanf("%s",b);
    c=strcmp(a,b);
    printf("%d",c);
    return 0;  
}
