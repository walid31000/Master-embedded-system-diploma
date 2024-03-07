/*
 * area.c
 *description:c program to find  area of circle ,passing argument to macro
 *  Created on: 7 Mar 2024
 *      Author: walid
 */
#include<stdio.h>
int main()
{
#define PI      3.14
#define area(r)    (PI*r*r)
	float r;
	printf("enter a radious ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&r);
	printf("Area=%.2f",area(r));
}

