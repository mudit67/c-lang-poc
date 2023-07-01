#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter the ages of Ram, Shyam and ajay: ");
    fflush(stdout);
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if (ram < shyam)
    {
        if (ram < ajay)
        {
            printf("Ram is the youngest\n");
            return 0;
        }
        printf("Ajay is the youngest\n");
        return 0;
    }
    if (shyam < ajay)
    {
        printf("Shyam is the youngest\n");
        return 0;
    }
    printf("Ajay is the youngest\n");
}