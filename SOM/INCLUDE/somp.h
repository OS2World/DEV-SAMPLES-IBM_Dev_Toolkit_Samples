
/*
 * This file was generated by the SOM Compiler.
 * FileName: somp.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somp
 * 
 *    ORIGINS: 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1996,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_SOMP_Include_Headers_h
#define SOM_SOMP_Include_Headers_h


/*
 * Passthru lines: File: "C.h", "before"
 */

#ifndef _ALL_SOURCE
#define _ALL_SOURCE
#endif
#ifndef PERSISTENT_STG_MGR_CLASS
#define PERSISTENT_STG_MGR_CLASS "SOMPPersistentStorageMgr"
#endif

typedef unsigned short SOMPTError;
#include <stdio.h>
#include <sys/types.h>
#include <somperrd.h>
#include <sompstad.h>
#include <po.h>
#include <poid.h>
#include <pid.h>
#include <defedidl.h>
#include <fsagm.h>
#include <fsgm.h>
#include <fmi.h>
#include <fmib.h>
#include <nsma.h>
#include <psma.h>
#include <time.h>
SOMEXTERN void SOMInitsomp();


#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef SOMP_Include_Headers
#define SOMP_Include_Headers SOMObject
#endif
/*
 *  InterfaceName: SOMP_Include_Headers
 * 
 *  Description:	The interface is simply a dummy interface that will insert the
 *               #include lines that are necessary for a successful SOM compile.
 * 
 *  End of SOMP_Include_Headers
 */
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#define MAXTHREADS 256 /* 256 */
#define SOMPMAXIDNUMSIZE 12 /* 12 */
/*
 *  ID number can be up to 12 digits
 */

#define SOMPMAXIDSIZE 255 /* 255 */

/*
 * End of bindings for IDL types.
 */

#define SOMP_Include_Headers_MajorVersion 0
#define SOMP_Include_Headers_MinorVersion 0

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMP_Include_HeadersNewClass c
#pragma linkage(c, system)
#define SOMP_Include_HeadersClassData d
#define SOMP_Include_HeadersCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMP_Include_Headers_classObj SOMP_Include_HeadersClassData.classObject
#define _SOMP_Include_Headers SOMP_Include_Headers_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMP_Include_HeadersNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMP_Include_HeadersNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMP_Include_HeadersClassDataStructure {
	SOMClass *classObject;
} SOMDLINK SOMP_Include_HeadersClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMP_Include_HeadersCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMP_Include_HeadersCClassData;

/*
 * New and Renew macros for SOMP_Include_Headers
 */
#define SOMP_Include_HeadersNew() \
   ( _SOMP_Include_Headers ? \
	_somNew(_SOMP_Include_Headers) \
	: ( SOMP_Include_HeadersNewClass(\
		SOMP_Include_Headers_MajorVersion, \
		SOMP_Include_Headers_MinorVersion),\
	   _somNew(_SOMP_Include_Headers)))
#define SOMP_Include_HeadersRenew(buf) \
   ( _SOMP_Include_Headers ? \
	_somRenew(_SOMP_Include_Headers, buf) \
	: ( SOMP_Include_HeadersNewClass(\
		SOMP_Include_Headers_MajorVersion, \
		SOMP_Include_Headers_MinorVersion),\
	   _somRenew(_SOMP_Include_Headers, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMP_Include_Headers_somDefaultInit SOMObject_somDefaultInit
#define SOMP_Include_Headers_somDestruct SOMObject_somDestruct
#define SOMP_Include_Headers_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMP_Include_Headers_somDefaultAssign SOMObject_somDefaultAssign
#define SOMP_Include_Headers_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMP_Include_Headers_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMP_Include_Headers_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMP_Include_Headers_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMP_Include_Headers_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMP_Include_Headers_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMP_Include_Headers_somInit SOMObject_somInit
#define SOMP_Include_Headers_somFree SOMObject_somFree
#define SOMP_Include_Headers_somUninit SOMObject_somUninit
#define SOMP_Include_Headers_somGetClass SOMObject_somGetClass
#define SOMP_Include_Headers_somGetClassName SOMObject_somGetClassName
#define SOMP_Include_Headers_somGetSize SOMObject_somGetSize
#define SOMP_Include_Headers_somIsA SOMObject_somIsA
#define SOMP_Include_Headers_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMP_Include_Headers_somRespondsTo SOMObject_somRespondsTo
#define SOMP_Include_Headers_somDispatch SOMObject_somDispatch
#define SOMP_Include_Headers_somClassDispatch SOMObject_somClassDispatch
#define SOMP_Include_Headers_somCastObj SOMObject_somCastObj
#define SOMP_Include_Headers_somResetObj SOMObject_somResetObj
#define SOMP_Include_Headers_somDispatchV SOMObject_somDispatchV
#define SOMP_Include_Headers_somDispatchL SOMObject_somDispatchL
#define SOMP_Include_Headers_somDispatchA SOMObject_somDispatchA
#define SOMP_Include_Headers_somDispatchD SOMObject_somDispatchD
#define SOMP_Include_Headers_somPrintSelf SOMObject_somPrintSelf
#define SOMP_Include_Headers_somDumpSelf SOMObject_somDumpSelf
#define SOMP_Include_Headers_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMP_Include_Headers_h */
