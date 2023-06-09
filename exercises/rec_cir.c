// This program inputs length and breadth of a rectangle and radius of a circle to calculate area and perimenter of both. (circumference of circle)

#include <stdio.h>
int main()
{
    float l, b, r;
    printf("Enter the length and breath of the rectangle: ");
    fflush(stdout);
    scanf("%f %f", &l, &b);
    printf("Enter the radius of the circle: ");
    fflush(stdout);
    scanf("%f", &r);
    float area_rec = l * b;
    float area_cir = (22 * r * r) / 7;
    float peri_rec = 2 * (l * b);
    float circ_cir = (2 * 22 * r) / 7;
    printf("The area of the Rectangle is: %f\nThe Perimeter of the Rectangle: %f\nThe area of the circle is: %f\nThe Circumference of the circle is: %f\n", area_rec, peri_rec, area_cir, circ_cir);
    return 0;
}