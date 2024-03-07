/*
 * complex.c
 *description: c program to add 2 complex number by passing struct to functio
 *  Created on: 7 Mar 2024
 *      Author: walid
 */

#include<stdio.h>
typedef struct
{
	float real;
	float imaginary;
}complex;
complex num1,num2,sum;
complex add(complex x,complex y);
int main()
{
	printf("for first complex number\n");
	printf("enter real and imaginary respectively\n");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&num1.real,&num1.imaginary);

	printf("for second complex number\n");
		printf("enter real and imaginary respectively\n");
		fflush(stdin);fflush(stdout);
		scanf("%f%f",&num2.real,&num2.imaginary);
	sum=add(num1,num2);
	printf("sum=%.1f+(%.1f)i",sum.real,sum.imaginary);
}
complex add(complex x,complex y)
{
	sum.real=x.real+y.real;
	sum.imaginary=x.imaginary+y.imaginary;
	return sum;
}
