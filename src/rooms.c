#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "rooms.h"
#include "vars.h"
#include "func.h"

/* room functions */
void doRoom0() {
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

void doRoom1() {
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
