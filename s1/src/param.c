#define MIN_PARAM_NUM 2
#include <stdio.h>
#include <string.h>
#include "param.h"

enum {
  #define ENUM_INFO
  #include "paramdef.h"
  _MAX_MODE
};

static const char * chk_str_arr[_MAX_MODE] = {
  #define MODESTR_INFO
  #include "paramdef.h"
};

static chk_func chk_func_arr[_MAX_MODE] = {
  #define FUNCNAME_INFO
  #include "paramdef.h"
};

/*
* check param if argc less then MIN_PARAM_NUM return -1
* else return zero
*/
int chk_param(int argc, const char *argv[])
{
    int i,re = -1;
    __error(argc < 2, __error_label,"param equal %d\n",argc);
    __error(argv[1][0] != '-', __error_label,"param error need -\n");
    for (i = 0; i < _MAX_MODE; i++) {
      if(strcmp(chk_str_arr[i],&argv[1][1]) == 0) {
        chk_func_arr[i](argc,argv);
      }
    }
    __error(i>_MAX_MODE,__error_label,"not found mode %s",argv[1]);
    __error_label:
      return re;
}
