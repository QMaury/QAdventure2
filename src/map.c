#include <stdio.h>
#include <stdlib.h>

#include "rooms.h"
#include "vars.h"
#include "func.h"

void mapPrint() {
    if(room == 0) {
        printf("\n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("| 8 |===| 3 |   | 1 |   | 6 |        \n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("          |       |       |          \n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("        | 2 |===| X |===| 4 |===| 7 |\n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("                  |       |          \n");
        printf("                  |     +===+        \n");
        printf("                        | 5 |        \n");
        printf("                        +===+        \n");
    }
    if(room == 1) {
        printf("\n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("| 8 |===| 3 |   | X |   | 6 |        \n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("          |       |       |          \n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("        | 2 |===| 0 |===| 4 |===| 7 |\n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("                  |       |          \n");
        printf("                  |     +===+        \n");
        printf("                        | 5 |        \n");
        printf("                        +===+        \n");
    }
    if(room == 2) {
        printf("\n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("| 8 |===| 3 |   | 1 |   | 6 |        \n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("          |       |       |          \n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("        | X |===| 0 |===| 4 |===| 7 |\n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("                  |       |          \n");
        printf("                  |     +===+        \n");
        printf("                        | 5 |        \n");
        printf("                        +===+        \n");
    }
    if(room == 3) {
        printf("\n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("| 8 |===| X |   | 1 |   | 6 |        \n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("          |       |       |          \n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("        | 2 |===| 0 |===| 4 |===| 7 |\n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("                  |       |          \n");
        printf("                  |     +===+        \n");
        printf("                        | 5 |        \n");
        printf("                        +===+        \n");
    }
    if(room == 4) {
        printf("\n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("| 8 |===| 3 |   | 1 |   | 6 |        \n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("          |       |       |          \n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("        | 2 |===| 0 |===| X |===| 7 |\n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("                  |       |          \n");
        printf("                  |     +===+        \n");
        printf("                        | 5 |        \n");
        printf("                        +===+        \n");
    }
    if(room == 5) {
        printf("\n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("| 8 |===| 3 |   | 1 |   | 6 |        \n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("          |       |       |          \n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("        | 2 |===| 0 |===| 4 |===| 7 |\n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("                  |       |          \n");
        printf("                  |     +===+        \n");
        printf("                        | X |        \n");
        printf("                        +===+        \n");
    }
    if(room == 6) {
        printf("\n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("| 8 |===| 3 |   | 1 |   | X |        \n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("          |       |       |          \n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("        | 2 |===| 0 |===| 4 |===| 7 |\n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("                  |       |          \n");
        printf("                  |     +===+        \n");
        printf("                        | 5 |        \n");
        printf("                        +===+        \n");
    }
    if(room == 7) {
        printf("\n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("| 8 |===| 3 |   | 1 |   | 6 |        \n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("          |       |       |          \n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("        | 2 |===| 0 |===| 4 |===| X |\n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("                  |       |          \n");
        printf("                  |     +===+        \n");
        printf("                        | 5 |        \n");
        printf("                        +===+        \n");
    }
    if(room == 8) {
        printf("\n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("| X |===| 3 |   | 1 |   | 6 |        \n");
        printf("+===+   +===+   +===+   +===+        \n");
        printf("          |       |       |          \n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("        | 2 |===| 0 |===| 4 |===| 7 |\n");
        printf("        +===+   +===+   +===+   +===+\n");
        printf("                  |       |          \n");
        printf("                  |     +===+        \n");
        printf("                        | 5 |        \n");
        printf("                        +===+        \n");
    }
    cont();
}
