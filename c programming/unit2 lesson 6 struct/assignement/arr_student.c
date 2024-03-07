/*
 * arr_student.c
 *description:c program to store information of student using array of structure
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


	struct student S[10];
	printf("Enter information of students\n");
	for(int i=0;i<10;i++)
	{
		printf("enter student roll number\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&S[i].roll);
		printf("enter student name\n");
		fflush(stdin);fflush(stdout);
		scanf("%s",S[i].name);
		printf("enter student mark\n");
		fflush(stdin);fflush(stdout);
		scanf("%f",&S[i].mark);
	}

    printf("display information of student\n");
    for(int i=0;i<10;i++)
    {
	printf("name:%s \n",S[i].name);
	printf("roll :%d \n",S[i].roll);
	printf("mark :%.2f\n ",S[i].mark);
    }
	return 0;
}


