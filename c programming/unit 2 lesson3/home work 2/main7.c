/*
 * main7.c
 *description:find factorial of a number
 *  Created on: 27 Dec 2023
 *      Author: walid
 */
#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter a number\n");
	fflush(stdout);
	scanf("%d",&n);
	if(n<0)
	{
		printf("error input\n");
	}
	else
	{
		i=n;
		while(i!=0)
		{
			fact=fact*i;
			i--;
		}
		printf("factorial=%d",fact);
	}
}
