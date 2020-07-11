#include "foo.h"

#include <stdio.h>

void vFoo(void) {
  printf("Hello -> %s\r\n", __FUNCTION__);
}
