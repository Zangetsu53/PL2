#include <stdio.h>
double bodyIndex (double , double);
int main()
{
	double weight, height, a;
	printf("please enter the weight (as kg): ");
	scanf("%lf", &weight);
	printf("Please enter the height (as meter): ");
	scanf("%lf", &height);
	a = bodyIndex (weight, height);
	if (a==1)
		printf("thin");
	if (a==2)
		printf("standard");
	if (a==3)
		printf("overweight");
	if (a==4)
		printf("obese");
	if (a==5)
		printf("Wrong input, please enter carefully!");

	return 0;
}

double bodyIndex (double x, double y)
{
	double result;
	result = x/(y*y);
	if (result > 0 && result <= 18){
		return 1;
	}
	else if (result >= 19 && result<=25){
		return 2;
	}
	else if (result >= 26 && result <30){
		return 3;
	}
	else if (result <= 0){
		return 5;
	}
	else
	return 4;
}
