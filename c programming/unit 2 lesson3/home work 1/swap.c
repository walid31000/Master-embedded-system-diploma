/*
 * swap.c
 *EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2

 *  Created on: 26 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
int main()
{
	float num1,num2,temp;
	printf("enter value of num1:");
	fflush(stdout);
	scanf("%f",&num1);
	printf("enter value of num2:");
	fflush(stdout);
	scanf("%f",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("After swapping, value of a =%f\n",num1);
	printf("After swapping, value of b =%f",num2);
	return 0;
}


