/*
* 定义一系列的模板函数
*/
#ifdef _STATIC_PREFIX
#undef _STATIC_PREFIX
#endif
/*
* 定义函数是否为static类型
*/
#ifndef _STATIC_FUNC
#define _STATIC_PREFIX
#else
#define _STATIC_PREFIX static
#endif
/**
* 定义_SUB_FUNC 使用时可进行宏替换
*/                                                                                                                                                                                                                                                                                                                                                                                 /
#ifdef _SUB_FUNC
_STATIC_PREFIX T _SUB_FUNC(T a, T b) {
  return a - b;
}
#undef _SUB_FUNC
#endif

#ifdef _ADD_FUNC
_STATIC_PREFIX T _ADD_FUNC(T a, T b) {
  return a + b
}
#undef _ADD_FUNC
#endif

#undef _STATIC_PREFIX
#ifdef _STATIC_FUNC
#undef _STATIC_FUNC
#endif
