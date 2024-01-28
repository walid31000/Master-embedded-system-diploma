/*
 * squar_root.c
 *description:a program to calculate the square root of a number
 *  Created on: 14 Jan 2024
 *      Author: walid
 */

#include<stdio.h>
float squar_root(float num);
int main()
{
	float result,number;

	printf("enter a number \n");
	fflush(stdout);fflush(stdin);
	scanf("%f",&number);
	if(number<0)
	{
		printf("wrong input");
	}
	else
	{
		result=squar_root(number);
		printf("the number squa_root=%.2f",result);
	}
	return 0;

}
float squar_root(float num)
{
	float i1=num/2,sqr=0,i2=0,error=0.0001;

	do{
		i2=0.5*(i1+(num/i1));

		sqr=i2-i1;
		i1=i2;
	}while(sqr>error);

    return i1;

}

