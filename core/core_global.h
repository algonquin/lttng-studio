#ifndef LTTNG_STUDIO_CORE_GLOBAL_H
#define LTTNG_STUDIO_CORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LTTNG_STUDIO_CORE_LIBRARY)
#  define LTTNG_STUDIO_CORE_SHARED_EXPORT Q_DECL_EXPORT
#else
#  define LTTNG_STUDIO_CORE_SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LTTNG_STUDIO_CORE_GLOBAL_H
