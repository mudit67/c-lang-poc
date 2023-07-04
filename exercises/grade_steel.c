#include <stdio.h>
int main()
{
    int hardness, tensile;
    float carbon;
    printf("Enter the Hardness, Carbon content and Tensile strength of the steel: ");
    fflush(stdout);
    scanf("%d %f %d", &hardness, &carbon, &tensile);
    int con1 = hardness > 50;
    int con2 = carbon > 0.7;
    int con3 = tensile > 5600;
    int grade;
    if (con1 && con2 && con3)
    {
        grade = 10;
    }
    else if (con1 && con2)
    {
        grade = 9;
    }
    else if (con2 && con3)
    {
        grade = 8;
    }
    else if (con1 && con3)
    {
        grade = 7;
    }
    else if (con1 || con2 || con3)
    {
        grade = 6;
    }
    else
    {
        grade = 5;
    }
    printf("The Grade of the steel is %d\n", grade);
    return 0;
}