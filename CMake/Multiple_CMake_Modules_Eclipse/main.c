#include <stdio.h>

#include "test.h"
#include "submodule/hello.h"

int main()
{
  printf("Hello World\r\n");

  printf("Int: %d\r\n", getInt());
  printf("Float: %f\r\n", getFloat());

  printf("fromHello: %s\r\n", hello());

  printf("Hello World\r\n");

  return 0;
}
