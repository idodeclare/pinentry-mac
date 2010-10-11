/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* The GUI pinentries should fall back to curses if X is not available. */
#define FALLBACK_CURSES 1

/* Defined if the mlock() call does not work */
/* #undef HAVE_BROKEN_MLOCK */

/* Defined if a `byte' is typedef'd */
/* #undef HAVE_BYTE_TYPEDEF */

/* Defined if we run on some of the PCDOS like systems (DOS, Windoze. OS/2)
   with special properties like no file modes */
/* #undef HAVE_DOSISH_SYSTEM */

/* defined if we must run on a stupid file system */
/* #undef HAVE_DRIVE_LETTERS */

/* Defined if GTK is available */
/* #undef HAVE_GTK */

/* Define if you have the iconv() function. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define if you have a working libpthread (will enable threaded code) */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Defined if the system supports an mlock() call */
#define HAVE_MLOCK 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `plock' function. */
/* #undef HAVE_PLOCK */

/* Define to 1 if you have the <pthread/linuxthreads/pthread.h> header file.
   */
/* #undef HAVE_PTHREAD_LINUXTHREADS_PTHREAD_H */

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
#define HAVE_STPCPY 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <termio.h> header file. */
/* #undef HAVE_TERMIO_H */

/* Defined if a `ulong' is typedef'd */
/* #undef HAVE_ULONG_TYPEDEF */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Defined if we run on a W32 API based system */
/* #undef HAVE_W32_SYSTEM */

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST const

/* Name of package */
#define PACKAGE "pinentry"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "gnupg-devel@gnupg.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "pinentry"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "pinentry 0.7.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "pinentry"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.7.4"

/* The Curses version of Pinentry is to be build */
#define PINENTRY_CURSES 1

/* The GTK+ version of Pinentry is to be build */
/* #undef PINENTRY_GTK */

/* The Qt version of Pinentry is to be build */
/* #undef PINENTRY_QT */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* The capabilities support library is installed */
/* #undef USE_CAPABILITIES */

/* set this to limit filenames to the 8.3 format */
/* #undef USE_ONLY_8DOT3 */

/* Version number of package */
#define VERSION "0.7.4"

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif