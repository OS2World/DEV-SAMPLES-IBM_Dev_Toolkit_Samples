
/*
 * This file was generated by the SOM Compiler.
 * FileName: boa.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    IDL interface spec for CORBA Basic Object Adapter.
 * 
 *    This is an abstract class which defines the CORBA-defined interface
 *    for a Basic Object Adapter.
 * 
 *    The SOM Object Adapter interface is derived from this one.
 *    SOMOA provides the actual implementation in DSOM.
 */


#ifndef SOM_BOA_h
#define SOM_BOA_h


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
#ifndef BOA
#define BOA SOMObject
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
#ifndef SOMDObject
    #define SOMDObject SOMObject
#endif /* SOMDObject */
#ifndef Principal
    #define Principal SOMObject
#endif /* Principal */
#ifndef ImplementationDef
    #define ImplementationDef SOMObject
#endif /* ImplementationDef */
#ifndef InterfaceDef
    #define InterfaceDef SOMObject
#endif /* InterfaceDef */
#ifndef Context
    #define Context SOMObject
#endif /* Context */

/*
 * End of bindings for IDL types.
 */

#define BOA_MajorVersion 2
#define BOA_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define BOANewClass c
#pragma linkage(c, system)
#define BOAClassData d
#define BOACClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the metaclass file
 */
#ifndef SOM_SOMMSingleInstance_h
#include <snglicls.h>
#endif
/*--------------Migration------------*/
#define BOA_classObj BOAClassData.classObject
#define _BOA BOA_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK BOANewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(BOANewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct BOAClassDataStructure {
	SOMClass *classObject;
	somMToken create;
	somMToken dispose;
	somMToken get_id;
	somMToken change_implementation;
	somMToken get_principal;
	somMToken set_exception;
	somMToken impl_is_ready;
	somMToken deactivate_impl;
	somMToken obj_is_ready;
	somMToken deactivate_obj;
	somMToken activate_impl;
	somMToken activate_obj;
} SOMDLINK BOAClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct BOACClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK BOACClassData;

/*
 * New and Renew macros for BOA
 */
#define BOANew() \
   ( _BOA ? \
	_somNew(_BOA) \
	: ( BOANewClass(\
		BOA_MajorVersion, \
		BOA_MinorVersion),\
	   _somNew(_BOA)))
#define BOARenew(buf) \
   ( _BOA ? \
	_somRenew(_BOA, buf) \
	: ( BOANewClass(\
		BOA_MajorVersion, \
		BOA_MinorVersion),\
	   _somRenew(_BOA, buf)))

/*
 * New Method: create
 */
typedef SOMDObject*   SOMLINK somTP_BOA_create(BOA *somSelf, Environment *ev, 
		ReferenceData* id, 
		InterfaceDef* intf, 
		ImplementationDef* impl);
#pragma linkage(somTP_BOA_create, system)
typedef somTP_BOA_create *somTD_BOA_create;
/*
 *  Create an object reference.
 */
#define somMD_BOA_create "::BOA::create"
#define BOA_create(somSelf,ev,id,intf,impl) \
    (SOM_Resolve(somSelf, BOA, create) \
	(somSelf,ev,id,intf,impl))
#ifndef SOMGD_create
    #if (defined(_create) || defined(__create))
        #undef _create
        #undef __create
        #define SOMGD_create 1
    #else
        #define _create BOA_create
    #endif /* _create */
#endif /* SOMGD_create */

/*
 * New Method: dispose
 */
typedef void   SOMLINK somTP_BOA_dispose(BOA *somSelf, Environment *ev, 
		SOMDObject* obj);
#pragma linkage(somTP_BOA_dispose, system)
typedef somTP_BOA_dispose *somTD_BOA_dispose;
/*
 *  Destroy an object reference.
 */
#define somMD_BOA_dispose "::BOA::dispose"
#define BOA_dispose(somSelf,ev,obj) \
    (SOM_Resolve(somSelf, BOA, dispose) \
	(somSelf,ev,obj))
#ifndef SOMGD_dispose
    #if (defined(_dispose) || defined(__dispose))
        #undef _dispose
        #undef __dispose
        #define SOMGD_dispose 1
    #else
        #define _dispose BOA_dispose
    #endif /* _dispose */
#endif /* SOMGD_dispose */

/*
 * New Method: get_id
 */
typedef ReferenceData   SOMLINK somTP_BOA_get_id(BOA *somSelf, Environment *ev, 
		SOMDObject* obj);
#pragma linkage(somTP_BOA_get_id, system)
typedef somTP_BOA_get_id *somTD_BOA_get_id;
/*
 *  Return ReferenceData associated with referenced object.
 */
#define somMD_BOA_get_id "::BOA::get_id"
#define BOA_get_id(somSelf,ev,obj) \
    (SOM_Resolve(somSelf, BOA, get_id) \
	(somSelf,ev,obj))
