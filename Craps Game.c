#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int roll ();
int main()
{
	int d1, d2, sum=0, point, ct=1;
	srand ( time(NULL));
	printf("%d. Roll:\n", ct);
	ct++;
	d1= roll();
	d2= roll();
	point= d1+d2;
	printf("D1 = %d , D2 = %d \n", d1,d2);
	while (1){
		if (sum==0){
			printf("Point = %d\n", point);
			if(d1+d2==7 || d1+d2==11){
				printf("The player win!");
				break;
			}
			if(d1+d2==2 || d1+d2==3 || d1+d2==12){
				printf("The player lose!");
				break;
			}
		}
		sleep(3);
		system("CLS");
		printf("First point: %d\n", point);
		printf("%d. Roll: \n", ct);
		ct++;
		d1= roll();
		d2= roll();
		printf("D1 = %d , D2 = %d \n", d1,d2);
		sum=d1+d2;
		printf("Point = %d\n", sum);
		if(sum==point){
			printf("You rolled the same point again and win!");
			break;
		}
		if(sum==7){
			printf("You rolled 7 and lose :(");
			break;
		}
	}
	return 0;
}

int roll ()
{
	int a;

	a= 1 + (rand()%6);
	return a;
}
