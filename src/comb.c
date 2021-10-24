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
int response;

int fKnight = 0;

/* room1 knight */

/* talk */
void talkKnight() {
	if(!cKnight && !fKnight) {
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
				printf("> \"Very well. Perhaps you'll change your mind later.\"");
				break;
			default:
				invalid();
				break;
		}
	}
	else if(cKnight && fKnight) {
		cKnight = 1;
		txtdvd();
		printf("\"You changed your mind?\"\n\n");
		
		printf("1) Yes, duel the knight in hand-to-hand combat\n2) No, leave\n? ");
		cResp = getAction();
		switch(cResp) {
			case 1:
				fiteKnight();
				break;
			case 2:
				printf("> \"Very well. Perhaps you'll change your mind later.\"");
				break;
			default:
				invalid();
				break;
		}
	}
}

/* fight */
void fiteKnight() {
	txtdvd();
	if(cKnight == 1) {
		fKnight = 1;
		printf("> \"Very well. Let's begin\"\n\n");
		/* boy, this is getting WAY more game-y than I was expecting. */
		printf("1) Punch face\n2) Kick stomach\n? ");
		fResp = getAction();
		txtdvd();
		switch(fResp) {
			case 1:
				printf("> You swing at the mercenary's face\n> The mercenary dodges and punches you in the face.\n> You lose the battle.\n> Try again?\n\n");
				printf("1) Yes, try fighting the mercenary again\n2) No, don't try fighting again\n? ");
				response = getAction();
				switch(response) {
					case 1:
						fiteKnight();
						break;
					case 2:
						break;
				break;
				}
			case 2:
				/* what the shit? */
				printf("> You kick the mercenary in the stomach.\n> He falls to the ground with the air knocked out of him.\n> You win the battle.\n\n");
				/* for some reason, if you lose to this guy in combat and try again and win, this `printf` line prints twice */ 
				/* idk what thats about, it only happens if you lose to him the first time */
				break;
		}
	}
	else {
		fKnight = 1;
		printf("> The mercenary equips his sword, and stabs you through the belly.\n");
		ded = 1;
	}
}
