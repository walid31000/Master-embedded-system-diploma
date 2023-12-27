/*
 * Multiply.c
 *
EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
 *  Created on: 26 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
int main()
{
	float num1,num2;
	printf("enter 2 numbers \n");
	fflush(stdout);
	scanf("%f%f",&num1,&num2);
    printf ("product :%f",num1*num2);
    return 0;
}


