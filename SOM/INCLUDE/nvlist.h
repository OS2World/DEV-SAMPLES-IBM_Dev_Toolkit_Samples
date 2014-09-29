
/*
 * This file was generated by the SOM Compiler.
 * FileName: nvlist.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *   This class implements the NVList object.
 */


#ifndef SOM_NVList_h
#define SOM_NVList_h


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
#ifndef NVList
#define NVList SOMObject
#endif
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef Container
    #define Container SOMObject
#endif /* Container */

/*
 * End of bindings for IDL types.
 */

#define NVList_MajorVersion 2
#define NVList_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define NVListNewClass c
#pragma linkage(c, system)
#define NVListClassData d
#define NVListCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define NVList_classObj NVListClassData.classObject
#define _NVList NVList_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK NVListNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(NVListNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct NVListClassDataStructure {
	SOMClass *classObject;
	somMToken add_item;
	somMToken remove_item;
	somMToken free;
	somMToken free_memory;
	somMToken get_count;
	somMToken set_item;
	somMToken get_item;
	somMToken get_item_by_name;
} SOMDLINK NVListClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct NVListCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK NVListCClassData;

/*
 * New and Renew macros for NVList
 */
#define NVListNew() \
   ( _NVList ? \
	_somNew(_NVList) \
	: ( NVListNewClass(\
		NVList_MajorVersion, \
		NVList_MinorVersion),\
	   _somNew(_NVList)))
#define NVListRenew(buf) \
   ( _NVList ? \
	_somRenew(_NVList, buf) \
	: ( NVListNewClass(\
		NVList_MajorVersion, \
		NVList_MinorVersion),\
	   _somRenew(_NVList, buf)))

/*
 * Override method: somInit
 */
#define NVList_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * New Method: add_item
 */
typedef ORBStatus   SOMLINK somTP_NVList_add_item(NVList *somSelf, Environment *ev, 
		Identifier item_name, 
		TypeCode item_type, 
		void* value, 
		long value_len, 
		Flags item_flags);
#pragma linkage(somTP_NVList_add_item, system)
typedef somTP_NVList_add_item *somTD_NVList_add_item;
#define somMD_NVList_add_item "::NVList::add_item"
#define NVList_add_item(somSelf,ev,item_name,item_type,value,value_len,item_flags) \
    (SOM_Resolve(somSelf, NVList, add_item) \
	(somSelf,ev,item_name,item_type,value,value_len,item_flags))
#ifndef SOMGD_add_item
    #if (defined(_add_item) || defined(__add_item))
        #undef _add_item
        #undef __add_item
        #define SOMGD_add_item 1
    #else
        #define _add_item NVList_add_item
    #endif /* _add_item */
#endif /* SOMGD_add_item */

/*
 * New Method: free
 */
typedef ORBStatus   SOMLINK somTP_NVList_free(NVList *somSelf, Environment *ev);
#pragma linkage(somTP_NVList_free, system)
typedef somTP_NVList_free *somTD_NVList_free;
#define somMD_NVList_free "::NVList::free"
#define NVList_free(somSelf,ev) \
    (SOM_Resolve(somSelf, NVList, free) \
	(somSelf,ev))
#ifndef SOMGD_free
    #if (defined(_free) || defined(__free))
        #undef _free
        #undef __free
        #define SOMGD_free 1
    #else
        #define _free NVList_free
    #endif /* _free */
#endif /* SOMGD_free */

/*
 * New Method: free_memory
 */
typedef ORBStatus   SOMLINK somTP_NVList_free_memory(NVList *somSelf, Environment *ev);
#pragma linkage(somTP_NVList_free_memory, system)
typedef somTP_NVList_free_memory *somTD_NVList_free_memory;
#define somMD_NVList_free_memory "::NVList::free_memory"
#define NVList_free_memory(somSelf,ev) \
    (SOM_Resolve(somSelf, NVList, free_memory) \
	(somSelf,ev))
#ifndef SOMGD_free_memory
    #if (defined(_free_memory) || defined(__free_memory))
        #undef _free_memory
        #undef __free_memory
        #define SOMGD_free_memory 1
    #else
        #define _free_memory NVList_free_memory
    #endif /* _free_memory */
#endif /* SOMGD_free_memory */

/*
 * New Method: get_count
 */
typedef ORBStatus   SOMLINK somTP_NVList_get_count(NVList *somSelf, Environment *ev, 
		long* count);
