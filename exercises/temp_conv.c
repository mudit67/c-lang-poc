// This programs input a temperture quantity in Fahrenheit and converts into Centigrade unit

#include <stdio.h>
int main()
{
    printf("Enter the temperature in Fahrenheit: ");
    fflush(stdout);
    float temp_f, temp_c;
    scanf("%f", &temp_f);
    temp_c = (temp_f - 32) / 9 * 5;
    printf("The temperture in Celcius is: %f\n", temp_c);
    return 0;
}