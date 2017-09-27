#ifndef COFING_H
#define COFING_H

#ifdef EV_BUILD_SPATIAL3DLAYER
#define EV_3DLAYER_DLL EV_DLL_EXPORT

#else
#define EV_3DLAYER_DLL EV_DLL_IMPORT

#endif

#endif
