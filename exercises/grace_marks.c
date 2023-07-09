#include <stdio.h>
int main()
{
    printf("Enter Your Class and the subjects you failed in: ");
    fflush(stdout);
    int cls, sub;
    scanf("%d %d", &cls, &sub);
    int Grace;
    switch (cls)
    {
    case 1:
        if (sub > 3)
            Grace = 5 * sub;

        break;
    case 2:
        if (sub > 2)
            Grace = 4 * sub;

        break;
    case 3:
        if (sub > 1)
            Grace = 5;

        break;
    default:
        printf("This class is not identified.\n");
        return 0;
    }
    printf("You got %d as Grace marks.\n", Grace);
    return 0;
}