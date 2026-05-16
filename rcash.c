#include <stdio.h>
#define MAX_INPUT 1024


int main (void) {

  char line[MAX_INPUT];

  printf("welcome\n\n");
  
  while (1) {
    printf("rcash> ");
    fflush(stdout);

    if (fgets(line, sizeof(line), stdin) == NULL) {
      break;
    }
  
  }
  printf("\n-closing rcash\n");
  
  return 0;
}

