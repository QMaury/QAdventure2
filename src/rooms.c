/* rooms.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "rooms.h"
#include "vars.h"
#include "func.h"
#include "comb.h"

int cKnight = 0;
int key = 0; 
int gold = 0;

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
        case 222: 
            printf("Salve!\n");
            break;
            /* hmm */
        case 69:
            key = 1;
            gold = 1;
            break;
		default:
			invalid();
			break;
	}
}

void doRoom1() {
	if(!cKnight) {
		txtdvd();
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
			default:
				invalid();
				break;
		}
	}
	else if(cKnight && fKnight == 0) {
		txtdvd();
		printf("> The mercenary stands before you.\n> There is also a large metal safe behind the mercenary.\n\n");
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
			default:
				invalid();
				break;
		}
	}
	else if(cKnight && fKnight == 1) {
		txtdvd();
		printf("> The mercenary stands before you.\n\n");
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
			default:
				invalid();
				break;
		}
	}
}

void doRoom2() {
	txtdvd();
	if(ghoulD == 0) {
		printf("> You find yourself in a well lit room.\n");
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
			default:
				invalid();
				break;
		}
	}
	else if(ghoulD == 1) {
		printf("> You find yourself in a well lit room.\n");
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
			default:
				invalid();
				break;
		}
	}
}

/* lol goatse stickers */
void doRoom3() {
	txtdvd();
    printf("> In this room there is a blacksmith at his workbench and a large stone door the west.\n\n");
	printf("1) Go west\n2) Go south\n3) Talk to blacksmith\n? ");
	if(cSmit) {
		/* wtf */
		action = getAction();
		switch(action) {
			/* reminder to add one more room, containing an item required to fight final boss */
			case 1:
				room = 8;
				break;
			case 2:
				room = 2;
				break;
			case 3:
				talkSmit();
				break;
			default:
				invalid();
				break;
		}
	}
	else {
		action = getAction();
		switch(action) {
			case 1:
				room = 8;
				break;
			case 2:
				room = 2;
				break;
			case 3:
				talkSmit();
				break;
			default:
				invalid();
				break;
		}
		
	}
}

void doRoom4() {
	if(wizD == 0) {
        txtdvd();
		printf("> You find yourself in a somewhat dreadful room. There is a magician blocking the paths.\n\n");
		/* note: maybe add another room containing jacket pickup for final boss */
		/* final room is cold, you cant fight if you chilly */
		printf("1) Fight the magician\n2) Go west\n? ");
		action = getAction();
		switch(action) {
			case 1:
				fiteWiz();
				break;
			case 2:
				room = 0;
				break;
			default:
				invalid();
				break;
		}
	}
	if(wizD == 1) {
        txtdvd();
		printf("> You find yourself in a somewhat dreadful room. There is a dead magician on the floor.\n\n");
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
			default:
				invalid();
				break;
			}
    }
		
}

void doRoom5() {
	txtdvd();
	printf("> You are in an empty room. There are 5 gold pieces on the floor\n\n");
	printf("> You take the gold pieces.\n\n");
	gold = 1;
	printf("1) Go north\n? ");	
	action = getAction();
		switch(action) {
			case 1:
				room = 4;
				break;
			default:
				invalid();
				break;
	}
}

void doRoom6() {
    if(draugD == 0) {
        txtdvd();
        printf("> In this room there is a draugr wielding a sword and shield.\n\n");
        printf("1) Go south\n2) Fight the draugr\n? ");
        action = getAction();
        switch(action) {
            case 1:
                room = 4;
                break;
            case 2:
                fiteDraugr();
                break;
            default:
                invalid();
                break;
        }
       
	}
    if(draugD == 1) {
        txtdvd();
        printf("> In this room there is a dead draugr on the floor.\n\n");
        printf("1) Go south\n? ");
        action = getAction();
        switch(action) {
            case 1:
                room = 4;
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
            default:
                invalid();
                break;
        }
        
	}
    if(archD == 1 && key == 0) {
        txtdvd();
        printf("\n> In this room there is a dead archer on the floor.\n> There is a keyring on the dead archer's belt.\n\n");
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
		}
	}
}
