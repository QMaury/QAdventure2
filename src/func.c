/* func.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "vars.h"
#include "func.h"

int contRes;

void txtdvd() {
	printf("\n|=========================================|\n\n");
}

void invalid() {
    printf("> ????\n");
}

int getAction() {
	char actionString[80];

	fgets(actionString, sizeof(actionString), stdin);
	return atoi(actionString);;
}
void cont() {
	printf("\n1) Continue\n? ");
	contRes = getAction();
	switch(contRes) {
		case 1:
			break;
	}
}
/* this one's mainly for testing shit */ 
void printroom() {
	printf("%d", &room);
} 

void end() {
    printf("Thank you for playing QAdventure2!\n");
    exit(0);
}
