/* comb.c */
/* combat encounters and conversation */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "rooms.h"
#include "vars.h"
#include "func.h"
#include "comb.h"

int cResp;
int fResp;

/* room1 knight */

/* talk */
void talkKnight() {
	cKnight = 1;
	txtdvd();
	printf("> \"Hello, adventurer. I see you come for the crown as well.\"\n");
	printf("> \"I would tell you to leave this place, but speaking frankly,");
	printf("I haven't been having too much luck in here. I'm stuck.\"\n");
	printf("> \"So, how about this:\"\n> \"We have a hand-to-hand duel, and if you can best me, ");
	printf("I'll give you my sword.\"\n\n");
	
	printf("1) Yes, duel the knight in hand-to-hand combat\n2) No, leave\n? ");
	cResp = getAction();
	switch(cResp) {
		case 1:
			fiteKnight();
			break;
		case 2:
			printf("> \"Very well. Maybe you'll change your mind later.\"");
			break;
		default:
			invalid();
			break;
	}
}

/* fight */
void fiteKnight() {
	txtdvd();
	if(cKnight == 1) {
		printf("> \"Very well. Let's begin\"\n\n");
		/* boy, this is getting WAY more game-y than I was expecting. */
		printf("1) Punch face\n2) Kick stomach\n? ");
		fResp = getAction();
		switch(action) {
			case 2:
				/* i am a fool */
				printf("> You kick the mercenary in the stomach.\n> With the air knocked out of his lungs he falls to the ground.\n.");		
				printf("> You win the battle.");
				break;
				case 1:
				printf("> You swing at the mercenary's face\n> The mercenary dodges and punches you in the face.\n> You lose the battle.\n");		
				break;
		}
	}
	else {
		printf("> The knight ");
	}
}
