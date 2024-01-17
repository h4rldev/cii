#include <stdio.h>
#include <stdlib.h>
#include "lib/main.h"

int main(int argc, char *argv[]) {
  printf("Argv %i is: %s \n", 0, argv[0]);
  printf("Argc is %i\n", argc);
  printf("Hello, World! \n");
  printf("Gum: %i\n", GUM);
  return EXIT_SUCCESS;
}
