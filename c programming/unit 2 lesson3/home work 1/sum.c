/*

EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################
###########################
 * sum.c
 *
 *  Created on: 26 Dec 2023
 *      Author: walid
 */
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter 2 integers \n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
    printf ("sum :%d",num1+num2);
    return 0;
}

