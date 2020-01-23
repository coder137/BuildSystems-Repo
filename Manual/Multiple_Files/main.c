#include <stdio.h>
#include "test.h"

int main()
{
  printf("Hello World\r\n");

  printf("Int: %d\r\n", getInt());
  printf("Float: %f\r\n", getFloat());

  return 0;
}
