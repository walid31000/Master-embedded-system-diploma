/*
 * sum_digits.c
 *description:c function to take a number and sum all digits
 *  Created on: 13 Jan 2024
 *      Author: walid
 */

#include<stdio.h>
int sum_digit(int num);
int main()
{
	int number,result;
	printf("enter a number \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&number);
	result=sum_digit(number);
	printf("sum of all digit of %d=%d",number,result);

	return 0;

}
int sum_digit(int num)
{
	int digit,sum=0;
	while(num)
	{
		digit=num%10;//extract the right digit
		num/=10;//get rid of the right digit
		sum+=digit;//add the digits
	}
	return sum;

}
