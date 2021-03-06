
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpmoused.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPMOUSED
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPDevMouse_h
#define SOM_WPDevMouse_h


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
#ifndef WPDevMouse
#define WPDevMouse SOMObject
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
#ifndef M_WPDevMouse
    #define M_WPDevMouse SOMObject
#endif /* M_WPDevMouse */

/*
 * End of bindings for IDL types.
 */

#define WPDevMouse_MajorVersion 1
#define WPDevMouse_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPDevMouseNewClass wpmousedc
#pragma linkage(wpmousedc, system)
#define WPDevMouseClassData wpmousedd
#define WPDevMouseCClassData wpmousedx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpmoused.h>
/*--------------Migration------------*/
#define WPDevMouse_classObj WPDevMouseClassData.classObject
#define _WPDevMouse WPDevMouse_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPDevMouseNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPDevMouseNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPDevMouseClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPDevMouseClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPDevMouseCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPDevMouseCClassData;

/*
 * New and Renew macros for WPDevMouse
 */
#define WPDevMouseNew() \
   ( _WPDevMouse ? \
	_somNew(_WPDevMouse) \
	: ( WPDevMouseNewClass(\
		WPDevMouse_MajorVersion, \
		WPDevMouse_MinorVersion),\
	   _somNew(_WPDevMouse)))
