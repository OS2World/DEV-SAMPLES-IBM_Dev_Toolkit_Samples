
/*
 * This file was generated by the SOM Compiler.
 * FileName: mcollect.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somuc
 * 
 *    ORIGINS: 82, 81, 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1996,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 *    Copyright � 1988-92 Apple Computer, Inc.  All rights reserved.
 * 
 * CLASS_NAME: somf_MCollectible
 * 
 * DESCRIPTION: The class somf_MCollectible defines the generic object class
 *              from which all other classes are derived.  It is an abstract
 *              class in that many subclasses will define some or all of the
 *              methods presented below.
 * 
 * 
 *  This file was generated by the SOM Compiler.
 *  FileName: MCollect.id2.
 *  Generated using:
 *      SOM Precompiler spc: 6.13
 *      SOM Emitter emitidl.dll: 6.18
 */


#ifndef SOM_somf_MCollectible_h
#define SOM_somf_MCollectible_h


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
#ifndef somf_MCollectible
#define somf_MCollectible SOMObject
#endif
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#define somf_MCollectible_kReasonableLowerBound 5 /* 5 */
typedef
somMToken somf_MCollectible_somf_MCollectibleCompareFn;
typedef
somMToken somf_MCollectible_somf_MCollectibleHashFn;

#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_kReasonableLowerBound
    #ifdef kReasonableLowerBound
        #undef kReasonableLowerBound
        #define SOMTGD_kReasonableLowerBound 1
    #else
        #define kReasonableLowerBound somf_MCollectible_kReasonableLowerBound
    #endif /* kReasonableLowerBound */
#endif /* SOMTGD_kReasonableLowerBound */

#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_somf_MCollectibleCompareFn
    #ifdef somf_MCollectibleCompareFn
        #undef somf_MCollectibleCompareFn
        #define SOMTGD_somf_MCollectibleCompareFn 1
    #else
        #define somf_MCollectibleCompareFn somf_MCollectible_somf_MCollectibleCompareFn
    #endif /* somf_MCollectibleCompareFn */
#endif /* SOMTGD_somf_MCollectibleCompareFn */
#endif /* SOM_DONT_USE_SHORT_NAMES */

#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_somf_MCollectibleHashFn
    #ifdef somf_MCollectibleHashFn
        #undef somf_MCollectibleHashFn
        #define SOMTGD_somf_MCollectibleHashFn 1
    #else
        #define somf_MCollectibleHashFn somf_MCollectible_somf_MCollectibleHashFn
    #endif /* somf_MCollectibleHashFn */
#endif /* SOMTGD_somf_MCollectibleHashFn */
#endif /* SOM_DONT_USE_SHORT_NAMES */
#endif /* SOM_DONT_USE_SHORT_NAMES */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */


#define SOMF_NIL 0

#define SOMF_CALL_COMPARE_FN(obj,token,parameter) (((somTD_somf_MCollectible_somfIsEqual) somResolve(obj,token))(obj, ev, parameter))

#define SOMF_CALL_HASH_FN(obj,token) (((somTD_somf_MCollectible_somfHash) somResolve(obj,token))(obj, ev))

#define kDeleted (somf_MCollectible*) 0xFFFFFFFF

#define somf_MCollectible_MajorVersion 2
#define somf_MCollectible_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define somf_MCollectibleNewClass c
#pragma linkage(c, system)
#define somf_MCollectibleClassData d
#define somf_MCollectibleCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define somf_MCollectible_classObj somf_MCollectibleClassData.classObject
#define _somf_MCollectible somf_MCollectible_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK somf_MCollectibleNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(somf_MCollectibleNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct somf_MCollectibleClassDataStructure {
	SOMClass *classObject;
	somMToken somfClone;
	somMToken somfClonePointer;
	somMToken somfHash;
	somMToken somfIsEqual;
	somMToken somfIsSame;
	somMToken somfIsNotEqual;
} SOMDLINK somf_MCollectibleClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct somf_MCollectibleCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK somf_MCollectibleCClassData;

/*
 * New and Renew macros for somf_MCollectible
 */
#define somf_MCollectibleNew() \
   ( _somf_MCollectible ? \
	_somNew(_somf_MCollectible) \
	: ( somf_MCollectibleNewClass(\
		somf_MCollectible_MajorVersion, \
		somf_MCollectible_MinorVersion),\
	   _somNew(_somf_MCollectible)))
#define somf_MCollectibleRenew(buf) \
   ( _somf_MCollectible ? \
	_somRenew(_somf_MCollectible, buf) \
	: ( somf_MCollectibleNewClass(\
		somf_MCollectible_MajorVersion, \
		somf_MCollectible_MinorVersion),\
	   _somRenew(_somf_MCollectible, buf)))

