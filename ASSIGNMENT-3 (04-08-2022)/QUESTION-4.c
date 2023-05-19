#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    int marks1;
    int marks2;
    int marks3;
}stud;
int main()
{
        printf("Enter the name:");
        scanf("%s",&stud.name);
        printf("Enter roll number:");
        scanf("%d",&stud.roll);
        printf("Enter marks in 3 subjects:");
        scanf("%d %d %d",&stud.marks1,&stud.marks2,&stud.marks3);
        printf("\nSTUDENT PROFILE\n");
        printf("Name:%s\n",stud.name);
        printf("Roll:%d\n",stud.roll);
        printf("Marks:%d %d %d\n",stud.marks1,stud.marks2,stud.marks3);    
    return 0;
}