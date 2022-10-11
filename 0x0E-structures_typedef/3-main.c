#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	struct dog my_dog;

	/*
	 * my_dog.name = "Lor";
	 * my_dog.age = 3.5;
	 * my_dog.owner = "Bob";
	 */
	init_dog(&my_dog, "Poppy", 3.5, "Noel");
	printf("My name is %s, i am %f years of age  and my owner is %s", my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}