/*
 * New Method: somfClone
 */
typedef somf_MCollectible*   SOMLINK somTP_somf_MCollectible_somfClone(somf_MCollectible *somSelf, Environment *ev);
#pragma linkage(somTP_somf_MCollectible_somfClone, system)
typedef somTP_somf_MCollectible_somfClone *somTD_somf_MCollectible_somfClone;
/*
 *  somfClone provides a general function for creating a new instance of this.
 */
#define somMD_somf_MCollectible_somfClone "::somf_MCollectible::somfClone"
#define somf_MCollectible_somfClone(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_MCollectible, somfClone) \
	(somSelf,ev))
#ifndef SOMGD_somfClone
    #if (defined(_somfClone) || defined(__somfClone))
        #undef _somfClone
        #undef __somfClone
        #define SOMGD_somfClone 1
    #else
        #define _somfClone somf_MCollectible_somfClone
    #endif /* _somfClone */
#endif /* SOMGD_somfClone */

/*
 * New Method: somfClonePointer
 */
typedef somf_MCollectible*   SOMLINK somTP_somf_MCollectible_somfClonePointer(somf_MCollectible *somSelf, Environment *ev, 
		somf_MCollectible* clonee);
#pragma linkage(somTP_somf_MCollectible_somfClonePointer, system)
typedef somTP_somf_MCollectible_somfClonePointer *somTD_somf_MCollectible_somfClonePointer;
/*
 *  somfClonePointer returns a pointer to a Clone
 */
#define somMD_somf_MCollectible_somfClonePointer "::somf_MCollectible::somfClonePointer"
#define somf_MCollectible_somfClonePointer(somSelf,ev,clonee) \
    (SOM_Resolve(somSelf, somf_MCollectible, somfClonePointer) \
	(somSelf,ev,clonee))
#ifndef SOMGD_somfClonePointer
    #if (defined(_somfClonePointer) || defined(__somfClonePointer))
        #undef _somfClonePointer
        #undef __somfClonePointer
        #define SOMGD_somfClonePointer 1
    #else
        #define _somfClonePointer somf_MCollectible_somfClonePointer
    #endif /* _somfClonePointer */
#endif /* SOMGD_somfClonePointer */

/*
 * New Method: somfHash
 */
typedef long   SOMLINK somTP_somf_MCollectible_somfHash(somf_MCollectible *somSelf, Environment *ev);
#pragma linkage(somTP_somf_MCollectible_somfHash, system)
typedef somTP_somf_MCollectible_somfHash *somTD_somf_MCollectible_somfHash;
/*
 *  somfHash returns a value suitable for use as a hashing probe for this.
 *  The default function will simply return the address of the object.
 *  The default function is almost certainly not adequate if you are overriding
 *  somfIsEqual because you need to make sure that all objects that "are equal"
 *  to each other return the same hash value.  For example, a TText object would
 *  return a hash value computed using the characters in the string instead of
 *  the address of the string.
 */
#define somMD_somf_MCollectible_somfHash "::somf_MCollectible::somfHash"
#define somf_MCollectible_somfHash(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_MCollectible, somfHash) \
	(somSelf,ev))
#ifndef SOMGD_somfHash
    #if (defined(_somfHash) || defined(__somfHash))
        #undef _somfHash
        #undef __somfHash
        #define SOMGD_somfHash 1
    #else
        #define _somfHash somf_MCollectible_somfHash
    #endif /* _somfHash */
#endif /* SOMGD_somfHash */

/*
 * New Method: somfIsEqual
 */
typedef boolean   SOMLINK somTP_somf_MCollectible_somfIsEqual(somf_MCollectible *somSelf, Environment *ev, 
		somf_MCollectible* obj);
#pragma linkage(somTP_somf_MCollectible_somfIsEqual, system)
typedef somTP_somf_MCollectible_somfIsEqual *somTD_somf_MCollectible_somfIsEqual;
/*
 *  somfIsEqual returns TRUE if obj is isomorphic to this.  The default function
 *  will give you a nasty message.  For example, the somfIsEqual method
 *  for TText objects will do a string comparison.  All of the utility classes
 *  allow you to specify what methods to use when comparing objects for
 *  insertion, deletion, etc.
 */
#define somMD_somf_MCollectible_somfIsEqual "::somf_MCollectible::somfIsEqual"
#define somf_MCollectible_somfIsEqual(somSelf,ev,obj) \
    (SOM_Resolve(somSelf, somf_MCollectible, somfIsEqual) \
	(somSelf,ev,obj))
#ifndef SOMGD_somfIsEqual
    #if (defined(_somfIsEqual) || defined(__somfIsEqual))
        #undef _somfIsEqual
        #undef __somfIsEqual
        #define SOMGD_somfIsEqual 1
    #else
        #define _somfIsEqual somf_MCollectible_somfIsEqual
    #endif /* _somfIsEqual */
