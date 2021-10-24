/* rooms.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "rooms.h"
#include "vars.h"
#include "func.h"
#include "comb.h"

int cKnight;

void doRoom0() {
	txtdvd();
	printf("> You are at the entrance to the cave.\n> You can see 3 ways forward\n\n");
	printf("1) Go north\n2) Go west\n3) Go east\n? ");
	action = getAction();
	switch(action) {
		case 1:
			room = 1;
			break;
		case 2:
			room = 2;
			break;
		case 3:
			room = 4;
			break;
		default:
			invalid();
			break;
	}
}

void doRoom1() {
	if(!cKnight) {
		txtdvd();
		printf("> A mercenary stands before you.\n> You are unsure of whether or not he is a threat.\n\n");
		printf("1) Talk to the mercenary\n2) Go south\n3) Attack the mercenary\n? ");
		action = getAction();
		switch(action) {
			case 1:
				talkKnight();
				break;
			case 2:
				cKnight = 0;
				room = 2;
				break;
			case 3:
				room = 4;
				break;
			default:
				invalid();
				break;
		}
	}
	else if(cKnight && fKnight == 0) {
		txtdvd();
		printf("> The mercenary stands before you.\n\n");
		printf("1) Talk to the mercenary\n2) Go south\n3) Attack the mercenary\n? ");
		action = getAction();
		switch(action) {
			case 1:
				talkKnight();
				break;
			case 2:
				room = 2;
				break;
			case 3:
				
				break;
			default:
				invalid();
				break;
		}
	}
	else if(cKnight && fKnight == 1) {
		printf("> The mercenary stands before you.\n\n");
		printf("1) Talk to the mercenary\n2) Go south\n3) Attack the mercenary\n? ");
		action = getAction();
		switch(action) {
			case 1:
				talkKnight();
				break;
			case 2:
				room = 2;
				break;
			case 3:
				
				break;
			default:
				invalid();
				break;
		}
	}


}

void doRoom2() {
	txtdvd();
	printf("1) Go north\n2) Go west\n3) Go east\n? ");
	action = getAction();
	switch(action) {
		case 1:
			room = 1;
			break;
		case 2:
			room = 2;
			break;
		case 3:
			room = 4;
			break;
		default:
			invalid();
			break;
	}
}

void doRoom3() {
	txtdvd();
	printf("1) Go north\n2) Go west\n3) Go east\n? ");
	action = getAction();
	switch(action) {
		case 1:
			room = 1;
			break;
		case 2:
			room = 2;
			break;
		case 3:
			room = 4;
			break;
		default:
			invalid();
			break;
	}
}

void doRoom4() {
	txtdvd();
	printf("1) Go north\n2) Go west\n3) Go east\n? ");
	action = getAction();
	switch(action) {
		case 1:
			room = 1;
			break;
		case 2:
			room = 2;
			break;
		case 3:
			room = 4;
			break;
		default:
			invalid();
			break;
	}
}

void doRoom5() {
	txtdvd();
	printf("1) Go north\n2) Go west\n3) Go east\n? ");
	action = getAction();
	switch(action) {
		case 1:
			room = 1;
			break;
		case 2:
			room = 2;
			break;
		case 3:
			room = 4;
			break;
		default:
			invalid();
			break;
	}
}

void doRoom6() {
	txtdvd();
	printf("1) Go north\n2) Go west\n3) Go east\n? ");
	action = getAction();
	switch(action) {
		case 1:
			room = 1;
			break;
		case 2:
			room = 2;
			break;
		case 3:
			room = 4;
			break;
		default:
			invalid();
			break;
	}
}

void doRoom7() {
	txtdvd();
	printf("1) Go north\n2) Go west\n3) Go east\n? ");
	action = getAction();
	switch(action) {
		case 1:
			room = 1;
			break;
		case 2:
			room = 2;
			break;
		case 3:
			room = 4;
			break;
		default:
			invalid();
			break;
	}
}

void doRoom8() {
	txtdvd();
	printf("1) Go north\n2) Go west\n3) Go east\n? ");
	action = getAction();
	switch(action) {
		case 1:
			room = 1;
			break;
		case 2:
			room = 2;
			break;
		case 3:
			room = 4;
			break;
		default:
			invalid();
			break;
	}
}
