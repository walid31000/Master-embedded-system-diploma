/*
 * avearge.c
 *description:c program to find average of maximum n positive numbers entered by the user but if the input is
 *negative  display the avaerage(excluding the average of negative input )and end the program.
 *  Created on: 28 Dec 2023
 *      Author: walid
 */
#include<stdio.h>
void main()
{
	int n,i;
	float avg,num,sum=0;
	printf("enter the value of n\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the value of the number %d  ",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&num);

		if(num<0.0)
		{
			break;
		}
		sum=sum+num;

	}
	avg=sum/(float)(i-1);
	printf("the average of the numbers entered=%f",avg);
}
