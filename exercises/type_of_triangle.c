#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter the three side of the triangle: ");
    fflush(stdout);
    scanf("%d %d %d", &s1, &s2, &s3);
    int largest_s = s1 > s2 ? (s1 > s3 ? s1 : s3) : (s2 > s3 ? s2 : s3);
    if (s1 == s2 == s3)
    {
        printf("Equilateral Triangle\n");
    }
    else
    {
        int largest, other_two;
        if (s1 > s2)
        {
            if (s1 > s3)
            {
                largest = s1;
                other_two = s2 * s2 + s3 * s3;
            }
            else
            {
                largest = s3;
                other_two = s1 * s1 + s2 * s2;
            }
        }
        else
        {
            if (s2 > s3)
            {
                largest = s2;
                other_two = s3 * s3 + s1 * s1;
            }
            else
            {
                largest = s3;
                other_two = s1 * s1 + s2 * s2;
            }
        }
        if ((largest * largest) == other_two)
        {
            printf("Right angled Triangle\n");
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3)
        {
            printf("Isoceles Triengle\n");
        }
        else
        {
            printf("Scalene Triangle\n");
        }
    }
    return 0;
}