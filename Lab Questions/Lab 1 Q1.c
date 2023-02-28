#include <stdio.h>
void calculate (double ,double);
int main ()
{
	int fail;
	double passgrd, stdnum;
	printf("please enter the student number (max 100): ");
	scanf("%lf", &stdnum);
	printf("please enter the pass grade: ");
	scanf("%lf", &passgrd);
	calculate (stdnum, passgrd);
	return 0;
}

void calculate (double x , double y)
{
	int list[100], i, sum=0, fail=0;
	double avr;
	for (i=0; i<x; i++){
		scanf("%d", &list[i]);
		sum += list[i];
		if (list[i] < y){
			fail++ ;
		}
	}
	printf("Avarage of grades is %lf", sum / x);
	return fail;
}
