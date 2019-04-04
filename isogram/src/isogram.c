#include "isogram.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
void ToUp(char *p);
bool is_isogram(const char *phrase[]) {

  // strupr(phrase);

  // unsigned int x = strlen(phrase);
  extern size_t strlen(const char *phrase) ToUp(phrase);
  if (phrase == 0) {
    return false;
  }
  for (unsigned int i = 0; i < x; i++) {
    for (unsigned int j = i + 1; j < x; j++) {
      if ((isalpha(phrase[i])) && (isalpha(phrase[j]))) {
        // if ((phrase[i] == phrase[j]) || (phrase[i] == toupper(phrase[j]))) {
        if (phrase[i] == phrase[j]) {
          return false;
        }
      }
    }
  }
  // }
  return true;
}
void ToUp(char *p) {
  while (*p) {
    *p = toupper(*p);
    p++;
  }
}
