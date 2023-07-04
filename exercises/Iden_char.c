#include <stdio.h>
int main()
{
    printf("Enter a character: ");
    fflush(stdout);
    char ch;
    scanf("%c", &ch);
    int ZERO_ASCII = 48;
    int NINE_ASCII = 57;
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Capital Letter\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Small Letter\n");
    }
    else if (ch >= ZERO_ASCII && ch <= NINE_ASCII)
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
    return 0;
}