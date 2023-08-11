#include <stdio.h>
void convert_unit(float, float *, float *, float *);
int main()
{
	printf("Enter weight: ");
	fflush(stdout);
	float wt, wt_g, wt_t, wt_p;
	scanf("%f", &wt);
	convert_unit(wt, &wt_g, &wt_t, &wt_p);
	printf("The weightage in kg = %f, in g = %f, in tonnes = %f, in pounds = %f\n", wt, wt_g, wt_t, wt_p);
	fflush(stdout);
	return 0;
}
void convert_unit(float kg, float *g, float *tonne, float *pound)
{
	*g = kg * 1000;
	*tonne = kg / 1000;
	*pound = kg * 2.20462;
}