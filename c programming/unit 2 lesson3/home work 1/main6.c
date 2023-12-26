/*
 * main6.c
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
	float a,b,temp;
	printf("enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a =%f\n",a);
	printf("After swapping, value of b =%f",b);
}


