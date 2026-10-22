#include<stdio.h>
int main() {
	char day[7];
	int i;

	// day[0]= 'S';
	// day[1]= 'M';
	// day[2]= 'T';
	// day[3]= 'W';
	// day[4]= 'T';
	// day[5]= 'F';
	// day[6]= 'S';

	// printf("The day is %c \n",day[0]);
	// printf("The day is %c \n",day[1]);
	// printf("The day is %c \n",day[2]);
	// printf("The day is %c \n",day[3]);
	// printf("The day is %c \n",day[4]);
	// printf("The day is %c \n",day[5]);
	// printf("The day is %c \n",day[6]);


	for(i=0; i<7; i++)
	{
		printf("Enter first letter of %d day \n",i);

		scanf(" %c",&day[i]);
	}

	for(i=0; i<7; i++)
	{
		printf("The symbol of %d day is %c \n",i,day[i]);
	}

	return 0;
}