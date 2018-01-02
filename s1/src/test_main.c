#include <stdio.h>
#include "param.h"

int chk_param_a(int argc, const char *argv[])
{
  printf("MODE A\n");
  return 0;
}

int chk_param_b(int argc, const char *argv[])
{
  printf("MODE B\n");
  return 0;
}

int chk_param_c(int argc, const char *argv[])
{
  printf("MODE C\n");
  return 0;
}


int main(int argc, const char *argv[])
{
    chk_param(argc,argv);
    return 0;
}
