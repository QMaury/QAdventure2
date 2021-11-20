#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "func.h"
#include "rooms.h"
#include "vars.h"

char *replace_str(char *str, char *orig, char *rep) {
  static char buffer[64];
  char *p;

  if (!(p = strstr(str, orig)))
    return str;

  strncpy(buffer, str,
          p - str);
  buffer[p - str] = '\0';

  sprintf(buffer + (p - str), "%s%s", rep, p + strlen(orig));

  return buffer;
}

char *mapstr = "\
                +===+   +===+   +===+   +===+        \n\
                | 8 |===| 3 |   | 1 |   | 6 |        \n\
                +===+   +===+   +===+   +===+        \n\
                          |       |       |          \n\
                        +===+   +===+   +===+   +===+\n\
                        | 2 |===| 0 |===| 4 |===| 7 |\n\
                        +===+   +===+   +===+   +===+\n\
                                  |       |          \n\
                                  |     +===+        \n\
                                        | 5 |        \n\
                                        +===+        \n";

void mapPrint() {
  char roomChar=room+'0';
  printf("\n%s", replace_str(mapstr, &roomChar, "X"));
  cont();
}
