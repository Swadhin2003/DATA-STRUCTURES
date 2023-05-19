#include <stdio.h>
struct student
{
    char name[10];
    char address[20];
    int marks_C, marks_IS;
};
int get_total_marks(struct student s)
{
    return s.marks_C + s.marks_IS;
}
int main()
{
    int n;
    printf("Enter the number of students:");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter student name:");
        scanf("%s", s[i].name);
        printf("Enter student address:");
        scanf("%s", s[i].address);
        printf("Enter marks in C language:");
        scanf("%d", &s[i].marks_C);
        printf("Enter marks in Information Systems:");
        scanf("%d", &s[i].marks_IS);
    }
    printf("STUDENT PROFILE:\n");
    for (int i = 0; i < n; i++)
    {
        int total = get_total_marks(s[i]);
        printf("NAME:%s\tADDRESS:%s\tMARKS IN C LANGUAGE:%d\tMARKS IN SYSTEM INFORMATION:%d\tTOTAL MARKS:%d\n", s[i].name, s[i].address, s[i].marks_C, s[i].marks_IS, total);
        total = 0;
    }
    return 0;
}