#ifndef SOMGD_get_id
    #if (defined(_get_id) || defined(__get_id))
        #undef _get_id
        #undef __get_id
        #define SOMGD_get_id 1
    #else
        #define _get_id BOA_get_id
    #endif /* _get_id */
#endif /* SOMGD_get_id */

/*
 * New Method: get_principal
 */
typedef Principal*   SOMLINK somTP_BOA_get_principal(BOA *somSelf, Environment *ev, 
		SOMDObject* obj, 
		Environment* req_ev);
#pragma linkage(somTP_BOA_get_principal, system)
typedef somTP_BOA_get_principal *somTD_BOA_get_principal;
/*
 *  Return a Principal object, which describes who issued a request on
 *  the specified object.  The "req_ev" parameter is the Environment
 *  which was passed as part of the request.
 */
#define somMD_BOA_get_principal "::BOA::get_principal"
#define BOA_get_principal(somSelf,ev,obj,req_ev) \
    (SOM_Resolve(somSelf, BOA, get_principal) \
	(somSelf,ev,obj,req_ev))
#ifndef SOMGD_get_principal
    #if (defined(_get_principal) || defined(__get_principal))
        #undef _get_principal
        #undef __get_principal
        #define SOMGD_get_principal 1
    #else
        #define _get_principal BOA_get_principal
    #endif /* _get_principal */
#endif /* SOMGD_get_principal */

/*
 * New Method: set_exception
 */
typedef void   SOMLINK somTP_BOA_set_exception(BOA *somSelf, Environment *ev, 
		exception_type major, 
		string userid, 
		void* param);
#pragma linkage(somTP_BOA_set_exception, system)
typedef somTP_BOA_set_exception *somTD_BOA_set_exception;
/*
 *  Return an exception to the client.
 */
#define somMD_BOA_set_exception "::BOA::set_exception"
#define BOA_set_exception(somSelf,ev,major,userid,param) \
    (SOM_Resolve(somSelf, BOA, set_exception) \
	(somSelf,ev,major,userid,param))
#ifndef SOMGD_set_exception
    #if (defined(_set_exception) || defined(__set_exception))
        #undef _set_exception
        #undef __set_exception
        #define SOMGD_set_exception 1
    #else
        #define _set_exception BOA_set_exception
    #endif /* _set_exception */
#endif /* SOMGD_set_exception */

/*
 * New Method: impl_is_ready
 */
typedef void   SOMLINK somTP_BOA_impl_is_ready(BOA *somSelf, Environment *ev, 
		ImplementationDef* impl);
#pragma linkage(somTP_BOA_impl_is_ready, system)
typedef somTP_BOA_impl_is_ready *somTD_BOA_impl_is_ready;
/*
 *  Indicate that the implementation is now ready to process requests.
 */
#define somMD_BOA_impl_is_ready "::BOA::impl_is_ready"
#define BOA_impl_is_ready(somSelf,ev,impl) \
    (SOM_Resolve(somSelf, BOA, impl_is_ready) \
	(somSelf,ev,impl))
#ifndef SOMGD_impl_is_ready
    #if (defined(_impl_is_ready) || defined(__impl_is_ready))
        #undef _impl_is_ready
        #undef __impl_is_ready
        #define SOMGD_impl_is_ready 1
    #else
        #define _impl_is_ready BOA_impl_is_ready
    #endif /* _impl_is_ready */
#endif /* SOMGD_impl_is_ready */

/*
 * New Method: deactivate_impl
 */
typedef void   SOMLINK somTP_BOA_deactivate_impl(BOA *somSelf, Environment *ev, 
		ImplementationDef* impl);
#pragma linkage(somTP_BOA_deactivate_impl, system)
typedef somTP_BOA_deactivate_impl *somTD_BOA_deactivate_impl;
/*
 *  Indicate that the implementation is no longer ready to process reqs.
 */
#define somMD_BOA_deactivate_impl "::BOA::deactivate_impl"
#define BOA_deactivate_impl(somSelf,ev,impl) \
    (SOM_Resolve(somSelf, BOA, deactivate_impl) \
	(somSelf,ev,impl))
#ifndef SOMGD_deactivate_impl
    #if (defined(_deactivate_impl) || defined(__deactivate_impl))
        #undef _deactivate_impl
        #undef __deactivate_impl
        #define SOMGD_deactivate_impl 1
    #else
        #define _deactivate_impl BOA_deactivate_impl
    #endif /* _deactivate_impl */
#endif /* SOMGD_deactivate_impl */

/*
 * New Method: change_implementation
 */
typedef void   SOMLINK somTP_BOA_change_implementation(BOA *somSelf, Environment *ev, 
		SOMDObject* obj, 
		ImplementationDef* impl);
