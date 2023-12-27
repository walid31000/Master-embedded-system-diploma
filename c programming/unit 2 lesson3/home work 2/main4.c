/*
 * main4.c
 *description:program to find whether a number is positive or negative or zero
 *  Created on: 26 Dec 2023
 *      Author: walid
 */


#include<stdio.h>
int main()
{
	int num;
	printf("enter a number \n");
	fflush(stdout);
	scanf("%d",&num);
	if(num>0)
	{
		printf("the number entered is positive \n");
	}
	else if(num<0)
	{
		printf("the number entered is negative \n");
	}
	else
	{
		printf("you entered zero");


	}
}
