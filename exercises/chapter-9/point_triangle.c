#include <stdio.h>
#include <math.h>
void distance(int x1, int x2, int y1, int y2, float *);
void area(int, int, int, int, int, int, float *area);
int inTrig(int Ax, int Ay, int Bx, int By, int Cx, int Cy, int x, int y);
int main()
{
	printf("Enter the co-ordinates of the vertices of the triangle and the co-ordinates of the point to check: ");
	fflush(stdout);
	int Ax, Ay, Bx, By, Cx, Cy, x, y;
	scanf("%d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy, &x, &y);
	if (inTrig(Ax, Ay, Bx, By, Cx, Cy, x, y))
		printf("Yes. The point is inside the triangle.\n");
	else
		printf("No. The point is not inside the triangle.\n");
	return 0;
 }
void distance(int x1, int x2, int y1, int y2, float *side)
{
	*side = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
void area(int ax, int ay, int bx, int by, int cx, int cy, float *area)
{
	float side1, side2, side3;
	distance(ax, bx, ay, by, &side1);
	distance(bx, cx, by, cy, &side2);
	distance(ax, cx, ay, cy, &side3);
	float semi = (side1 + side2 + side3) / 2;
	*area = sqrt(semi * (semi - side1) * (semi - side2) * (semi - side3));
}
int inTrig(int Ax, int Ay, int Bx, int By, int Cx, int Cy, int x, int y)
{
	float mainArea, sum, ar;
	area(Ax, Ay, Bx, By, Cx, Cy, &mainArea);
	area(Ax, Ay, Bx, By, x, y, &ar);
	sum += ar;
	area(Ax, Ay, x, y, Cx, Cy, &ar);
	sum += ar;
	area(x, y, Bx, By, Cx, Cy, &ar);
	sum += ar;
	return sum == mainArea;
}
