#include <stdio.h>
int main()
{
    printf("Enter Three Numbers: ");
    fflush(stdout);
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int largest = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    printf("The Largest number is: %d\n", largest);
    return 0;
}