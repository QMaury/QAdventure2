/* rooms.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include "rooms.h"
#include "vars.h"
#include "func.h"
#include "comb.h"
#include "map.h"

int cKnight = 0;
int key = 0; 
int gold = 0;

/* was gonna rewrite some stuff to be faster and to be easier to add on to, but honest to god: it's probably easier to just write a new damn game from scratch.
 * essentially, i wanna rewrite it so that an enemy in a room is just a *char, instead of being hard-coded into the room to make it slightly easier to change shit around.
 * so it would be:
 *
 *      char *enemy;
 *      void doRoom69() {
 *              enemy = "gay retard";
 *              printf("A %s appears before you!", enemy);
 *      }
 *
 * so, in case anyone wants to rewrite this shit for me, you know what to do, kek - 2021-12-09_06:22      */

void dRoom() {       
    printf("> You find yourself in a somewhat dreadul room. ");
}

void thMerc() {
    printf("> The mercenary stands before you.\n> ");
}
void Qexit() {
    txtdvd();
    printf("> Exit?\n\n1) Yes\n2) No\n? ");
    action=getAction();
    switch(action) {
        case 1:
            printf("\n> Goodbye!");
            cont();
            exit(0);
            break;
        case 2:
            break;
        default:
            invalid();
    }
}

void doRoom0() {
	txtdvd();
    room = 0;
	printf("> You are at the entrance to the cave.\n> You can see 3 ways forward\n\n");
	printf("1) Go north\n2) Go west\n3) Go east\n4) Go south\n? ");
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
        case 4:
            Qexit();
            break;
        case 9:
            mapPrint();
            break;
        case 100:
            room=3;  
            break;
        case 101:
            gold=1;
            break;
		default:
			invalid();
			break;
	}
}

void doRoom1() {
    txtdvd();
	if(!cKnight) {
		printf("> A mercenary stands before you.\n> You are unsure of whether or not he is a threat.\n");
        printf("> There is also a large metal safe behind the mercenary.\n\n");
		printf("1) Talk to the mercenary\n2) Go south\n3) Attack the mercenary\n4) Try to open the safe\n? ");
		action = getAction();
		switch(action) {
			case 1:
				talkKnight();
				break;
			case 2:
				cKnight = 0;
				room = 0;
				break;
			case 3:
				fiteKnight();
				break;
            case 4:
                safe();
                break;
            case 9:
                mapPrint();
                break;
			default:
				invalid();
				break;
		}
	}
	else if(cKnight && fKnight == 0) {
        thMerc();
		printf("There is also a large metal safe behind the mercenary.\n\n");
		printf("1) Talk to the mercenary\n2) Go south\n3) Try to open the safe\n? ");
		action = getAction();
		switch(action) {
			case 1:
				talkKnight();
				break;
			case 2:
				room = 0;
				break;
            case 3:
                safe();
                break;
            case 9:
                mapPrint();
                break;
            case 69:
                win=1;
                break;
			default:
				invalid();
				break;
		}
	}
	else if(cKnight && fKnight == 1) {
        thMerc();
		printf("There is also a large metal safe behind the mercenary.\n\n");
		printf("1) Talk to the mercenary\n2) Go south\n3) Try to open the safe\n? ");
		action = getAction();
		switch(action) {
			case 1:
				talkKnight();
				break;
			case 2:
				room = 0;
				break;
			case 3:
                safe();
				break;
            case 9:
                mapPrint();
                break;
			default:
				invalid();
				break;
		}
	}
}

void doRoom2() {
	txtdvd();
    printf("> You find yourself in a well lit room.\n");
	if(ghoulD==0) {
		printf("> A ghoul blocks your path to the north.\n\n");
		printf("1) Go east\n2) Fight the ghoul\n? ");
		action = getAction();
		switch(action) {
			case 1:
				room = 0;
				break;
			case 2:
				fiteGhoul();
				break;
            case 9:
                mapPrint();
                break;
			default:
				invalid();
				break;
		}
	}
	else if(ghoulD == 1) {
		printf("> There is a dead ghoul on the floor.\n\n");
		printf("1) Go north\n2) Go east\n? ");
		action = getAction();
		switch(action) {
			case 1:
				room = 3;
				break;
			case 2:
				room = 0;
				break;
            case 9:
                mapPrint();
                break;
			default:
				invalid();
				break;
		}
	}
}

/* lol goatse stickers */
void doRoom3() {
	txtdvd();
    printf("> In this room there is a blacksmith at his workbench and a large stone door to the west.\n\n");
	printf("1) Go west\n2) Go south\n3) Talk to blacksmith\n? ");
    action = getAction();
    switch(action) {
        case 1:
            room=8;
            break;
        case 2:
            room=2;
            break;
        case 3:
            talkSmit();
            break;
        case 9:
            mapPrint();
            break;
        default:
            invalid();
            break;
    }
}

