/*
 * main7.c
 *EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
 *  Created on: 26 Dec 2023
 *      Author: walid
 */


#include<stdio.h>
int main()
{

	float a,b;
	printf("enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("enter value of b:");
	fflush(stdout);
	scanf("%f",&b);

	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a =%f\n",a);
	printf("After swapping, value of b =%f",b);


}
