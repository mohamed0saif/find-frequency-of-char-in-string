/*

 * main.c
 *
 *  Created on: Jan 29, 2023
 *      Author: mohamed
 */
#include "stdio.h"
#include "string.h"
void clear (void);

void main(){

	char string[100];
	char Alpha ;
	int counter=0,i=0;
	printf("Enter a string : ");
	clear();
	gets(string);
	printf("Enter a character to find frequency: ");
	clear();
	scanf("%c",&Alpha);
	while(string[i] != '\0'){
		if(Alpha==string[i]){
			counter++;
		}
		i++;
	}
	printf("Frequency of %c = %i",Alpha,counter);
}


void clear (void){
	fflush(stdin);
	fflush(stdout);
}
