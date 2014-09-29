
/*
 * This file was generated by the SOM Compiler.
 * FileName: cntxt.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *   IDL specification for CORBA Context Object.
 */


#ifndef SOM_Context_h
#define SOM_Context_h


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
#ifndef Context
#define Context SOMObject
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
#ifndef NVList
    #define NVList SOMObject
#endif /* NVList */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */

/*
 * Context flags
 */
#define CTX_DELETE_DESCENDENTS      0x00000200
#define CTX_RESTRICT_SCOPE          0x00000400


/* alias for CORBA compatibility */
#ifndef Context_delete
#define Context_delete Context_destroy
#endif


#define Context_MajorVersion 2
#define Context_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define ContextNewClass c
#pragma linkage(c, system)
#define ContextClassData d
#define ContextCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define Context_classObj ContextClassData.classObject
#define _Context Context_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK ContextNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(ContextNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct ContextClassDataStructure {
	SOMClass *classObject;
	somMToken set_one_value;
	somMToken set_values;
	somMToken get_values;
	somMToken delete_values;
	somMToken create_child;
	somMToken destroy;
	somMToken _get_context_name;
	somMToken _set_context_name;
	somMToken _get_context_parent;
	somMToken _set_context_parent;
	somMToken _get_properties;
	somMToken _set_properties;
} SOMDLINK ContextClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct ContextCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK ContextCClassData;

/*
 * New and Renew macros for Context
 */
#define ContextNew() \
   ( _Context ? \
	_somNew(_Context) \
	: ( ContextNewClass(\
		Context_MajorVersion, \
		Context_MinorVersion),\
	   _somNew(_Context)))
#define ContextRenew(buf) \
   ( _Context ? \
	_somRenew(_Context, buf) \
	: ( ContextNewClass(\
		Context_MajorVersion, \
		Context_MinorVersion),\
	   _somRenew(_Context, buf)))

/*
 * Override method: somDefaultInit
 */
#define Context_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define Context_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * New Method: set_one_value
 */
typedef ORBStatus   SOMLINK somTP_Context_set_one_value(Context *somSelf, Environment *ev, 
		Identifier prop_name, 
		string value);
#pragma linkage(somTP_Context_set_one_value, system)
typedef somTP_Context_set_one_value *somTD_Context_set_one_value;
/*
 *   This method sets or adds a single context object property. If prop_name
 *   does not exist in the property list, it is added. If prop_name
 *   does exist, its value is changed.
 * 
 */
#define somMD_Context_set_one_value "::Context::set_one_value"
#define Context_set_one_value(somSelf,ev,prop_name,value) \
    (SOM_Resolve(somSelf, Context, set_one_value) \
	(somSelf,ev,prop_name,value))
#ifndef SOMGD_set_one_value
    #if (defined(_set_one_value) || defined(__set_one_value))
        #undef _set_one_value
        #undef __set_one_value
        #define SOMGD_set_one_value 1
    #else
        #define _set_one_value Context_set_one_value
    #endif /* _set_one_value */
#endif /* SOMGD_set_one_value */

/*
 * New Method: set_values
 */
typedef ORBStatus   SOMLINK somTP_Context_set_values(Context *somSelf, Environment *ev, 
		NVList* values);
#pragma linkage(somTP_Context_set_values, system)
typedef somTP_Context_set_values *somTD_Context_set_values;
/*
 *   This method sets or changes one or more property values in the context
 *   object. If a prop_name specified in the NVList does not exist in the
 *   Context object property list, it is added. If a prop_name specified in
 *   the NVList does exist in the Context object property list, its value
 *   is changed.
 * 
 */
#define somMD_Context_set_values "::Context::set_values"
#define Context_set_values(somSelf,ev,values) \
    (SOM_Resolve(somSelf, Context, set_values) \
	(somSelf,ev,values))
#ifndef SOMGD_set_values
    #if (defined(_set_values) || defined(__set_values))
        #undef _set_values
        #undef __set_values
        #define SOMGD_set_values 1
    #else
        #define _set_values Context_set_values
    #endif /* _set_values */
#endif /* SOMGD_set_values */

/*
 * New Method: get_values
 */
typedef ORBStatus   SOMLINK somTP_Context_get_values(Context *somSelf, Environment *ev, 
		Identifier start_scope, 
		Flags op_flags, 
		Identifier prop_name, 
		NVList** values);
#pragma linkage(somTP_Context_get_values, system)
typedef somTP_Context_get_values *somTD_Context_get_values;
/*
 *   This method retrieves the specified context property value(s) If
 *   prop_name has a trailing wildcard ("*"), then all matching properties
 *   and their values are returned. The returned NVList is the responsibility
 *   of the caller,
 * 
 *   If no matching properties are found, and error is returned the property
 *   list contains no values.
 * 
 *   Scope indicates the context object level at which to initiate the search
 *   for the specified properties (e.g. "_USER", "_SYSTEM"). If the property
 *   is not found at the indicated level, the search continues up the context
 *   object tree until a match is found or all context objects in the chain
 *   have been searched.
 * 
 *   If scope name is ommitted, the search begins with the specified context
 *   object. If the specified scope name is not found, an exception is
 *   returned.
 * 
 *   The following operation flags may be specified:
 * 
 *   CTX_RESTRICT_SCOPE  Searching is limited to the specified search scope or
 *                       context object.
 * 
 */
