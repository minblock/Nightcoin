/* confdefs.h */
#define PACKAGE_NAME "Nightcoin Core"
#define PACKAGE_TARNAME "nightcoin"
#define PACKAGE_VERSION "0.18.1"
#define PACKAGE_STRING "Nightcoin Core 0.18.1"
#define PACKAGE_BUGREPORT "https://github.com/nightcoin-project/nightcoin/issues"
#define PACKAGE_URL "https://nightcoin.org/"
#define HAVE_CXX11 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define USE_ASM 1
#define ENABLE_SSE41 1
#define ENABLE_AVX2 1
#define ENABLE_SHANI 1
/* end confdefs.h.  */
#include <pthread.h>
#                       if !defined(_REENTRANT)
#                        error "_REENTRANT must be defined"
#                       endif
                        static void routine(void *a) { a = 0; }
                        static void *start_routine(void *a) { return a; }
int
main ()
{
pthread_t th; pthread_attr_t attr;
                        pthread_create(&th, 0, start_routine, 0);
                        pthread_join(th, 0);
                        pthread_attr_init(&attr);
                        pthread_cleanup_push(routine, 0);
                        pthread_cleanup_pop(0) /* ; */
  ;
  return 0;
}
