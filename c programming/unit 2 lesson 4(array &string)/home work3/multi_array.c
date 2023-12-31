/*
 * multi_array.c
 *description:c program to find sum of 2 matrix of order 2*2 using multi dimentional arrays where elemnets of matrix are entered by user
 *  Created on: 29 Dec 2023
 *      Author: walid
 */


#include<stdio.h>
int main()
{
	float max1[2][2];
	float max2[2][2];
	float sum[2][2];
	int i,j;
	printf("enter elements of matrix1\n");

	for(i=0;i<2;i++)
	{
		for( j=0;j<2;j++)
		{
			printf("enter max1  %d%d  ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&max1[i][j]);
		}
	}

	printf("enter elements of matrix2\n");
	fflush(stdout);fflush(stdin);
	for(i=0;i<2;i++)
	{
		for( j=0;j<2;j++)
		{
			printf("enter max2  %d%d  ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&max2[i][j]);
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.2f \t ",sum[i][j]=max1[i][j]+max2[i][j]);
		}
		printf("\n");
	}
}