#endif /* SOMGD_somfIsEqual */

/*
 * New Method: somfIsSame
 */
typedef boolean   SOMLINK somTP_somf_MCollectible_somfIsSame(somf_MCollectible *somSelf, Environment *ev, 
		somf_MCollectible* obj);
#pragma linkage(somTP_somf_MCollectible_somfIsSame, system)
typedef somTP_somf_MCollectible_somfIsSame *somTD_somf_MCollectible_somfIsSame;
/*
 *  The default function for somfIsSame is a pointer comparison
 */
#define somMD_somf_MCollectible_somfIsSame "::somf_MCollectible::somfIsSame"
#define somf_MCollectible_somfIsSame(somSelf,ev,obj) \
    (SOM_Resolve(somSelf, somf_MCollectible, somfIsSame) \
	(somSelf,ev,obj))
#ifndef SOMGD_somfIsSame
    #if (defined(_somfIsSame) || defined(__somfIsSame))
        #undef _somfIsSame
        #undef __somfIsSame
        #define SOMGD_somfIsSame 1
    #else
        #define _somfIsSame somf_MCollectible_somfIsSame
    #endif /* _somfIsSame */
#endif /* SOMGD_somfIsSame */

/*
 * New Method: somfIsNotEqual
 */
typedef boolean   SOMLINK somTP_somf_MCollectible_somfIsNotEqual(somf_MCollectible *somSelf, Environment *ev, 
		somf_MCollectible* obj);
#pragma linkage(somTP_somf_MCollectible_somfIsNotEqual, system)
typedef somTP_somf_MCollectible_somfIsNotEqual *somTD_somf_MCollectible_somfIsNotEqual;
/*
 *  somfIsNotEqual returns TRUE if obj is NOT isomorphic to this.  It uses
 *  somfIsEqual, so overriding somfIsEqual will handle the logic of somfIsNotEqual too.
 */
#define somMD_somf_MCollectible_somfIsNotEqual "::somf_MCollectible::somfIsNotEqual"
#define somf_MCollectible_somfIsNotEqual(somSelf,ev,obj) \
    (SOM_Resolve(somSelf, somf_MCollectible, somfIsNotEqual) \
	(somSelf,ev,obj))
#ifndef SOMGD_somfIsNotEqual
    #if (defined(_somfIsNotEqual) || defined(__somfIsNotEqual))
        #undef _somfIsNotEqual
        #undef __somfIsNotEqual
        #define SOMGD_somfIsNotEqual 1
    #else
        #define _somfIsNotEqual somf_MCollectible_somfIsNotEqual
    #endif /* _somfIsNotEqual */
#endif /* SOMGD_somfIsNotEqual */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define somf_MCollectible_somDefaultInit SOMObject_somDefaultInit
#define somf_MCollectible_somDestruct SOMObject_somDestruct
#define somf_MCollectible_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define somf_MCollectible_somDefaultAssign SOMObject_somDefaultAssign
#define somf_MCollectible_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define somf_MCollectible_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define somf_MCollectible_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define somf_MCollectible_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define somf_MCollectible_somDefaultVAssign SOMObject_somDefaultVAssign
#define somf_MCollectible_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define somf_MCollectible_somInit SOMObject_somInit
#define somf_MCollectible_somFree SOMObject_somFree
#define somf_MCollectible_somUninit SOMObject_somUninit
#define somf_MCollectible_somGetClass SOMObject_somGetClass
#define somf_MCollectible_somGetClassName SOMObject_somGetClassName
#define somf_MCollectible_somGetSize SOMObject_somGetSize
#define somf_MCollectible_somIsA SOMObject_somIsA
#define somf_MCollectible_somIsInstanceOf SOMObject_somIsInstanceOf
#define somf_MCollectible_somRespondsTo SOMObject_somRespondsTo
#define somf_MCollectible_somDispatch SOMObject_somDispatch
#define somf_MCollectible_somClassDispatch SOMObject_somClassDispatch
#define somf_MCollectible_somCastObj SOMObject_somCastObj
#define somf_MCollectible_somResetObj SOMObject_somResetObj
#define somf_MCollectible_somDispatchV SOMObject_somDispatchV
#define somf_MCollectible_somDispatchL SOMObject_somDispatchL
#define somf_MCollectible_somDispatchA SOMObject_somDispatchA
#define somf_MCollectible_somDispatchD SOMObject_somDispatchD
#define somf_MCollectible_somPrintSelf SOMObject_somPrintSelf
#define somf_MCollectible_somDumpSelf SOMObject_somDumpSelf
#define somf_MCollectible_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_somf_MCollectible_h */
