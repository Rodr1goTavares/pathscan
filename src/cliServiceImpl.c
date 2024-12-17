#include <stdio.h>

#include "../include/cliService.h"

void processArgs(int argc, char *argv[]) {
  printf("Argument received: %s");
}

void showEndpoints(char *endpoints[], int endpointsSize) {
  for(int i = 0; i < endpointsSize; i++) {
    printf("\n%s", endpoints[i]);
  }
}
