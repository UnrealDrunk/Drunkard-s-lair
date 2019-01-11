// Square Equality solution, Numbers a,b and c are randomized by the program

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	const int t = 10;
	srand((unsigned int)time(NULL));
	int a = rand() % t;
	int b = rand() % t;
	int c = rand() % t;
	float x1, x2;
	float* X1 = &x1;
	float* X2 = &x2;


	printf(" it's time to solute the Square Equality ax^2+bx+c=0\n");
	printf("the number of 'a' is %d\n ", a);
	printf("The number of 'b' is %d\n ", b);
	printf("The number of 'c' is %d\n ", c);
	printf("the equation took the following form %dx^2+%dx+%d\n ", a, b, c);
	int D = (int)pow(b,2) - (4 * a * c);
	printf("the discriminant is equals to %d\n", D);
	if (D < 0)
		printf("the equation has no sqare roots");
	else if (D == 0)
		printf("the equation has just one square root x =  %.2f", ((-b+sqrt(D))/(2*a)));
	else
		printf("the equation has two square roots x1 = %.2f and x2 = %.2f", ((-b + sqrt(D)) / (2 * a)), ((-b - sqrt(D)) / (2 * a)));


	getchar(); getchar();
}
