/*
 ============================================================================
 Name        : Practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Sum(int x, int y)
{
         return x + y;
}
int ComputeProduct(int a, int b)
{
         return a * b;
}
int ComputeDivision(int c, int d)
{
        return c / d;
}
int main(void)
{
	     int myresult = Sum(10, 20);
	     printf("The result is: %d\n", myresult);

         int num1, num2;

	     printf("Enter the first number: ");
	     scanf("%d", &num1);

	     printf("Enter the second number:");
	     scanf("%d", &num2);

	printf("The result is %d\n", ComputeProduct(num1, num2));

	     float num3;
		 float num4;
		 printf("Enter the third number: \n");
		 scanf("%lf", &num3);

		 printf("Enter the fourth number: \n");
		 scanf("%lf", &num3);

		 float Division = ComputeDivision(num3, num4);
	     printf("The result for division is %lf", ComputeDivision(num3, num4));
}
