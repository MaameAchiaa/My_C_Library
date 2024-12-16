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

int main(void)
{
	char grade = 'G';

	switch(grade)
	{

	case 'A':
		printf("You did great! ");
        break;
	case 'B':
		printf("You did well. ");
        break;
	case 'C':
		printf("You passed. ");
        break;
	case 'D':
		printf("You got poor grades. ");
        break;
	case 'F':
		printf("You failed. ");
        break;
	default:
		printf("Invalid grade. ");
        return 0;

	}
	printf("You tried. ");
      return 0;

}
