#include<stdio.h>
struct employee
{
    char name[10];
    char gender[5];
    char designation[10];
    char department[10];
    int basic;
}emp[100];
void result(struct employee * emp,int a);
int main()
{
    int num;
    printf("No. of employees:");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter name of employee %d:",i+1);
        scanf("%s",&emp[i].name);
        printf("Enter gender of employee %d:",i+1);
        scanf("%s",&emp[i].gender);
        printf("Enter designation of employee %d:",i+1);
        scanf("%s",&emp[i].designation);
        printf("Enter department of employee %d:",i+1);
        scanf("%s",&emp[i].department);
        printf("Enter basic salary of employee %d:",i+1);
        scanf("%d",&emp[i].basic);
    }
    result(emp,num);   
    return 0;
}
void result(struct employee* emp,int a)
{
    float da,hr,gross;
    for (int i = 0; i < a; i++)
    {
        da=0.75*emp[i].basic;
        hr=0.25*emp[i].basic;
        gross=emp[i].basic+da+hr;
        printf("Name:%s | Gender:%s | Designation:%s | Department:%s | Basic Salary:%d | Gross Salary:%f\n",emp[i].name,emp[i].gender,emp[i].designation,emp[i].department,emp[i].basic,gross);
    }
}
