#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
int main()
{
    struct student stu[20],*p;
    p=&stu;
    int n,i;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter name,rollno,marks");
    scanf("%s%d%d",&(p+i)->name,&(p+i)->rollno,&(p+i)->marks);
    }
    for(i=0;i<n;i++)
    {
    printf("%s %d %d\n",(p+i)->name,(p+i)->rollno,(p+i)->marks);
    }
    return 0;
}
