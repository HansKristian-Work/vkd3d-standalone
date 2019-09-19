/* include/config.h.  Generated from config.h.in by configure.  */
/* include/config.h.in.  Generated from configure.ac by autoheader.  */

#define HAVE_BUILTIN_CLZ 1
#define HAVE_BUILTIN_POPCOUNT 1

#ifndef _WIN32
#define HAVE_DLFCN_H 1
#define HAVE_XCB 1
#define HAVE_PTHREAD_SETNAME_NP 1
#define HAVE_PTHREAD_SETNAME_NP_2 1
#endif

#ifdef __GNUC__
#define HAVE_SYNC_ADD_AND_FETCH 1
#define HAVE_SYNC_SUB_AND_FETCH 1
#endif

#define _GNU_SOURCE 1
#define HAVE_INTTYPES_H 1
#define HAVE_LIBM 1
#define HAVE_MEMORY_H 1

#ifndef _MSC_VER
#define HAVE_PTHREAD_H 1
#endif
#define HAVE_SPIRV_UNIFIED1_GLSL_STD_450_H 1
#define HAVE_SPIRV_UNIFIED1_SPIRV_H 1

#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define HAVE_VULKAN_VULKAN_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "vkd3d"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "vkd3d"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "vkd3d 1.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "vkd3d"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1"

/* Define to the soname of the libMoltenVK library. */
/* #undef SONAME_LIBMOLTENVK */

/* Define to the soname of the libvulkan library. */
#define SONAME_LIBVULKAN "libvulkan.so.1"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "1.1"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */
