/*
* 这里定义了宏替换 作用是当
* #define ENUM_INFO 后 将会产生三个ENUM值
*/
#ifdef ENUM_INFO
#define PARAM_INFO(mode,str,funcname) mode,
#endif

#ifdef MODESTR_INFO
#define PARAM_INFO(mode,str,funcname) str,
#endif

#ifdef FUNCNAME_INFO
#define PARAM_INFO(mode,str,funcname) funcname,
#endif

#ifdef PARAM_INFO
PARAM_INFO(_MODEA,"A",chk_param_a)
PARAM_INFO(_MODEB,"B",chk_param_b)
PARAM_INFO(_MODEC,"C",chk_param_c)
#undef PARAM_INFO
#endif

#ifdef ENUM_INFO
#undef ENUM_INFO
#endif

#ifdef MODESTR_INFO
#undef MODESTR_INFO
#endif

#ifdef FUNCNAME_INFO
#undef FUNCNAME_INFO
#endif
