// wce_direct.h
#define wceex_wmkdir wmkdir
#define wceex_getcwd getcwd
#define wceex_wgetcwd wgetcwd
#define wceex_chdir chdir
#define wceex_wchdir wchdir

// wce_io.h
#define wceex_findfirst findfirst
#define wceex_findnext findnext
#define wceex_findclose findclose
#define wceex_waccess waccess
#define wceex_access access

// wce_stat.h
#define wceex_stat stat
#define wceex_mkdir mkdir
#define wceex_rmdir rmdir

// wce_stdio.h
#define wceex_rename rename
#define wceex_unlink unlink
#define wceex_wunlink wunlink
#define wceex_rewind rewind

// wce_stdlib.h
#define wceex_bsearch bsearch
#define wceex_lfind lfind
#define wceex_splitpath splitpath
#define wceex_wsplitpath wsplitpath
#define wceex_makepath makepath
#define wceex_wmakepath wmakepath
#define wceex_fullpath fullpath
#define wceex_wfullpath wfullpath
#define wceex_getenv getenv

// wce_string.h
#define wceex_strerror strerror

// wce_time.h
#define wceex_time time
#define wceex_mktime mktime
#define wceex_gmmktime gmmktime
#define wceex_localtime localtime
#define wceex_gmtime gmtime
#define wceex_ctime ctime
#define wceex_ctime_r ctime_r
#define wceex_asctime asctime
#define wceex_asctime_r asctime_r
#define wceex_gettimeofday gettimeofday
#define wceex_mktime_utc mktime_utc


// No header
#define wceex_setlocale setlocale
#define wceex_getopt getopt
#define wceex_getenv getenv
#define wceex_clock clock
#define wceex_abort abort

// Windows ANSI C name differences
#define snprintf _snprintf

