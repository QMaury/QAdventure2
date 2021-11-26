/* main.c */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "rooms.h"
#include "vars.h"
#include "func.h"
#include "comb.h"

int ded=0;
int win=0;
int evild=0;
int room;
int action;

int main() {
    ded=0, room=0, sword1=0, kFWin=0, cSmit=0, ghoulD=0, fKnight=0, archD, jacket=0, key=0, wizD, evild, gold=0, draugD;
	printf("QAdventure2 1.4.9.1\n\nIt is recommended you use a pen and paper to draw a map as you play.");
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
        if(ded==1) {
            txtdvd();
            printf("> You have failed.\n> Game over.\n\n1) Try again?\n2) No. Exit\n? ");
            action=getAction();
            switch(action) {
                case 1:
                    printf("\n\n");
                    main();
                    ded=0;
                    break;
                case 2:
                    printf("\nGoodbye!");
                    cont();
                    exit(0);
                    break;
                default:
                    invalid();
                    break;
            }
        } 
    }
    return 1;
}

/* "I'll play it later anon and tell you what I think. There better be anime tiddies" - /g/ Anon - 2021/11/12 7:55 */

/* "here you go, faggot"  - QMaury - 2021/11/12 8:05 
                             .'    '.
                            (____/`\ \
                           (  |' ' )  )
                           )  _\= _/  (
                 __..---.(`_.'  ` \    )
                `;-""-._(_( .      `; (
                /       `-`'--'     ; )
               /    /  .    ( .  ,| |(
_.-`'---...__,'    /-,..___.-'--'_| |_)
'-'``'-.._       ,'  |   / .........'
          ``;--"`;   |   `-`
             `'..__.'                   */

/*  ⠄⠄⠄⣾⣿⠿⠿⠶⠿⢿⣿⣿⣿⣿⣦⣤⣄⢀⡅⢠⣾⣛⡉⠄⠄⠄⠸⢀⣿
    ⠄⠄⢀⡋⣡⣴⣶⣶⡀⠄⠄⠙⢿⣿⣿⣿⣿⣿⣴⣿⣿⣿⢃⣤⣄⣀⣥⣿⣿
    ⠄⠄⢸⣇⠻⣿⣿⣿⣧⣀⢀⣠⡌⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⣿⣿⣿
    ⠄⢀⢸⣿⣷⣤⣤⣤⣬⣙⣛⢿⣿⣿⣿⣿⣿⣿⡿⣿⣿⡍⠄⠄⢀⣤⣄⠉⠋
    ⠄⣼⣖⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⢇⣿⣿⡷⠶⠶⢿⣿⣿⠇⢀
    ⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣷⣶⣥⣴⣿
    ⢀⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟
    ⢸⣿⣦⣌⣛⣻⣿⣿⣧⠙⠛⠛⡭⠅⠒⠦⠭⣭⡻⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃
    ⠘⣿⣿⣿⣿⣿⣿⣿⣿⡆⠄⠄⠄⠄⠄⠄⠄⠄⠹⠈⢋⣽⣿⣿⣿⣿⣵⣾⠃
    ⠄⠘⣿⣿⣿⣿⣿⣿⣿⣿⠄⣴⣿⣶⣄⠄⣴⣶⠄⢀⣾⣿⣿⣿⣿⣿⣿⠃⠄
    ⠄⠄⠈⠻⣿⣿⣿⣿⣿⣿⡄⢻⣿⣿⣿⠄⣿⣿⡀⣾⣿⣿⣿⣿⣛⠛⠁⠄⠄ */