#define somMD_Context_get_values "::Context::get_values"
#define Context_get_values(somSelf,ev,start_scope,op_flags,prop_name,values) \
    (SOM_Resolve(somSelf, Context, get_values) \
	(somSelf,ev,start_scope,op_flags,prop_name,values))
#ifndef SOMGD_get_values
    #if (defined(_get_values) || defined(__get_values))
        #undef _get_values
        #undef __get_values
        #define SOMGD_get_values 1
    #else
        #define _get_values Context_get_values
    #endif /* _get_values */
#endif /* SOMGD_get_values */

/*
 * New Method: delete_values
 */
typedef ORBStatus   SOMLINK somTP_Context_delete_values(Context *somSelf, Environment *ev, 
		Identifier prop_name);
#pragma linkage(somTP_Context_delete_values, system)
typedef somTP_Context_delete_values *somTD_Context_delete_values;
/*
 *   This method deletes the specified property value(s) from the context
 *   object.  If prop_name has a trailing wildcard character ("*"), then
 *   all property names which match will be deleted.
 * 
 *   Search scope is always limited to the specified context object.
 * 
 *   If no matching property is found, an exception is returned.
 * 
 */
#define somMD_Context_delete_values "::Context::delete_values"
#define Context_delete_values(somSelf,ev,prop_name) \
    (SOM_Resolve(somSelf, Context, delete_values) \
	(somSelf,ev,prop_name))
#ifndef SOMGD_delete_values
    #if (defined(_delete_values) || defined(__delete_values))
        #undef _delete_values
        #undef __delete_values
        #define SOMGD_delete_values 1
    #else
        #define _delete_values Context_delete_values
    #endif /* _delete_values */
#endif /* SOMGD_delete_values */

/*
 * New Method: create_child
 */
typedef ORBStatus   SOMLINK somTP_Context_create_child(Context *somSelf, Environment *ev, 
		Identifier ctx_name, 
		Context** child_ctx);
#pragma linkage(somTP_Context_create_child, system)
typedef somTP_Context_create_child *somTD_Context_create_child;
/*
 *   This method creates a child context object.
 * 
 *   The returned context object is chained to its parent context. That is,
 *   searches on the child context object will look in the parent context
 *   (and so on, up the context tree), if necessary, for matching property
 *   names.
 * 
 */
#define somMD_Context_create_child "::Context::create_child"
#define Context_create_child(somSelf,ev,ctx_name,child_ctx) \
    (SOM_Resolve(somSelf, Context, create_child) \
	(somSelf,ev,ctx_name,child_ctx))
#ifndef SOMGD_create_child
    #if (defined(_create_child) || defined(__create_child))
        #undef _create_child
        #undef __create_child
        #define SOMGD_create_child 1
    #else
        #define _create_child Context_create_child
    #endif /* _create_child */
#endif /* SOMGD_create_child */

/*
 * New Method: destroy
 */
typedef ORBStatus   SOMLINK somTP_Context_destroy(Context *somSelf, Environment *ev, 
		Flags flags);
#pragma linkage(somTP_Context_destroy, system)
typedef somTP_Context_destroy *somTD_Context_destroy;
/*
 *   This operation deletes the indicated context object.
 *   The following flags may be specified:
 * 
 *   CTX_DELETE_DESCENDENTS    Deletes the indicated context object and all
 *                             of its descendent context objects as well.
 * 
 *   An exception is returned if there are one or more child context objects
 *   and the CTX_DELETE_DESCENDENTS flag was not set.
 * 
 */
#define somMD_Context_destroy "::Context::destroy"
#define Context_destroy(somSelf,ev,flags) \
    (SOM_Resolve(somSelf, Context, destroy) \
	(somSelf,ev,flags))
#ifndef SOMGD_destroy
    #if (defined(_destroy) || defined(__destroy))
        #undef _destroy
        #undef __destroy
        #define SOMGD_destroy 1
    #else
        #define _destroy Context_destroy
    #endif /* _destroy */
#endif /* SOMGD_destroy */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define Context_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define Context_somDefaultAssign SOMObject_somDefaultAssign
#define Context_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define Context_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define Context_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define Context_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define Context_somDefaultVAssign SOMObject_somDefaultVAssign
#define Context_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define Context_somInit SOMObject_somInit
#define Context_somFree SOMObject_somFree
#define Context_somUninit SOMObject_somUninit
#define Context_somGetClass SOMObject_somGetClass
#define Context_somGetClassName SOMObject_somGetClassName
#define Context_somGetSize SOMObject_somGetSize
#define Context_somIsA SOMObject_somIsA
#define Context_somIsInstanceOf SOMObject_somIsInstanceOf
#define Context_somRespondsTo SOMObject_somRespondsTo
#define Context_somDispatch SOMObject_somDispatch
#define Context_somClassDispatch SOMObject_somClassDispatch
#define Context_somCastObj SOMObject_somCastObj
#define Context_somResetObj SOMObject_somResetObj
#define Context_somDispatchV SOMObject_somDispatchV
#define Context_somDispatchL SOMObject_somDispatchL
#define Context_somDispatchA SOMObject_somDispatchA
#define Context_somDispatchD SOMObject_somDispatchD
#define Context_somPrintSelf SOMObject_somPrintSelf
#define Context_somDumpSelf SOMObject_somDumpSelf
#define Context_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_Context_h */
