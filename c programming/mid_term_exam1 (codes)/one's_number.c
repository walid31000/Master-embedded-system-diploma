/*
 * one's_number.c
 *description:c function to count number of ones in binary number
 *  Created on: 24 Jan 2024
 *      Author: walid
 */


#include<stdio.h>
int count_ones(int num);
int main()
{
	int number,result;
	printf("enter a number \n");
	fflush(stdout);
	scanf("%d",&number);
	result=count_ones(number);
	printf("number of ones in %d:%d",number,result);


}
int count_ones(int num)
{
 int i,ones=0;
 for(i=0;i<=31;i++)
 {
	 if(((num>>i)&1)==1)
	 {
		 ones++;
	 }
 }
 return ones;


}
