/*
 * main3.c
 *description:find the largest number among 3 numbers
 *  Created on: 26 Dec 2023
 *      Author: walid
 */


#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter 3 numbers \n");
	fflush(stdout);
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);/*using ternary*/
	printf("the max is %d",max);
}
