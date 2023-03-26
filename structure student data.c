#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
}stu;
int main()
{
    printf("enter name,rollno,marks");
    scanf("%s%d%d",&stu.name,&stu.rollno,&stu.marks);
    printf("%s %d %d",stu.name,stu.rollno,stu.marks);
    return 0;
}
