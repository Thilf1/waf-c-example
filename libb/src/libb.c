#include <stdio.h>

#include "liba/liba.h"
#include "libb/libb.h"


void libb_happy() {
  fprintf(stdout, "%s\n", "happy from libb");
}

void libb_hello() {
  fprintf(stdout, "%s\n", "goodbye from libb");
}

void libb_hello() {
  fprintf(stdout, "%s\n", "about to say hello from liba...");
  liba_hello();
  fprintf(stdout, "%s\n", "about to say hello from liba... [done]");

  fprintf(stdout, "%s\n", "hello from libb");
}

/* EOF */
