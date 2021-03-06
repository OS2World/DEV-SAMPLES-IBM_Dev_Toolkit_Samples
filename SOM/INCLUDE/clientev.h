
/*
 * This file was generated by the SOM Compiler.
 * FileName: clientev.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somu
 * 
 *    ORIGINS: 27
 * 
 * 
 *    10H9767, 10H9769  (C) COPYRIGHT International Business Machines Corp. 1992,1994
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_SOMEClientEvent_h
#define SOM_SOMEClientEvent_h


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
#ifndef SOMEClientEvent
#define SOMEClientEvent SOMObject
#endif
/*
 *  SOMEClientEvent is the class for generic client events within the Event Manager.
 *  This class should be queried for events of the following type(s):
 *       EMClientEvent
 * 
 *  An instance of this class is initialized and passed to the
 *  callback routine for all client events regardless of their clientevent type.
 */
#include <event.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define SOMEClientEvent_MajorVersion 2
#define SOMEClientEvent_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMEClientEventNewClass c
#pragma linkage(c, system)
#define SOMEClientEventClassData d
#define SOMEClientEventCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMEClientEvent_classObj SOMEClientEventClassData.classObject
#define _SOMEClientEvent SOMEClientEvent_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMEClientEventNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMEClientEventNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMEClientEventClassDataStructure {
	SOMClass *classObject;
	somMToken somevGetEventClientData;
	somMToken somevGetEventClientType;
	somMToken somevSetEventClientData;
	somMToken somevSetEventClientType;
} SOMDLINK SOMEClientEventClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMEClientEventCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMEClientEventCClassData;

/*
 * New and Renew macros for SOMEClientEvent
 */
#define SOMEClientEventNew() \
   ( _SOMEClientEvent ? \
	_somNew(_SOMEClientEvent) \
	: ( SOMEClientEventNewClass(\
		SOMEClientEvent_MajorVersion, \
		SOMEClientEvent_MinorVersion),\
	   _somNew(_SOMEClientEvent)))
#define SOMEClientEventRenew(buf) \
   ( _SOMEClientEvent ? \
	_somRenew(_SOMEClientEvent, buf) \
	: ( SOMEClientEventNewClass(\
		SOMEClientEvent_MajorVersion, \
		SOMEClientEvent_MinorVersion),\
	   _somRenew(_SOMEClientEvent, buf)))

/*
 * Override method: somInit
 */
#define SOMEClientEvent_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * New Method: somevGetEventClientData
 */
typedef void*   SOMLINK somTP_SOMEClientEvent_somevGetEventClientData(SOMEClientEvent *somSelf, Environment *ev);
#pragma linkage(somTP_SOMEClientEvent_somevGetEventClientData, system)
typedef somTP_SOMEClientEvent_somevGetEventClientData *somTD_SOMEClientEvent_somevGetEventClientData;
/*
 *  Returns the client data of the generic client event
 */
#define somMD_SOMEClientEvent_somevGetEventClientData "::SOMEClientEvent::somevGetEventClientData"
#define SOMEClientEvent_somevGetEventClientData(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMEClientEvent, somevGetEventClientData) \
	(somSelf,ev))
#ifndef SOMGD_somevGetEventClientData
    #if (defined(_somevGetEventClientData) || defined(__somevGetEventClientData))
        #undef _somevGetEventClientData
        #undef __somevGetEventClientData
        #define SOMGD_somevGetEventClientData 1
    #else
        #define _somevGetEventClientData SOMEClientEvent_somevGetEventClientData
    #endif /* _somevGetEventClientData */
#endif /* SOMGD_somevGetEventClientData */

/*
 * New Method: somevGetEventClientType
 */
typedef string   SOMLINK somTP_SOMEClientEvent_somevGetEventClientType(SOMEClientEvent *somSelf, Environment *ev);
#pragma linkage(somTP_SOMEClientEvent_somevGetEventClientType, system)
typedef somTP_SOMEClientEvent_somevGetEventClientType *somTD_SOMEClientEvent_somevGetEventClientType;
/*
 *  Returns the client type of the generic client event
 */
#define somMD_SOMEClientEvent_somevGetEventClientType "::SOMEClientEvent::somevGetEventClientType"
#define SOMEClientEvent_somevGetEventClientType(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMEClientEvent, somevGetEventClientType) \
	(somSelf,ev))
#ifndef SOMGD_somevGetEventClientType
    #if (defined(_somevGetEventClientType) || defined(__somevGetEventClientType))
        #undef _somevGetEventClientType
        #undef __somevGetEventClientType
        #define SOMGD_somevGetEventClientType 1
    #else
        #define _somevGetEventClientType SOMEClientEvent_somevGetEventClientType
    #endif /* _somevGetEventClientType */
