/*
 * reverse_array.c
 *description:c function that reverse an input array
 *  Created on: 10 Jan 2024
 *      Author: walid
 */

#include<stdio.h>
void arr_reverse(int arr1[],int arr2[],int size);
int main()
{

	int a[100],b[100];//declare 2 arrays a and b
	int size,i;
	printf("enter your size\n");
	fflush(stdout);
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter element %d  ",i+1);
		fflush(stdout);
		scanf("%d",&a[i]);
	}
	arr_reverse(a,b,size);
	printf("result of an reverse arr :  ");
	for(i=0;i<size;i++)
	{
		printf("%d  ",b[i]);
	}
	return 0;
}
void arr_reverse(int arr1[],int arr2[],int size)
{
	int j=size-1;
	for(int i=0;i<size;i++,j--)
		arr2[j]=arr1[i];

}
