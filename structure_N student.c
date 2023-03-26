#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
}stu[20];
int main()
{
    int n,i;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter name,rollno,marks");
    scanf("%s%d%d",&stu[i].name,&stu[i].rollno,&stu[i].marks);
    }
    for(i=0;i<n;i++)
    {
    printf("%s %d %d\n",stu[i].name,stu[i].rollno,stu[i].marks);
    }
    return 0;
}
