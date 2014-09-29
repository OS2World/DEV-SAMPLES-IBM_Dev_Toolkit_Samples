
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wptape.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPTAPE
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPDevTape_h
#define SOM_WPDevTape_h


/*
 * Passthru lines: File: "C.h", "before"
 */



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
#ifndef WPDevTape
#define WPDevTape SOMObject
#endif
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef WPFolder
    #define WPFolder SOMObject
#endif /* WPFolder */
#ifndef M_WPObject
    #define M_WPObject SOMObject
#endif /* M_WPObject */
#ifndef WPObject
    #define WPObject SOMObject
#endif /* WPObject */
#ifndef WPImageFile
    #define WPImageFile SOMObject
#endif /* WPImageFile */
#ifndef M_WPTransient
    #define M_WPTransient SOMObject
#endif /* M_WPTransient */
#ifndef M_WPDevice
    #define M_WPDevice SOMObject
#endif /* M_WPDevice */
#ifndef M_WPDevTape
    #define M_WPDevTape SOMObject
#endif /* M_WPDevTape */

/*
 * End of bindings for IDL types.
 */

#define WPDevTape_MajorVersion 1
#define WPDevTape_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPDevTapeNewClass wptapec
#pragma linkage(wptapec, system)
#define WPDevTapeClassData wptaped
#define WPDevTapeCClassData wptapex
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wptape.h>
/*--------------Migration------------*/
#define WPDevTape_classObj WPDevTapeClassData.classObject
#define _WPDevTape WPDevTape_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPDevTapeNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPDevTapeNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPDevTapeClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPDevTapeClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPDevTapeCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPDevTapeCClassData;

/*
 * New and Renew macros for WPDevTape
 */
#define WPDevTapeNew() \
   ( _WPDevTape ? \
	_somNew(_WPDevTape) \
	: ( WPDevTapeNewClass(\
		WPDevTape_MajorVersion, \
		WPDevTape_MinorVersion),\
	   _somNew(_WPDevTape)))