#define WPDevMouseRenew(buf) \
   ( _WPDevMouse ? \
	_somRenew(_WPDevMouse, buf) \
	: ( WPDevMouseNewClass(\
		WPDevMouse_MajorVersion, \
		WPDevMouse_MinorVersion),\
	   _somRenew(_WPDevMouse, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPDevMouse_wpAddDeviceDevice1Page WPDevice_wpAddDeviceDevice1Page
#define WPDevMouse_wpAddDeviceDevice2Page WPDevice_wpAddDeviceDevice2Page
#define WPDevMouse_wpAddDeviceDMA1Page WPDevice_wpAddDeviceDMA1Page
#define WPDevMouse_wpAddDeviceIRQ1Page WPDevice_wpAddDeviceIRQ1Page
#define WPDevMouse_wpAddDeviceMemory1Page WPDevice_wpAddDeviceMemory1Page
#define WPDevMouse_wpAddDeviceIO1Page WPDevice_wpAddDeviceIO1Page
#define WPDevMouse_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPDevMouse_wpInitData WPObject_wpInitData
#define WPDevMouse_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPDevMouse_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPDevMouse_wpRestoreState WPObject_wpRestoreState
#define WPDevMouse_wpSaveState WPObject_wpSaveState
#define WPDevMouse_wpSetup WPObject_wpSetup
#define WPDevMouse_wpUnInitData WPObject_wpUnInitData
#define WPDevMouse_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPDevMouse_wpQueryHandle WPObject_wpQueryHandle
#define WPDevMouse_wpCopyObject WPObject_wpCopyObject
#define WPDevMouse_somDefaultInit SOMObject_somDefaultInit
#define WPDevMouse_somDestruct SOMObject_somDestruct
#define WPDevMouse_wpQueryIcon WPObject_wpQueryIcon
#define WPDevMouse_wpSaveImmediate WPObject_wpSaveImmediate
#define WPDevMouse_wpIdentify WPObject_wpIdentify
#define WPDevMouse_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPDevMouse_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPDevMouse_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPDevMouse_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPDevMouse_wpAllocMem WPObject_wpAllocMem
#define WPDevMouse_wpAppendObject WPObject_wpAppendObject
#define WPDevMouse_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPDevMouse_wpClose WPObject_wpClose
#define WPDevMouse_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPDevMouse_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPDevMouse_wpConfirmDelete WPObject_wpConfirmDelete
#define WPDevMouse_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPDevMouse_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPDevMouse_wpCreateAnother WPObject_wpCreateAnother
#define WPDevMouse_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPDevMouse_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPDevMouse_wpDelete WPObject_wpDelete
#define WPDevMouse_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPDevMouse_wpDisplayHelp WPObject_wpDisplayHelp
#define WPDevMouse_wpDisplayMenu WPObject_wpDisplayMenu
#define WPDevMouse_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPDevMouse_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPDevMouse_wpDragOver WPObject_wpDragOver
#define WPDevMouse_wpDrop WPObject_wpDrop
#define WPDevMouse_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPDevMouse_wpEndConversation WPObject_wpEndConversation
#define WPDevMouse_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPDevMouse_wpFilterMenu WPObject_wpFilterMenu
#define WPDevMouse_wpFindUseItem WPObject_wpFindUseItem
#define WPDevMouse_wpFormatDragItem WPObject_wpFormatDragItem
#define WPDevMouse_wpFree WPObject_wpFree
#define WPDevMouse_wpFreeMem WPObject_wpFreeMem
#define WPDevMouse_wpHide WPObject_wpHide
#define WPDevMouse_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPDevMouse_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPDevMouse_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPDevMouse_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPDevMouse_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPDevMouse_wpModifyMenu WPObject_wpModifyMenu
#define WPDevMouse_wpMoveObject WPObject_wpMoveObject
#define WPDevMouse_wpOpen WPObject_wpOpen
#define WPDevMouse_wpPrintObject WPObject_wpPrintObject
#define WPDevMouse_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPDevMouse_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPDevMouse_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPDevMouse_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPDevMouse_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPDevMouse_wpQueryError WPObject_wpQueryError
#define WPDevMouse_wpSetFolder WPObject_wpSetFolder
#define WPDevMouse_wpQueryFolder WPObject_wpQueryFolder
#define WPDevMouse_wpQueryIconData WPObject_wpQueryIconData
#define WPDevMouse_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPDevMouse_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPDevMouse_wpQueryStyle WPObject_wpQueryStyle
#define WPDevMouse_wpSetTaskRec WPObject_wpSetTaskRec
#define WPDevMouse_wpFindTaskRec WPObject_wpFindTaskRec
#define WPDevMouse_wpQueryTitle WPObject_wpQueryTitle
#define WPDevMouse_wpRegisterView WPObject_wpRegisterView
#define WPDevMouse_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPDevMouse_wpRender WPObject_wpRender
#define WPDevMouse_wpRenderComplete WPObject_wpRenderComplete
#define WPDevMouse_wpReplaceObject WPObject_wpReplaceObject
#define WPDevMouse_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPDevMouse_wpRestore WPObject_wpRestore
#define WPDevMouse_wpRestoreData WPObject_wpRestoreData
#define WPDevMouse_wpRestoreLong WPObject_wpRestoreLong
#define WPDevMouse_wpRestoreString WPObject_wpRestoreString
#define WPDevMouse_wpSaveData WPObject_wpSaveData
#define WPDevMouse_wpSaveDeferred WPObject_wpSaveDeferred
#define WPDevMouse_wpSaveLong WPObject_wpSaveLong
#define WPDevMouse_wpSaveString WPObject_wpSaveString
#define WPDevMouse_wpScanSetupString WPObject_wpScanSetupString
#define WPDevMouse_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPDevMouse_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPDevMouse_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPDevMouse_wpSetDefaultView WPObject_wpSetDefaultView
#define WPDevMouse_wpSetError WPObject_wpSetError
#define WPDevMouse_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPDevMouse_wpSetupOnce WPObject_wpSetupOnce
#define WPDevMouse_wpSetIcon WPObject_wpSetIcon
#define WPDevMouse_wpSetIconData WPObject_wpSetIconData
#define WPDevMouse_wpSetMinWindow WPObject_wpSetMinWindow
#define WPDevMouse_wpModifyStyle WPObject_wpModifyStyle
#define WPDevMouse_wpSetTitle WPObject_wpSetTitle
#define WPDevMouse_wpSwitchTo WPObject_wpSwitchTo
#define WPDevMouse_wpViewObject WPObject_wpViewObject
#define WPDevMouse_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPDevMouse_wpUnlockObject WPObject_wpUnlockObject
#define WPDevMouse_wpObjectReady WPObject_wpObjectReady
#define WPDevMouse_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPDevMouse_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPDevMouse_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPDevMouse_wpIsDeleteable WPObject_wpIsDeleteable
#define WPDevMouse_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPDevMouse_wpSetObjectID WPObject_wpSetObjectID
#define WPDevMouse_wpQueryObjectID WPObject_wpQueryObjectID
#define WPDevMouse_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPDevMouse_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPDevMouse_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPDevMouse_wpFindViewItem WPObject_wpFindViewItem
#define WPDevMouse_wpLockObject WPObject_wpLockObject
#define WPDevMouse_wpIsLocked WPObject_wpIsLocked
#define WPDevMouse_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPDevMouse_wpWaitForClose WPObject_wpWaitForClose
#define WPDevMouse_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPDevMouse_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPDevMouse_wpSetStyle WPObject_wpSetStyle
#define WPDevMouse_somInit SOMObject_somInit
#define WPDevMouse_somUninit SOMObject_somUninit
#define WPDevMouse_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPDevMouse_somDefaultAssign SOMObject_somDefaultAssign
#define WPDevMouse_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPDevMouse_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPDevMouse_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPDevMouse_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPDevMouse_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPDevMouse_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPDevMouse_somFree SOMObject_somFree
#define WPDevMouse_somGetClass SOMObject_somGetClass
#define WPDevMouse_somGetClassName SOMObject_somGetClassName
#define WPDevMouse_somGetSize SOMObject_somGetSize
#define WPDevMouse_somIsA SOMObject_somIsA
#define WPDevMouse_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPDevMouse_somRespondsTo SOMObject_somRespondsTo
#define WPDevMouse_somDispatch SOMObject_somDispatch
#define WPDevMouse_somClassDispatch SOMObject_somClassDispatch
#define WPDevMouse_somCastObj SOMObject_somCastObj
#define WPDevMouse_somResetObj SOMObject_somResetObj
#define WPDevMouse_somDispatchV SOMObject_somDispatchV
#define WPDevMouse_somDispatchL SOMObject_somDispatchL
#define WPDevMouse_somDispatchA SOMObject_somDispatchA
#define WPDevMouse_somDispatchD SOMObject_somDispatchD
#define WPDevMouse_somPrintSelf SOMObject_somPrintSelf
#define WPDevMouse_somDumpSelf SOMObject_somDumpSelf
#define WPDevMouse_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPDevMouse_h */

#ifndef SOM_M_WPDevMouse_h
#define SOM_M_WPDevMouse_h


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
#ifndef M_WPDevMouse
#define M_WPDevMouse SOMObject
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

#define M_WPDevMouse_MajorVersion 1
#define M_WPDevMouse_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPDevMouseNewClass wpmousedc
#pragma linkage(wpmousedc, system)
#define M_WPDevMouseClassData wpmousedd
#define M_WPDevMouseCClassData wpmousedx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPDevMouse_classObj M_WPDevMouseClassData.classObject
#define _M_WPDevMouse M_WPDevMouse_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPDevMouseNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPDevMouseNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPDevMouseClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPDevMouseClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPDevMouseCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPDevMouseCClassData;

/*
 * New and Renew macros for M_WPDevMouse
 */
#define M_WPDevMouseNew() \
   ( _M_WPDevMouse ? \
	_somNew(_M_WPDevMouse) \
	: ( M_WPDevMouseNewClass(\
		M_WPDevMouse_MajorVersion, \
		M_WPDevMouse_MinorVersion),\
	   _somNew(_M_WPDevMouse)))
#define M_WPDevMouseRenew(buf) \
   ( _M_WPDevMouse ? \
	_somRenew(_M_WPDevMouse, buf) \
	: ( M_WPDevMouseNewClass(\
		M_WPDevMouse_MajorVersion, \
		M_WPDevMouse_MinorVersion),\
	   _somRenew(_M_WPDevMouse, buf)))

/*
 * Override method: wpclsInitData
 */
#define M_WPDevMouse_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPDevMouse_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPDevMouse_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsUnInitData
 */
#define M_WPDevMouse_wpclsUnInitData(somSelf) \
	M_WPObject_wpclsUnInitData(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPDevMouse_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPDevMouse_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPDevMouse_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPDevMouse_wpclsQueryStyle M_WPObject_wpclsQueryStyle
#define M_WPDevMouse_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPDevMouse_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPDevMouse_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPDevMouse_wpclsNew M_WPObject_wpclsNew
#define M_WPDevMouse_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPDevMouse_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPDevMouse_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPDevMouse_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPDevMouse_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPDevMouse_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPDevMouse_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPDevMouse_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPDevMouse_wpclsSetError M_WPObject_wpclsSetError
#define M_WPDevMouse_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPDevMouse_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPDevMouse_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPDevMouse_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPDevMouse_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPDevMouse_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPDevMouse_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPDevMouse_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPDevMouse_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPDevMouse_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPDevMouse_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPDevMouse_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPDevMouse_somUninit SOMObject_somUninit
#define M_WPDevMouse_somClassReady SOMClass_somClassReady
#define M_WPDevMouse_somNew SOMClass_somNew
#define M_WPDevMouse_somRenew SOMClass_somRenew
#define M_WPDevMouse__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPDevMouse__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPDevMouse__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPDevMouse__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPDevMouse_somNewNoInit SOMClass_somNewNoInit
#define M_WPDevMouse_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPDevMouse_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPDevMouse_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPDevMouse_somAllocate SOMClass_somAllocate
#define M_WPDevMouse_somDeallocate SOMClass_somDeallocate
#define M_WPDevMouse__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPDevMouse__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPDevMouse_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPDevMouse_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPDevMouse_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPDevMouse_somInitClass SOMClass_somInitClass
#define M_WPDevMouse_somInitMIClass SOMClass_somInitMIClass
#define M_WPDevMouse_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPDevMouse_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPDevMouse_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPDevMouse_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPDevMouse_somGetClassData SOMClass_somGetClassData
#define M_WPDevMouse_somSetClassData SOMClass_somSetClassData
#define M_WPDevMouse_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPDevMouse_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPDevMouse_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPDevMouse_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPDevMouse_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPDevMouse_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPDevMouse_somGetMethodData SOMClass_somGetMethodData
#define M_WPDevMouse_somGetRdStub SOMClass_somGetRdStub
#define M_WPDevMouse_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPDevMouse_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPDevMouse_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPDevMouse_somGetName SOMClass_somGetName
#define M_WPDevMouse_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPDevMouse_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPDevMouse_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPDevMouse_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPDevMouse_somGetParent SOMClass_somGetParent
#define M_WPDevMouse_somGetParents SOMClass_somGetParents
#define M_WPDevMouse_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPDevMouse_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPDevMouse_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPDevMouse_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPDevMouse_somFindMethod SOMClass_somFindMethod
#define M_WPDevMouse_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPDevMouse_somFindSMethod SOMClass_somFindSMethod
#define M_WPDevMouse_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPDevMouse_somLookupMethod SOMClass_somLookupMethod
#define M_WPDevMouse_somCheckVersion SOMClass_somCheckVersion
#define M_WPDevMouse_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPDevMouse_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPDevMouse_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPDevMouse_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPDevMouse_somDefaultInit SOMObject_somDefaultInit
#define M_WPDevMouse_somDestruct SOMObject_somDestruct
#define M_WPDevMouse_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPDevMouse_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPDevMouse_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPDevMouse_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPDevMouse_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPDevMouse_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPDevMouse_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPDevMouse_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPDevMouse_somInit SOMObject_somInit
#define M_WPDevMouse_somFree SOMObject_somFree
#define M_WPDevMouse_somGetClass SOMObject_somGetClass
#define M_WPDevMouse_somGetClassName SOMObject_somGetClassName
#define M_WPDevMouse_somGetSize SOMObject_somGetSize
#define M_WPDevMouse_somIsA SOMObject_somIsA
#define M_WPDevMouse_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPDevMouse_somRespondsTo SOMObject_somRespondsTo
#define M_WPDevMouse_somDispatch SOMObject_somDispatch
#define M_WPDevMouse_somClassDispatch SOMObject_somClassDispatch
#define M_WPDevMouse_somCastObj SOMObject_somCastObj
#define M_WPDevMouse_somResetObj SOMObject_somResetObj
#define M_WPDevMouse_somDispatchV SOMObject_somDispatchV
#define M_WPDevMouse_somDispatchL SOMObject_somDispatchL
#define M_WPDevMouse_somDispatchA SOMObject_somDispatchA
#define M_WPDevMouse_somDispatchD SOMObject_somDispatchD
#define M_WPDevMouse_somPrintSelf SOMObject_somPrintSelf
#define M_WPDevMouse_somDumpSelf SOMObject_somDumpSelf
#define M_WPDevMouse_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPDevMouse_h */