#pragma linkage(somTP_NVList_get_count, system)
typedef somTP_NVList_get_count *somTD_NVList_get_count;
/*
 *  These are the accessor functions which allow indexing
 *  into the NVList
 * 
 */
#define somMD_NVList_get_count "::NVList::get_count"
#define NVList_get_count(somSelf,ev,count) \
    (SOM_Resolve(somSelf, NVList, get_count) \
	(somSelf,ev,count))
#ifndef SOMGD_get_count
    #if (defined(_get_count) || defined(__get_count))
        #undef _get_count
        #undef __get_count
        #define SOMGD_get_count 1
    #else
        #define _get_count NVList_get_count
    #endif /* _get_count */
#endif /* SOMGD_get_count */

/*
 * New Method: set_item
 */
typedef ORBStatus   SOMLINK somTP_NVList_set_item(NVList *somSelf, Environment *ev, 
		long item_number, 
		Identifier item_name, 
		TypeCode item_type, 
		void* value, 
		long value_len, 
		Flags item_flags);
#pragma linkage(somTP_NVList_set_item, system)
typedef somTP_NVList_set_item *somTD_NVList_set_item;
/*
 *  Items are numbered 0 ... N
 */
#define somMD_NVList_set_item "::NVList::set_item"
#define NVList_set_item(somSelf,ev,item_number,item_name,item_type,value,value_len,item_flags) \
    (SOM_Resolve(somSelf, NVList, set_item) \
	(somSelf,ev,item_number,item_name,item_type,value,value_len,item_flags))
#ifndef SOMGD_set_item
    #if (defined(_set_item) || defined(__set_item))
        #undef _set_item
        #undef __set_item
        #define SOMGD_set_item 1
    #else
        #define _set_item NVList_set_item
    #endif /* _set_item */
#endif /* SOMGD_set_item */

/*
 * New Method: get_item
 */
typedef ORBStatus   SOMLINK somTP_NVList_get_item(NVList *somSelf, Environment *ev, 
		long item_number, 
		Identifier* item_name, 
		TypeCode* item_type, 
		void** value, 
		long* value_len, 
		Flags* item_flags);
#pragma linkage(somTP_NVList_get_item, system)
typedef somTP_NVList_get_item *somTD_NVList_get_item;
/*
 *  Items are numbered 0 ... N
 */
#define somMD_NVList_get_item "::NVList::get_item"
#define NVList_get_item(somSelf,ev,item_number,item_name,item_type,value,value_len,item_flags) \
    (SOM_Resolve(somSelf, NVList, get_item) \
	(somSelf,ev,item_number,item_name,item_type,value,value_len,item_flags))
#ifndef SOMGD_get_item
    #if (defined(_get_item) || defined(__get_item))
        #undef _get_item
        #undef __get_item
        #define SOMGD_get_item 1
    #else
        #define _get_item NVList_get_item
    #endif /* _get_item */
#endif /* SOMGD_get_item */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define NVList_somDefaultInit SOMObject_somDefaultInit
#define NVList_somDestruct SOMObject_somDestruct
#define NVList_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define NVList_somDefaultAssign SOMObject_somDefaultAssign
#define NVList_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define NVList_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define NVList_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define NVList_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define NVList_somDefaultVAssign SOMObject_somDefaultVAssign
#define NVList_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define NVList_somFree SOMObject_somFree
#define NVList_somUninit SOMObject_somUninit
#define NVList_somGetClass SOMObject_somGetClass
#define NVList_somGetClassName SOMObject_somGetClassName
#define NVList_somGetSize SOMObject_somGetSize
#define NVList_somIsA SOMObject_somIsA
#define NVList_somIsInstanceOf SOMObject_somIsInstanceOf
#define NVList_somRespondsTo SOMObject_somRespondsTo
#define NVList_somDispatch SOMObject_somDispatch
#define NVList_somClassDispatch SOMObject_somClassDispatch
#define NVList_somCastObj SOMObject_somCastObj
#define NVList_somResetObj SOMObject_somResetObj
#define NVList_somDispatchV SOMObject_somDispatchV
#define NVList_somDispatchL SOMObject_somDispatchL
#define NVList_somDispatchA SOMObject_somDispatchA
#define NVList_somDispatchD SOMObject_somDispatchD
#define NVList_somPrintSelf SOMObject_somPrintSelf
#define NVList_somDumpSelf SOMObject_somDumpSelf
#define NVList_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_NVList_h */
