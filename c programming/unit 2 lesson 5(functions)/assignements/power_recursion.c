/*
 * power_recursion.c
 *description:c program to calculate power of number using recursion
 *  Created on: 7 Jan 2024
 *      Author: walid
 */

#include<stdio.h>
int power(int number,int p);
int main()
{
	int num,pow;
	printf("enter a number\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	printf("enter a power\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&pow);
	int result=power(num,pow);
	printf("%d power %d =%d",num,pow,result);
}
int power(int number,int exp)
{
	if(exp==0)
	{
		return 1;
	}
	else
	{

		return number*power(number,exp-1);

	}
}