#endif /* SOMGD_somevGetEventClientType */

/*
 * New Method: somevSetEventClientData
 */
typedef void   SOMLINK somTP_SOMEClientEvent_somevSetEventClientData(SOMEClientEvent *somSelf, Environment *ev, 
		void* clientData);
#pragma linkage(somTP_SOMEClientEvent_somevSetEventClientData, system)
typedef somTP_SOMEClientEvent_somevSetEventClientData *somTD_SOMEClientEvent_somevSetEventClientData;
/*
 *  Sets the client type of the generic client event
 */
#define somMD_SOMEClientEvent_somevSetEventClientData "::SOMEClientEvent::somevSetEventClientData"
#define SOMEClientEvent_somevSetEventClientData(somSelf,ev,clientData) \
    (SOM_Resolve(somSelf, SOMEClientEvent, somevSetEventClientData) \
	(somSelf,ev,clientData))
#ifndef SOMGD_somevSetEventClientData
    #if (defined(_somevSetEventClientData) || defined(__somevSetEventClientData))
        #undef _somevSetEventClientData
        #undef __somevSetEventClientData
        #define SOMGD_somevSetEventClientData 1
    #else
        #define _somevSetEventClientData SOMEClientEvent_somevSetEventClientData
    #endif /* _somevSetEventClientData */
#endif /* SOMGD_somevSetEventClientData */

/*
 * New Method: somevSetEventClientType
 */
typedef void   SOMLINK somTP_SOMEClientEvent_somevSetEventClientType(SOMEClientEvent *somSelf, Environment *ev, 
		string clientType);
#pragma linkage(somTP_SOMEClientEvent_somevSetEventClientType, system)
typedef somTP_SOMEClientEvent_somevSetEventClientType *somTD_SOMEClientEvent_somevSetEventClientType;
#define somMD_SOMEClientEvent_somevSetEventClientType "::SOMEClientEvent::somevSetEventClientType"
#define SOMEClientEvent_somevSetEventClientType(somSelf,ev,clientType) \
    (SOM_Resolve(somSelf, SOMEClientEvent, somevSetEventClientType) \
	(somSelf,ev,clientType))
#ifndef SOMGD_somevSetEventClientType
    #if (defined(_somevSetEventClientType) || defined(__somevSetEventClientType))
        #undef _somevSetEventClientType
        #undef __somevSetEventClientType
        #define SOMGD_somevSetEventClientType 1
    #else
        #define _somevSetEventClientType SOMEClientEvent_somevSetEventClientType
    #endif /* _somevSetEventClientType */
#endif /* SOMGD_somevSetEventClientType */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMEClientEvent_somevGetEventTime SOMEEvent_somevGetEventTime
#define SOMEClientEvent_somevGetEventType SOMEEvent_somevGetEventType
#define SOMEClientEvent_somevSetEventTime SOMEEvent_somevSetEventTime
#define SOMEClientEvent_somevSetEventType SOMEEvent_somevSetEventType
#define SOMEClientEvent_somDefaultInit SOMObject_somDefaultInit
#define SOMEClientEvent_somDestruct SOMObject_somDestruct
#define SOMEClientEvent_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMEClientEvent_somDefaultAssign SOMObject_somDefaultAssign
#define SOMEClientEvent_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMEClientEvent_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMEClientEvent_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMEClientEvent_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMEClientEvent_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMEClientEvent_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMEClientEvent_somFree SOMObject_somFree
#define SOMEClientEvent_somUninit SOMObject_somUninit
#define SOMEClientEvent_somGetClass SOMObject_somGetClass
#define SOMEClientEvent_somGetClassName SOMObject_somGetClassName
#define SOMEClientEvent_somGetSize SOMObject_somGetSize
#define SOMEClientEvent_somIsA SOMObject_somIsA
#define SOMEClientEvent_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMEClientEvent_somRespondsTo SOMObject_somRespondsTo
#define SOMEClientEvent_somDispatch SOMObject_somDispatch
#define SOMEClientEvent_somClassDispatch SOMObject_somClassDispatch
#define SOMEClientEvent_somCastObj SOMObject_somCastObj
#define SOMEClientEvent_somResetObj SOMObject_somResetObj
#define SOMEClientEvent_somDispatchV SOMObject_somDispatchV
#define SOMEClientEvent_somDispatchL SOMObject_somDispatchL
#define SOMEClientEvent_somDispatchA SOMObject_somDispatchA
#define SOMEClientEvent_somDispatchD SOMObject_somDispatchD
#define SOMEClientEvent_somPrintSelf SOMObject_somPrintSelf
#define SOMEClientEvent_somDumpSelf SOMObject_somDumpSelf
#define SOMEClientEvent_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMEClientEvent_h */
