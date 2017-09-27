#ifndef KMLTREE_GLOBAL_H
#define KMLTREE_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef KMLTREE_LIB
# define KMLTREE_EXPORT Q_DECL_EXPORT
#else
# define KMLTREE_EXPORT Q_DECL_IMPORT
#endif

#endif // KMLTREE_GLOBAL_H
