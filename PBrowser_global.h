#ifndef PBROWSER_GLOBAL_H
#define PBROWSER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PBROWSER_LIBRARY)
#  define PBROWSER_EXPORT Q_DECL_EXPORT
#else
#  define PBROWSER_EXPORT Q_DECL_IMPORT
#endif

#endif // PBROWSER_GLOBAL_H
