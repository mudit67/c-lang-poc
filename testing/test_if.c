#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Enter your Age: ");
    fflush(stdout);
    int age;
    int auth;
    scanf("%d", &age);
    if (age < 18)
    {
        printf("Minor\n");
        auth = 0;
    }
    else
    {
        printf("Adult\n");
        auth = 1;
    }
    // printf("%d\n", &auth);
    if (auth)
    {
        printf("Allowed\n");
    }
    else
    {
        printf("Not allowed\n");
    }
    return 0;
}