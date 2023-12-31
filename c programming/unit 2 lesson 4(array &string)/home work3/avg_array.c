/*
 * avg_array.c
 *
 *  Created on: 29 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
int main()
{
	int num,i,sum=0;
	float average;
	printf("enter the number of data\n");
	fflush(stdout);
	scanf("%d",&num);
	float arr[num];
	for(i=0;i<num;i++)
	{
		printf("%d .enter number  ",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%f",&arr[i]);
		sum=sum+arr[i];// Calculate the sum as we read the numbers
	}
	average=sum/(float)num;
	printf("average =%.2f",average);
}
