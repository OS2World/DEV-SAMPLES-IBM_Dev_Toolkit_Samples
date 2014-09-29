
/*
 * This file was generated by the SOM Compiler.
 * FileName: sompstad.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

#ifndef SOM_Module_sompstad_SOMPStatDef_defined
#define SOM_Module_sompstad_SOMPStatDef_defined 1
#include <som.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
typedef
struct SOMPStatDef_somp_stat {
short  st_dev;
/*
 *  ID of device containing a directory
 *    entry for this file.  File serial
 *    no + device ID uniquely identify
 *    the file within the system
 */

unsigned short  st_ino;
/*
 *  File serial number
 */

unsigned short  st_mode;
/*
 *  File mode; see #define's below
 */

short  st_nlink;
/*
 *  Number of links
 */

short  st_uid;
/*
 *  User ID of the file's owner
 */

short  st_gid;
/*
 *  Group ID of the file's group
 */

short  st_rdev;
/*
 *  ID of device
 *    This entry is defined only for
 *    character or block special files
 */

long  st_size;
/*
 *  File size in bytes
 */

long  st_atime;
/*
 *  Time of last access
 */

long  st_mtime;
/*
 *  Time of last data modification
 */

long  st_ctime;
/*
 *  Time of last file status change
 */

} SOMPStatDef_somp_stat, SOMPStatDef_sompstat;

#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_sompstat
    #ifdef sompstat
        #undef sompstat
        #define SOMTGD_sompstat 1
    #else
        #define sompstat SOMPStatDef_sompstat
    #endif /* sompstat */
#endif /* SOMTGD_sompstat */
#endif /* SOM_DONT_USE_SHORT_NAMES */

/*
 * End of bindings for IDL types.
 */
#endif /* SOM_Module_sompstad_SOMPStatDef_defined */
