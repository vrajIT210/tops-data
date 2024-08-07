#include <stdio.h>


struct Employee 	//program for employee Id
{
    int empNo;
    char empName[100];
    char address[200];
    int age;
};


void printEmployee(struct Employee emp) 	//structure
{
    printf("Employee Number: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

main() 
{

    struct Employee emp;

    printf("Enter employee number: ");
    scanf("%d", &emp.empNo);
	printf("Enter employee name: ");
    scanf(" %[^\n]", emp.empName); 
    printf("Enter employee address: ");
    scanf(" %[^\n]", emp.address); 
	printf("Enter employee age: ");
    scanf("%d", &emp.age);

    printEmployee(emp);
}

