/*
 * even_or_odd.c
 * Description: C program To check Whether number is even or odd
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
	if(num%2==0)
	{
		printf("the number entered is even");
	}
	else
	{
		printf("the number entered is odd");
	}

}
