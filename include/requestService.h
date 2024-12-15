#include <stdio.h>

#ifndef REQUESTSERVICE_H
#define REQUESTSERVICE_H

struct endpointsResponse {
  char* endpoint;
  int response;
};

char** getValidEndpoints(char *endpoints[], int endpointsSize);

#endif
