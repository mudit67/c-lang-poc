#include <stdio.h>
int main()
{
    int p, n, count;
    float r, si;
    count = 1;
    while (count <= 3)
    {
        printf("\nEnter Values of p,n and r: ");
        scanf("%d %d %f", &p, &n, &r);
        si = (p * n * r) / 100;
        printf("Simple Interest = Rs. %f\n",si);
        count+=1;
    }
    return 0;
}