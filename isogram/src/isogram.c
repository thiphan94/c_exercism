#include "isogram.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool is_isogram(const char phrase[]) {
  if (phrase == 0) {
    return false;
  }

  int n = strlen(phrase);
  int map[26] = {0};

  for (int i = 0; i < n; i++) {
    if (phrase[i] != ' ' && phrase[i] != '-') {
      int index = tolower(phrase[i]) - 'a';
      map[index]++;
      if (map[tolower(phrase[i]) - 'a'] > 1) {
        return false;
      }
    }
  }

  return true;
}
