/*
 ============================================================================
 Name        : TryWork.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

      int Age(int x)
{
    	  return x + 5;
}


    	char myname(char name[10])
{
          return name;
}
int main(void)
{
      int age;
      char name;

      printf("Enter your age:");
      scanf("%d", &age);

      printf("Enter your name:");
      scanf("%c\n", &name);



      int YourAge = Age(age);
      char YourName = myname(name);
      printf("%c will be %d years old in 5 years time", ame, YourAge);
}
