/* func.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "rooms.h"
#include "vars.h"
#include "func.h"
#include "comb.h"

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
