/*
 * student.c
 *description:c program to store information (name,roll,and mark)
 *of student using structure
 *  Created on: 7 Mar 2024
 *      Author: walid
 */

#include <stdio.h>
struct student
{
	char name[30];
	int roll;
	float mark;
};
int main()
{


	struct student S;
	printf("Enter information of students\n");
	printf("enter student name\n");
	fflush(stdin);fflush(stdout);
	scanf("%s",S.name);
	printf("enter student roll\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&S.roll);
	printf("enter student mark\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&S.mark);

	printf("display information\n");
	printf("name:%s \n",S.name);
	printf("roll :%d \n",S.roll);
	printf("mark :%.2f ",S.mark);
	return 0;
}
