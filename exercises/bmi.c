#include <stdio.h>
int main()
{
    printf("Enter Weight is kgs and Height in metres: ");
    fflush(stdout);
    float weight, height;
    scanf("%f %f", &weight, &height);
    float bmi = weight / (height * height);
    int bmi_ = bmi * 10;
    bmi = bmi_ / 10;
    if (bmi <= 15)
    {
        printf("Starvation\n");
    }
    else if (bmi >= 15.1 && 17.5 >= bmi)
    {
        printf("Anorexic\n");
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Ideal\n");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Overweight\n");
    }
    else if (bmi >= 30 && bmi <= 39.9)
    {
        printf("Obese\n");
    }
    else
    {
        printf("Morbidly Obese\n");
    }
    fflush(stdout);
    printf("Your BMI is: %f\n", bmi);
}