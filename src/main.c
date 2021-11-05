/* main.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "rooms.h"
#include "vars.h"
#include "func.h"
#include "comb.h"

int ded = 0;
int evild = 0;
int room;
int action;

int main() {
	printf("QAdventure2 1.0\n\nIt is recommended you use a pen and paper to draw a map as you play.");
	doRoom0();
	while (!ded && !evild) {
	switch (room) {
		case 0:
			doRoom0();
			break;
		case 1:
			doRoom1();
			break;
		case 2:
			doRoom2();
			break;
		case 3:
			doRoom3();
			break;
		case 4:
			doRoom4();
			break;
		case 5:
			doRoom5();
			break;
		case 6:
			doRoom6();
			break;
		case 7:
			doRoom7();
			break;
		case 8:
			doRoom8();
			break;
        }
    }
	while(ded == 1) {
		printf("> You have failed.\n> Game over.\n");
		exit(0);
	}
	/* else */
}
