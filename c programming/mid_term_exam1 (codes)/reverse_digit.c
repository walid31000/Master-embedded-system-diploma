/*
 * reverse_digit.c
 *description:
 *  Created on: 13 Jan 2024
 *      Author: walid
 */


#include<stdio.h>
int reverse_digit(int num);
int main()
{
	int number,result;
	printf("enter a number \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&number);
	result=reverse_digit(number);
	printf("the number reverse=%d",result);

	return 0;

}
int reverse_digit(int num)
{
	int digit,new_num=0;
	while(num)
	{
		digit=num%10;//extract the right digit
		num/=10;//get rid of the right digit
		new_num=(new_num*10)+digit;//collect the digits reversed
	}
	return new_num;

}
