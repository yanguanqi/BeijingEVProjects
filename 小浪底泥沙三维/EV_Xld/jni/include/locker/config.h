#ifndef _ENCRYPTION_CONFIG_H_
#define _ENCRYPTION_CONFIG_H_

#ifdef __cplusplus
#define ENCRYPTION_DECLARE  extern "C" {
#define ENCRYPTION_END      }
#else
#define ENCRYPTION_DECLARE 
#define ENCRYPTION_END      
#endif

# if defined (_MSC_VER)
#   if defined (EV_LOCKER_BUILD)
#      define ENCRYPTION_API  __declspec(dllexport)
#   else
#      define ENCRYPTION_API  __declspec(dllimport)
#   endif
# else
#   if defined (EV_LOCKER_BUILD)
#      define ENCRYPTION_API  __attribute__ ((visibility("default")))
#   else
#      define ENCRYPTION_API
#   endif
# endif

#define BYTE_ORDER   

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#endif
