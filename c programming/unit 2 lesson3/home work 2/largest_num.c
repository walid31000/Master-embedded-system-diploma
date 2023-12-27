/*
 * largest_num.c
 *description:find the largest number among 3 numbers
 *  Created on: 26 Dec 2023
 *      Author: walid
 */


#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("enter 3 numbers \n");
	fflush(stdout);
	scanf("%d%d%d",&num1,&num2,&num3);
	max=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);/*using ternary*/
	printf("the max is %d",max);
}
