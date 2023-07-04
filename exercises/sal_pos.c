#include <stdio.h>
int main()
{
    printf("Enter Your Salary: ");
    fflush(stdout);
    int salary;
    scanf("%d", &salary);
    (salary >= 25000 && salary <= 40000) ? printf("Manager\n") : (salary >= 15000 && salary <= 25000) ? printf("Accountant\n")
                                                                                                      : printf("Clerk\n");

    return 0;
}