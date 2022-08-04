//define a structure employee with members variables empid,name,salary 
#include<stdio.h>
struct Employee input();
int main()
{
       struct Employee;
}
 struct Employee
    {
        int empid;
        char name[30];
        float salary;
    };

struct Employee input()
{
    struct Employee emp;
    printf("Enter id, Name and salaary.");
    scanf("%d",&emp.empid);
    fflush(stdin);
    gets(emp.name);
    scanf("%f",&emp.salary);
    return emp;
}
