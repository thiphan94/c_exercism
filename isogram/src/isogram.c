#include "isogram.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool is_isogram(const char phrase[]) {
  if (phrase == 0) {
    return false;
  }
  for (int i = 0; phrase[i] != '\0'; i++) {
    for (int j = i + 1; phrase[j] != '\0'; j++) {
      if (isalpha(phrase[j]) && tolower(phrase[j]) == tolower(phrase[i])) {
        return false;
      }
    }
  }
  return true;
}
