#ifndef VECTORFILEPARSER_CONFIG_H
#define VECTORFILEPARSER_CONFIG_H

#include "core/global.h"

#ifdef EV_VECTORFILEPARSER_EXPORT
#define EV_VECTORFILEPARSER_LIB EV_DLL_EXPORT
#else
#define EV_VECTORFILEPARSER_LIB EV_DLL_IMPORT
#endif

#ifndef EQUAL
#  if defined(WIN32) || defined(WIN32CE)
#    define STRCASECMP(a,b)         (stricmp(a,b))
#    define STRNCASECMP(a,b,n)      (strnicmp(a,b,n))
#  else
#    define STRCASECMP(a,b)         (strcasecmp(a,b))
#    define STRNCASECMP(a,b,n)      (strncasecmp(a,b,n))
#  endif
#  define EQUALN(a,b,n)           (STRNCASECMP(a,b,n)==0)
#  define EQUAL(a,b)              (STRCASECMP(a,b)==0)
#endif

#endif