#define WPDevTapeRenew(buf) \
   ( _WPDevTape ? \
	_somRenew(_WPDevTape, buf) \
	: ( WPDevTapeNewClass(\
		WPDevTape_MajorVersion, \
		WPDevTape_MinorVersion),\
	   _somRenew(_WPDevTape, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPDevTape_wpAddDeviceDevice1Page WPDevice_wpAddDeviceDevice1Page
#define WPDevTape_wpAddDeviceDevice2Page WPDevice_wpAddDeviceDevice2Page
#define WPDevTape_wpAddDeviceDMA1Page WPDevice_wpAddDeviceDMA1Page
#define WPDevTape_wpAddDeviceIRQ1Page WPDevice_wpAddDeviceIRQ1Page
#define WPDevTape_wpAddDeviceMemory1Page WPDevice_wpAddDeviceMemory1Page
#define WPDevTape_wpAddDeviceIO1Page WPDevice_wpAddDeviceIO1Page
#define WPDevTape_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPDevTape_wpInitData WPObject_wpInitData
#define WPDevTape_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPDevTape_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPDevTape_wpRestoreState WPObject_wpRestoreState
#define WPDevTape_wpSaveState WPObject_wpSaveState
#define WPDevTape_wpSetup WPObject_wpSetup
#define WPDevTape_wpUnInitData WPObject_wpUnInitData
#define WPDevTape_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPDevTape_wpQueryHandle WPObject_wpQueryHandle
#define WPDevTape_wpCopyObject WPObject_wpCopyObject
#define WPDevTape_somDefaultInit SOMObject_somDefaultInit
#define WPDevTape_somDestruct SOMObject_somDestruct
#define WPDevTape_wpQueryIcon WPObject_wpQueryIcon
#define WPDevTape_wpSaveImmediate WPObject_wpSaveImmediate
#define WPDevTape_wpIdentify WPObject_wpIdentify
#define WPDevTape_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPDevTape_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPDevTape_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPDevTape_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPDevTape_wpAllocMem WPObject_wpAllocMem
#define WPDevTape_wpAppendObject WPObject_wpAppendObject
#define WPDevTape_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPDevTape_wpClose WPObject_wpClose
#define WPDevTape_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPDevTape_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPDevTape_wpConfirmDelete WPObject_wpConfirmDelete
#define WPDevTape_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPDevTape_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPDevTape_wpCreateAnother WPObject_wpCreateAnother
#define WPDevTape_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPDevTape_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPDevTape_wpDelete WPObject_wpDelete
#define WPDevTape_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPDevTape_wpDisplayHelp WPObject_wpDisplayHelp
#define WPDevTape_wpDisplayMenu WPObject_wpDisplayMenu
#define WPDevTape_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPDevTape_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPDevTape_wpDragOver WPObject_wpDragOver
#define WPDevTape_wpDrop WPObject_wpDrop
#define WPDevTape_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPDevTape_wpEndConversation WPObject_wpEndConversation
#define WPDevTape_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPDevTape_wpFilterMenu WPObject_wpFilterMenu
#define WPDevTape_wpFindUseItem WPObject_wpFindUseItem
#define WPDevTape_wpFormatDragItem WPObject_wpFormatDragItem
#define WPDevTape_wpFree WPObject_wpFree
#define WPDevTape_wpFreeMem WPObject_wpFreeMem
#define WPDevTape_wpHide WPObject_wpHide
#define WPDevTape_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPDevTape_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPDevTape_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPDevTape_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPDevTape_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPDevTape_wpModifyMenu WPObject_wpModifyMenu
#define WPDevTape_wpMoveObject WPObject_wpMoveObject
#define WPDevTape_wpOpen WPObject_wpOpen
#define WPDevTape_wpPrintObject WPObject_wpPrintObject
#define WPDevTape_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPDevTape_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPDevTape_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPDevTape_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPDevTape_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPDevTape_wpQueryError WPObject_wpQueryError
#define WPDevTape_wpSetFolder WPObject_wpSetFolder
#define WPDevTape_wpQueryFolder WPObject_wpQueryFolder
#define WPDevTape_wpQueryIconData WPObject_wpQueryIconData
#define WPDevTape_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPDevTape_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPDevTape_wpQueryStyle WPObject_wpQueryStyle
#define WPDevTape_wpSetTaskRec WPObject_wpSetTaskRec
#define WPDevTape_wpFindTaskRec WPObject_wpFindTaskRec
#define WPDevTape_wpQueryTitle WPObject_wpQueryTitle
#define WPDevTape_wpRegisterView WPObject_wpRegisterView
#define WPDevTape_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPDevTape_wpRender WPObject_wpRender
#define WPDevTape_wpRenderComplete WPObject_wpRenderComplete
#define WPDevTape_wpReplaceObject WPObject_wpReplaceObject
#define WPDevTape_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPDevTape_wpRestore WPObject_wpRestore
#define WPDevTape_wpRestoreData WPObject_wpRestoreData
#define WPDevTape_wpRestoreLong WPObject_wpRestoreLong
#define WPDevTape_wpRestoreString WPObject_wpRestoreString
#define WPDevTape_wpSaveData WPObject_wpSaveData
#define WPDevTape_wpSaveDeferred WPObject_wpSaveDeferred
#define WPDevTape_wpSaveLong WPObject_wpSaveLong
#define WPDevTape_wpSaveString WPObject_wpSaveString
#define WPDevTape_wpScanSetupString WPObject_wpScanSetupString
#define WPDevTape_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPDevTape_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPDevTape_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPDevTape_wpSetDefaultView WPObject_wpSetDefaultView
#define WPDevTape_wpSetError WPObject_wpSetError
#define WPDevTape_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPDevTape_wpSetupOnce WPObject_wpSetupOnce
#define WPDevTape_wpSetIcon WPObject_wpSetIcon
#define WPDevTape_wpSetIconData WPObject_wpSetIconData
#define WPDevTape_wpSetMinWindow WPObject_wpSetMinWindow
#define WPDevTape_wpModifyStyle WPObject_wpModifyStyle
#define WPDevTape_wpSetTitle WPObject_wpSetTitle
#define WPDevTape_wpSwitchTo WPObject_wpSwitchTo
#define WPDevTape_wpViewObject WPObject_wpViewObject
#define WPDevTape_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPDevTape_wpUnlockObject WPObject_wpUnlockObject
#define WPDevTape_wpObjectReady WPObject_wpObjectReady
#define WPDevTape_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPDevTape_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPDevTape_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPDevTape_wpIsDeleteable WPObject_wpIsDeleteable
#define WPDevTape_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPDevTape_wpSetObjectID WPObject_wpSetObjectID
#define WPDevTape_wpQueryObjectID WPObject_wpQueryObjectID
#define WPDevTape_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPDevTape_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPDevTape_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPDevTape_wpFindViewItem WPObject_wpFindViewItem
#define WPDevTape_wpLockObject WPObject_wpLockObject
#define WPDevTape_wpIsLocked WPObject_wpIsLocked
#define WPDevTape_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPDevTape_wpWaitForClose WPObject_wpWaitForClose
#define WPDevTape_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPDevTape_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPDevTape_wpSetStyle WPObject_wpSetStyle
#define WPDevTape_somInit SOMObject_somInit
#define WPDevTape_somUninit SOMObject_somUninit
#define WPDevTape_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPDevTape_somDefaultAssign SOMObject_somDefaultAssign
#define WPDevTape_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPDevTape_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPDevTape_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPDevTape_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPDevTape_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPDevTape_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPDevTape_somFree SOMObject_somFree
#define WPDevTape_somGetClass SOMObject_somGetClass
#define WPDevTape_somGetClassName SOMObject_somGetClassName
#define WPDevTape_somGetSize SOMObject_somGetSize
#define WPDevTape_somIsA SOMObject_somIsA
#define WPDevTape_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPDevTape_somRespondsTo SOMObject_somRespondsTo
#define WPDevTape_somDispatch SOMObject_somDispatch
#define WPDevTape_somClassDispatch SOMObject_somClassDispatch
#define WPDevTape_somCastObj SOMObject_somCastObj
#define WPDevTape_somResetObj SOMObject_somResetObj
#define WPDevTape_somDispatchV SOMObject_somDispatchV
#define WPDevTape_somDispatchL SOMObject_somDispatchL
#define WPDevTape_somDispatchA SOMObject_somDispatchA
#define WPDevTape_somDispatchD SOMObject_somDispatchD
#define WPDevTape_somPrintSelf SOMObject_somPrintSelf
#define WPDevTape_somDumpSelf SOMObject_somDumpSelf
#define WPDevTape_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPDevTape_h */

#ifndef SOM_M_WPDevTape_h
#define SOM_M_WPDevTape_h


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
#ifndef M_WPDevTape
#define M_WPDevTape SOMObject
#endif
/*
 *  New class methods section
 */
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPDevTape_MajorVersion 1
#define M_WPDevTape_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPDevTapeNewClass wptapec
#pragma linkage(wptapec, system)
#define M_WPDevTapeClassData wptaped
#define M_WPDevTapeCClassData wptapex
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPDevTape_classObj M_WPDevTapeClassData.classObject
#define _M_WPDevTape M_WPDevTape_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPDevTapeNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPDevTapeNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPDevTapeClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPDevTapeClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPDevTapeCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPDevTapeCClassData;

/*
 * New and Renew macros for M_WPDevTape
 */
#define M_WPDevTapeNew() \
   ( _M_WPDevTape ? \
	_somNew(_M_WPDevTape) \
	: ( M_WPDevTapeNewClass(\
		M_WPDevTape_MajorVersion, \
		M_WPDevTape_MinorVersion),\
	   _somNew(_M_WPDevTape)))
#define M_WPDevTapeRenew(buf) \
   ( _M_WPDevTape ? \
	_somRenew(_M_WPDevTape, buf) \
	: ( M_WPDevTapeNewClass(\
		M_WPDevTape_MajorVersion, \
		M_WPDevTape_MinorVersion),\
	   _somRenew(_M_WPDevTape, buf)))

/*
 * Override method: wpclsInitData
 */
#define M_WPDevTape_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPDevTape_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPDevTape_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsUnInitData
 */
#define M_WPDevTape_wpclsUnInitData(somSelf) \
	M_WPObject_wpclsUnInitData(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPDevTape_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPDevTape_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPDevTape_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPDevTape_wpclsQueryStyle M_WPObject_wpclsQueryStyle
#define M_WPDevTape_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPDevTape_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPDevTape_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPDevTape_wpclsNew M_WPObject_wpclsNew
#define M_WPDevTape_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPDevTape_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPDevTape_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPDevTape_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPDevTape_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPDevTape_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPDevTape_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPDevTape_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPDevTape_wpclsSetError M_WPObject_wpclsSetError
#define M_WPDevTape_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPDevTape_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPDevTape_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPDevTape_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPDevTape_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPDevTape_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPDevTape_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPDevTape_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPDevTape_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPDevTape_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPDevTape_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPDevTape_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPDevTape_somUninit SOMObject_somUninit
#define M_WPDevTape_somClassReady SOMClass_somClassReady
#define M_WPDevTape_somNew SOMClass_somNew
#define M_WPDevTape_somRenew SOMClass_somRenew
#define M_WPDevTape__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPDevTape__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPDevTape__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPDevTape__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPDevTape_somNewNoInit SOMClass_somNewNoInit
#define M_WPDevTape_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPDevTape_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPDevTape_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPDevTape_somAllocate SOMClass_somAllocate
#define M_WPDevTape_somDeallocate SOMClass_somDeallocate
#define M_WPDevTape__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPDevTape__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPDevTape_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPDevTape_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPDevTape_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPDevTape_somInitClass SOMClass_somInitClass
#define M_WPDevTape_somInitMIClass SOMClass_somInitMIClass
#define M_WPDevTape_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPDevTape_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPDevTape_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPDevTape_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPDevTape_somGetClassData SOMClass_somGetClassData
#define M_WPDevTape_somSetClassData SOMClass_somSetClassData
#define M_WPDevTape_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPDevTape_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPDevTape_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPDevTape_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPDevTape_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPDevTape_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPDevTape_somGetMethodData SOMClass_somGetMethodData
#define M_WPDevTape_somGetRdStub SOMClass_somGetRdStub
#define M_WPDevTape_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPDevTape_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPDevTape_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPDevTape_somGetName SOMClass_somGetName
#define M_WPDevTape_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPDevTape_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPDevTape_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPDevTape_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPDevTape_somGetParent SOMClass_somGetParent
#define M_WPDevTape_somGetParents SOMClass_somGetParents
#define M_WPDevTape_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPDevTape_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPDevTape_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPDevTape_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPDevTape_somFindMethod SOMClass_somFindMethod
#define M_WPDevTape_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPDevTape_somFindSMethod SOMClass_somFindSMethod
#define M_WPDevTape_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPDevTape_somLookupMethod SOMClass_somLookupMethod
#define M_WPDevTape_somCheckVersion SOMClass_somCheckVersion
#define M_WPDevTape_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPDevTape_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPDevTape_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPDevTape_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPDevTape_somDefaultInit SOMObject_somDefaultInit
#define M_WPDevTape_somDestruct SOMObject_somDestruct
#define M_WPDevTape_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPDevTape_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPDevTape_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPDevTape_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPDevTape_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPDevTape_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPDevTape_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPDevTape_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPDevTape_somInit SOMObject_somInit
#define M_WPDevTape_somFree SOMObject_somFree
#define M_WPDevTape_somGetClass SOMObject_somGetClass
#define M_WPDevTape_somGetClassName SOMObject_somGetClassName
#define M_WPDevTape_somGetSize SOMObject_somGetSize
#define M_WPDevTape_somIsA SOMObject_somIsA
#define M_WPDevTape_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPDevTape_somRespondsTo SOMObject_somRespondsTo
#define M_WPDevTape_somDispatch SOMObject_somDispatch
#define M_WPDevTape_somClassDispatch SOMObject_somClassDispatch
#define M_WPDevTape_somCastObj SOMObject_somCastObj
#define M_WPDevTape_somResetObj SOMObject_somResetObj
#define M_WPDevTape_somDispatchV SOMObject_somDispatchV
#define M_WPDevTape_somDispatchL SOMObject_somDispatchL
#define M_WPDevTape_somDispatchA SOMObject_somDispatchA
#define M_WPDevTape_somDispatchD SOMObject_somDispatchD
#define M_WPDevTape_somPrintSelf SOMObject_somPrintSelf
#define M_WPDevTape_somDumpSelf SOMObject_somDumpSelf
#define M_WPDevTape_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPDevTape_h */
