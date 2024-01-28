/*
 * count_ones.c
 *description:* C_Function_to_Count_the_Max_Number_Of_Ones_Between_Two_Zeros.c
 *  Created on: 27 Jan 2024
 *      Author: walid
 */

#include <stdio.h>

int maxOnesBetweenZeros(int decimal);

int main()
{
	int number;

	printf("enter a number \n");
	fflush(stdout);
	scanf("%d",&number);
	int result=maxOnesBetweenZeros(number);
	printf("max number of ones between 2 zeros :%d",result);


}
int maxOnesBetweenZeros(int decimal)
{
	int maxCount = 0, currentCount = 0;
	int zeroEncountered = 0;int bit_num;
	for(bit_num=31;bit_num>=0;bit_num--)
	{
		if(decimal>>bit_num&1)
		{// If the current bit is 1, increment current count if zero has been encountered
			if(zeroEncountered)
			{
				currentCount++;
				maxCount=maxCount>currentCount?maxCount:currentCount;
			}
		}
		else
		{ // If the current bit is 0, reset current count and set zeroEncountered flag
			currentCount=0;
			zeroEncountered=1;
		}

	}

	return maxCount;
}
