/*
 * summation.c
 *
 *  Created on: 27 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the value of n\n");
	fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
}
