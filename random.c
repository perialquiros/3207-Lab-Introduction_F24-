#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
  int lower_bound = (int) 'A';
  int upper_bound = (int) 'Z';
  int range = upper_bound + 1 - lower_bound;
  return (char) (lower_bound + rand() % range);
}