void doRoom4() {
	if(!wizD) {
        txtdvd();
        dRoom();
		printf("There is a magician blocking the paths.\n\n");
		printf("1) Fight the magician\n2) Go west\n? ");
		action = getAction();
		switch(action) {
			case 1:
				fiteWiz();
				break;
			case 2:
				room = 0;
				break;
            case 9:
                mapPrint();
                break;
			default:
				invalid();
				break;
		}
	}
	else if(wizD) {
        txtdvd();
        dRoom();
		printf("There is a dead magician on the floor.\n\n");
		printf("1) Go west\n2) Go south\n3) Go north\n4) Go east\n? ");
		action = getAction();
		switch(action) {
			case 1:
				room = 0;
				break;
			case 2:
				room = 5;
				break;
			case 3:
				room = 6;
				break;
			case 4:
				room = 7;
				break;
            case 9:
                mapPrint();
                break;
			default:
				invalid();
				break;
        }
    }
		
}

void doRoom5() {
	txtdvd();
    printf("> You are in an empty room. ");
    if(!gold) {
        gold = true;
        printf("There are 5 gold pieces on the floor\n\n");
        printf("> You take the gold pieces.\n\n");
        printf("1) Go north\n? ");	
        action = getAction();
            switch(action) {
                case 1:
                    room = 4;
                    break;
                case 9:
                    mapPrint();
                    break;
                default:
                    invalid();
                    break;
            }
	}
    else if(gold) {
        printf("\n\n1) Go north\n? ");	
        action = getAction();
            switch(action) {
                case 1:
                    room = 4;
                    break;
                case 9:
                    mapPrint();
                    break;
                default:
                    invalid();
                    break;
            }
    }
}

void doRoom6() {
    txtdvd();
    if(!draugD) {
        printf("> In this room there is a Draugr wielding a sword and shield.\n\n");
        printf("1) Go south\n2) Fight the draugr\n? ");
        action = getAction();
        switch(action) {
            case 1:
                room = 4;
                break;
            case 2:
                fiteDraugr();
                break;
            case 9:
                mapPrint();
                break;
            default:
                invalid();
                break;
        }
       
	}
    else if(draugD) {
        printf("> In this room there is a dead draugr on the floor.\n\n");
        printf("1) Go south\n? ");
        action = getAction();
        switch(action) {
            case 1:
                room = 4;
                break;
            case 9:
                mapPrint();
                break;
            default:
                invalid();
                break;

        }
    }
}

void doRoom7() {
    if(archD == 0) {
        txtdvd();
        printf("> In this room there is a archer wielding a bow.\n\n");
        printf("1) Fight the archer\n2) Go west\n? ");
        action = getAction();
        switch(action) {
            case 1:
                fiteArch();
                break;
            case 2:
                room = 4;
                break;
            case 9:
                mapPrint();
                break;
            default:
                invalid();
                break;
        }
        
	}
    if(archD == 1 && key == 0) {
        txtdvd();
        printf("> In this room there is a dead archer on the floor.\n> There is a keyring on the dead archer's belt.\n\n");
        printf("1) Go west\n2) Take the keyring\n? ");
        action = getAction();
        switch(action) {
            case 1:
                room = 4;
                break;
            case 2:
                key = 1;
                printf("\n> You take the keyring.\n");
                cont();
                break;
            default:
                invalid();
                break;
        }
    }

    if(archD == 1 && key == 1) {
        txtdvd();
        printf("> In this room there is a dead archer on the floor.\n\n");
        printf("1) Go west\n? ");
        action = getAction();
        switch(action) {
            case 1:
                room = 4;
                break;
            case 2:
                key = 1;
                break;
            case 9:
                mapPrint();
                break;
            default:
                invalid();
                break;
        }
    }
}

void doRoom8() {
	txtdvd();
	if(key == 1) {
		printf("> You unlock the large stone door and see the dark prince sitting upon his throne, with a rather shiny crown upon his head.\n");
        printf("\n1) Go east\n2) Fight the dark prince\n? ");
        action = getAction();
		switch(action) {
			case 1:
				room = 3;
				break;
            case 2:
                fitePrince();
                break;
            case 9:
                mapPrint();
                break;
            default:
                invalid();
                break;
		}
	}
	
	else if(key == 0) {
		printf("> You see a large stone door.\n> A key is required to open it.\n> You do not have the key.\n\n");	
		printf("1) Go east\n? ");
		action = getAction();
		switch(action) {
			case 1:
				room = 3;
				break;
            case 9:
                mapPrint();
                break;
            default:
                invalid();
                break;

		}
	}
}
