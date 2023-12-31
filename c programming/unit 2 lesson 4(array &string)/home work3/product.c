/*
 * product.c
 *description:write c program to find the product of 4 integers entered by a user if user enters 0 skip it
 *  Created on: 29 Dec 2023
 *      Author: walid
 */


#include<stdio.h>
int main()
{
	int num,i=0,product=1;
	while(i<4)
	{
		printf("enter a number %d\n",i+1);

		fflush(stdout);fflush(stdin);
		scanf("%d",&num);
		i++;
		if(num==0)
		{
			continue;
		}
		product=product*num;

	}
	printf("product =%d",product);
	return 0;
}
