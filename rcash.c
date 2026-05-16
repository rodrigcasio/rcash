#include <stdio.h>
#include <string.h>

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
    
    line[strcspn(line, '\n')] = '\0';  // avoiding leaving inputs with '\n' at the end
  
  }
  printf("\n-closing rcash...\n");
  
  return 0;
}