#pragma linkage(somTP_BOA_change_implementation, system)
typedef somTP_BOA_change_implementation *somTD_BOA_change_implementation;
/*
 *  Change the implementation associated with the referenced object.
 *  (NOTE: Null implementation in this release of DSOM.)
 */
#define somMD_BOA_change_implementation "::BOA::change_implementation"
#define BOA_change_implementation(somSelf,ev,obj,impl) \
    (SOM_Resolve(somSelf, BOA, change_implementation) \
	(somSelf,ev,obj,impl))
#ifndef SOMGD_change_implementation
    #if (defined(_change_implementation) || defined(__change_implementation))
        #undef _change_implementation
        #undef __change_implementation
        #define SOMGD_change_implementation 1
    #else
        #define _change_implementation BOA_change_implementation
    #endif /* _change_implementation */
#endif /* SOMGD_change_implementation */

/*
 * New Method: obj_is_ready
 */
typedef void   SOMLINK somTP_BOA_obj_is_ready(BOA *somSelf, Environment *ev, 
		SOMDObject* obj, 
		ImplementationDef* impl);
#pragma linkage(somTP_BOA_obj_is_ready, system)
typedef somTP_BOA_obj_is_ready *somTD_BOA_obj_is_ready;
/*
 *  Indicate that the object is ready to process requests.
 *  (NOTE: Null implementation in this release of DSOM.)
 */
#define somMD_BOA_obj_is_ready "::BOA::obj_is_ready"
#define BOA_obj_is_ready(somSelf,ev,obj,impl) \
    (SOM_Resolve(somSelf, BOA, obj_is_ready) \
	(somSelf,ev,obj,impl))
#ifndef SOMGD_obj_is_ready
    #if (defined(_obj_is_ready) || defined(__obj_is_ready))
        #undef _obj_is_ready
        #undef __obj_is_ready
        #define SOMGD_obj_is_ready 1
    #else
        #define _obj_is_ready BOA_obj_is_ready
    #endif /* _obj_is_ready */
#endif /* SOMGD_obj_is_ready */

/*
 * New Method: deactivate_obj
 */
typedef void   SOMLINK somTP_BOA_deactivate_obj(BOA *somSelf, Environment *ev, 
		SOMDObject* obj);
#pragma linkage(somTP_BOA_deactivate_obj, system)
typedef somTP_BOA_deactivate_obj *somTD_BOA_deactivate_obj;
/*
 *  Indicate that the object is no longer ready to process requests.
 *  (NOTE: Null implementation in this release of DSOM.)
 */
#define somMD_BOA_deactivate_obj "::BOA::deactivate_obj"
#define BOA_deactivate_obj(somSelf,ev,obj) \
    (SOM_Resolve(somSelf, BOA, deactivate_obj) \
	(somSelf,ev,obj))
#ifndef SOMGD_deactivate_obj
    #if (defined(_deactivate_obj) || defined(__deactivate_obj))
        #undef _deactivate_obj
        #undef __deactivate_obj
        #define SOMGD_deactivate_obj 1
    #else
        #define _deactivate_obj BOA_deactivate_obj
    #endif /* _deactivate_obj */
#endif /* SOMGD_deactivate_obj */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define BOA_somDefaultInit SOMObject_somDefaultInit
#define BOA_somDestruct SOMObject_somDestruct
#define BOA_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define BOA_somDefaultAssign SOMObject_somDefaultAssign
#define BOA_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define BOA_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define BOA_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define BOA_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define BOA_somDefaultVAssign SOMObject_somDefaultVAssign
#define BOA_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define BOA_somInit SOMObject_somInit
#define BOA_somFree SOMObject_somFree
#define BOA_somUninit SOMObject_somUninit
#define BOA_somGetClass SOMObject_somGetClass
#define BOA_somGetClassName SOMObject_somGetClassName
#define BOA_somGetSize SOMObject_somGetSize
#define BOA_somIsA SOMObject_somIsA
#define BOA_somIsInstanceOf SOMObject_somIsInstanceOf
#define BOA_somRespondsTo SOMObject_somRespondsTo
#define BOA_somDispatch SOMObject_somDispatch
#define BOA_somClassDispatch SOMObject_somClassDispatch
#define BOA_somCastObj SOMObject_somCastObj
#define BOA_somResetObj SOMObject_somResetObj
#define BOA_somDispatchV SOMObject_somDispatchV
#define BOA_somDispatchL SOMObject_somDispatchL
#define BOA_somDispatchA SOMObject_somDispatchA
#define BOA_somDispatchD SOMObject_somDispatchD
#define BOA_somPrintSelf SOMObject_somPrintSelf
#define BOA_somDumpSelf SOMObject_somDumpSelf
#define BOA_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_BOA_h */
