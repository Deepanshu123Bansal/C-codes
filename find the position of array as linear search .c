#include<stdio.h>
int main()
{
int i,a[20],value,n;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter array");
scanf("%d",&a[i]);
}
printf("\nenter value");
scanf("%d",&value);
for(i=0;i<n;i++)
{
if(a[i]==value)
printf("position=%d",i+1);
}
return 0;
}
