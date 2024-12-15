#include <stdio.h>

#include "../include/cliService.h"

void processArgs(char *args[]) {
  printf("Argument received: %s", args[1]);
}

void showEndpoints(char *endpoints[], int endpointsSize) {
  for(int i = 0; i < endpointsSize; i++) {
    printf("\n%s", endpoints[i]);
  }
}
