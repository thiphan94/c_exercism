#include "isogram.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define NUMBER_LETTRES 26

bool is_isogram(const char phrase[]) {
  if (phrase == 0) {
    return false;
  }

  int n = strlen(phrase);
  int map[NUMBER_LETTRES] = {0};

  for (int i = 0; i < n; i++) {
    if (phrase[i] != ' ' && phrase[i] != '-') {
      int index = tolower(phrase[i]) - 'a';
      map[index]++;
      if (map[index] > 1) {
        return false;
      }
    }
  }

  return true;
}
