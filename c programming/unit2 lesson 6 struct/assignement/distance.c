/*
 * distance.c
 *description:c program to add two distance (in inch feet)system using structure
 *  Created on: 7 Mar 2024
 *      Author: walid
 */

#include<stdio.h>
#include <math.h>

typedef struct
{
	float inch;
	float feet;
}distance;
distance D1,D2,sum;
int main()
{
	printf("enter information for 1st distance\n");

	printf("enter feet\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&D1.feet);

	printf("enter inch\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&D1.inch);

	printf("enter information for 2nd distance\n");

	printf("enter feet\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&D2.feet);

	printf("enter inch\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&D2.inch);


	/*1 foot =12 inch*/

	sum.inch=D1.inch+D2.inch;
	sum.feet = D1.feet+D2.feet;
	/*if inch is greater than 12 change it into feet*/
	if( sum.inch > 12)
	{
		sum.inch -=12;
		++sum.feet;
	}

	printf("Sum of distance=%.2f feet %.2f inch ",sum.feet,sum.inch);

}

