/*
 * swap_trick.c
 *EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
 *  Created on: 26 Dec 2023
 *      Author: walid
 */


#include<stdio.h>
int main()
{

	float num1,num2;
	printf("enter value of num1:");
	fflush(stdout);
	scanf("%f",&num1);
	printf("enter value of num2:");
	fflush(stdout);
	scanf("%f",&num2);

	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("After swapping, value of num1 =%f\n",num1);
	printf("After swapping, value of num2 =%f",num2);
    return 0;

}
