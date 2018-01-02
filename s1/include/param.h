#ifndef _PARAM_H
#define _PARAM_H
/*
* 可以格式化输出信息
*/
#define __info(fmt,...) do{\
  printf("[%s]<%s>(%d)\n",__FILE__,__func__,__LINE__ );\
  printf(fmt,__VA_ARGS__);\
}while(0)

/*
* 可以生成一个字符串
*/
#define __mkstr(symbol) #symbol

/*
* 错误函数，可以打印错误信息 并跳转到指定的label
*/
#define __error(exp,goto_lable,fmt,...) do{\
  if(exp) {\
    __info("error %s\n",__mkstr(exp));\
    goto goto_lable;\
  }\
}while(0)

/*
* 定义一个指针函数
*/
typedef int (*chk_func)(int argc,const char *argv[]);

int chk_param(int argc, const char *argv[]);

int chk_param_a(int argc, const char *argv[]);
int chk_param_b(int argc, const char *argv[]);
int chk_param_c(int argc, const char *argv[]);
#endif /*_PARAM_H*/
