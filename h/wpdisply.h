
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpdisply.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPDISPLY
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPDevDisplay_h
#define SOM_WPDevDisplay_h


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
#ifndef WPDevDisplay
#define WPDevDisplay SOMObject
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
#ifndef M_WPDevDisplay
    #define M_WPDevDisplay SOMObject
#endif /* M_WPDevDisplay */

/*
 * End of bindings for IDL types.
 */

#define WPDevDisplay_MajorVersion 1
#define WPDevDisplay_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPDevDisplayNewClass wpdisplyc
#pragma linkage(wpdisplyc, system)
#define WPDevDisplayClassData wpdisplyd
#define WPDevDisplayCClassData wpdisplyx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpdisply.h>
/*--------------Migration------------*/
#define WPDevDisplay_classObj WPDevDisplayClassData.classObject
#define _WPDevDisplay WPDevDisplay_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPDevDisplayNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPDevDisplayNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPDevDisplayClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPDevDisplayClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPDevDisplayCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPDevDisplayCClassData;

/*
 * New and Renew macros for WPDevDisplay
 */
#define WPDevDisplayNew() \
   ( _WPDevDisplay ? \
	_somNew(_WPDevDisplay) \
	: ( WPDevDisplayNewClass(\
		WPDevDisplay_MajorVersion, \
		WPDevDisplay_MinorVersion),\
	   _somNew(_WPDevDisplay)))
#define WPDevDisplayRenew(buf) \
   ( _WPDevDisplay ? \
	_somRenew(_WPDevDisplay, buf) \
	: ( WPDevDisplayNewClass(\
		WPDevDisplay_MajorVersion, \
		WPDevDisplay_MinorVersion),\
	   _somRenew(_WPDevDisplay, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPDevDisplay_wpAddDeviceDevice1Page WPDevice_wpAddDeviceDevice1Page
#define WPDevDisplay_wpAddDeviceDevice2Page WPDevice_wpAddDeviceDevice2Page
#define WPDevDisplay_wpAddDeviceDMA1Page WPDevice_wpAddDeviceDMA1Page
#define WPDevDisplay_wpAddDeviceIRQ1Page WPDevice_wpAddDeviceIRQ1Page
#define WPDevDisplay_wpAddDeviceMemory1Page WPDevice_wpAddDeviceMemory1Page
#define WPDevDisplay_wpAddDeviceIO1Page WPDevice_wpAddDeviceIO1Page
#define WPDevDisplay_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPDevDisplay_wpInitData WPObject_wpInitData
#define WPDevDisplay_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPDevDisplay_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPDevDisplay_wpRestoreState WPObject_wpRestoreState
#define WPDevDisplay_wpSaveState WPObject_wpSaveState
#define WPDevDisplay_wpSetup WPObject_wpSetup
#define WPDevDisplay_wpUnInitData WPObject_wpUnInitData
#define WPDevDisplay_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPDevDisplay_wpQueryHandle WPObject_wpQueryHandle
#define WPDevDisplay_wpCopyObject WPObject_wpCopyObject
#define WPDevDisplay_somDefaultInit SOMObject_somDefaultInit
#define WPDevDisplay_somDestruct SOMObject_somDestruct
#define WPDevDisplay_wpQueryIcon WPObject_wpQueryIcon
#define WPDevDisplay_wpSaveImmediate WPObject_wpSaveImmediate
#define WPDevDisplay_wpIdentify WPObject_wpIdentify
#define WPDevDisplay_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPDevDisplay_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPDevDisplay_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPDevDisplay_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPDevDisplay_wpAllocMem WPObject_wpAllocMem
#define WPDevDisplay_wpAppendObject WPObject_wpAppendObject
#define WPDevDisplay_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPDevDisplay_wpClose WPObject_wpClose
#define WPDevDisplay_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPDevDisplay_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPDevDisplay_wpConfirmDelete WPObject_wpConfirmDelete
#define WPDevDisplay_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPDevDisplay_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPDevDisplay_wpCreateAnother WPObject_wpCreateAnother
#define WPDevDisplay_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPDevDisplay_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPDevDisplay_wpDelete WPObject_wpDelete
#define WPDevDisplay_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPDevDisplay_wpDisplayHelp WPObject_wpDisplayHelp
#define WPDevDisplay_wpDisplayMenu WPObject_wpDisplayMenu
#define WPDevDisplay_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPDevDisplay_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPDevDisplay_wpDragOver WPObject_wpDragOver
#define WPDevDisplay_wpDrop WPObject_wpDrop
#define WPDevDisplay_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPDevDisplay_wpEndConversation WPObject_wpEndConversation
#define WPDevDisplay_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPDevDisplay_wpFilterMenu WPObject_wpFilterMenu
#define WPDevDisplay_wpFindUseItem WPObject_wpFindUseItem
#define WPDevDisplay_wpFormatDragItem WPObject_wpFormatDragItem
#define WPDevDisplay_wpFree WPObject_wpFree
#define WPDevDisplay_wpFreeMem WPObject_wpFreeMem
#define WPDevDisplay_wpHide WPObject_wpHide
#define WPDevDisplay_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPDevDisplay_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPDevDisplay_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPDevDisplay_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPDevDisplay_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPDevDisplay_wpModifyMenu WPObject_wpModifyMenu
#define WPDevDisplay_wpMoveObject WPObject_wpMoveObject
#define WPDevDisplay_wpOpen WPObject_wpOpen
#define WPDevDisplay_wpPrintObject WPObject_wpPrintObject
#define WPDevDisplay_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPDevDisplay_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPDevDisplay_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPDevDisplay_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPDevDisplay_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPDevDisplay_wpQueryError WPObject_wpQueryError
#define WPDevDisplay_wpSetFolder WPObject_wpSetFolder
#define WPDevDisplay_wpQueryFolder WPObject_wpQueryFolder
#define WPDevDisplay_wpQueryIconData WPObject_wpQueryIconData
#define WPDevDisplay_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPDevDisplay_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPDevDisplay_wpQueryStyle WPObject_wpQueryStyle
#define WPDevDisplay_wpSetTaskRec WPObject_wpSetTaskRec
#define WPDevDisplay_wpFindTaskRec WPObject_wpFindTaskRec
#define WPDevDisplay_wpQueryTitle WPObject_wpQueryTitle
#define WPDevDisplay_wpRegisterView WPObject_wpRegisterView
#define WPDevDisplay_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPDevDisplay_wpRender WPObject_wpRender
#define WPDevDisplay_wpRenderComplete WPObject_wpRenderComplete
#define WPDevDisplay_wpReplaceObject WPObject_wpReplaceObject
#define WPDevDisplay_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPDevDisplay_wpRestore WPObject_wpRestore
#define WPDevDisplay_wpRestoreData WPObject_wpRestoreData
#define WPDevDisplay_wpRestoreLong WPObject_wpRestoreLong
#define WPDevDisplay_wpRestoreString WPObject_wpRestoreString
#define WPDevDisplay_wpSaveData WPObject_wpSaveData
#define WPDevDisplay_wpSaveDeferred WPObject_wpSaveDeferred
#define WPDevDisplay_wpSaveLong WPObject_wpSaveLong
#define WPDevDisplay_wpSaveString WPObject_wpSaveString
#define WPDevDisplay_wpScanSetupString WPObject_wpScanSetupString
#define WPDevDisplay_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPDevDisplay_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPDevDisplay_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPDevDisplay_wpSetDefaultView WPObject_wpSetDefaultView
#define WPDevDisplay_wpSetError WPObject_wpSetError
#define WPDevDisplay_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPDevDisplay_wpSetupOnce WPObject_wpSetupOnce
#define WPDevDisplay_wpSetIcon WPObject_wpSetIcon
#define WPDevDisplay_wpSetIconData WPObject_wpSetIconData
#define WPDevDisplay_wpSetMinWindow WPObject_wpSetMinWindow
#define WPDevDisplay_wpModifyStyle WPObject_wpModifyStyle
#define WPDevDisplay_wpSetTitle WPObject_wpSetTitle
#define WPDevDisplay_wpSwitchTo WPObject_wpSwitchTo
#define WPDevDisplay_wpViewObject WPObject_wpViewObject
#define WPDevDisplay_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPDevDisplay_wpUnlockObject WPObject_wpUnlockObject
#define WPDevDisplay_wpObjectReady WPObject_wpObjectReady
#define WPDevDisplay_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPDevDisplay_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPDevDisplay_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPDevDisplay_wpIsDeleteable WPObject_wpIsDeleteable
#define WPDevDisplay_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPDevDisplay_wpSetObjectID WPObject_wpSetObjectID
#define WPDevDisplay_wpQueryObjectID WPObject_wpQueryObjectID
#define WPDevDisplay_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPDevDisplay_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPDevDisplay_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPDevDisplay_wpFindViewItem WPObject_wpFindViewItem
#define WPDevDisplay_wpLockObject WPObject_wpLockObject
#define WPDevDisplay_wpIsLocked WPObject_wpIsLocked
#define WPDevDisplay_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPDevDisplay_wpWaitForClose WPObject_wpWaitForClose
#define WPDevDisplay_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPDevDisplay_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPDevDisplay_wpSetStyle WPObject_wpSetStyle
#define WPDevDisplay_somInit SOMObject_somInit
#define WPDevDisplay_somUninit SOMObject_somUninit
#define WPDevDisplay_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPDevDisplay_somDefaultAssign SOMObject_somDefaultAssign
#define WPDevDisplay_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPDevDisplay_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPDevDisplay_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPDevDisplay_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPDevDisplay_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPDevDisplay_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPDevDisplay_somFree SOMObject_somFree
#define WPDevDisplay_somGetClass SOMObject_somGetClass
#define WPDevDisplay_somGetClassName SOMObject_somGetClassName
#define WPDevDisplay_somGetSize SOMObject_somGetSize
#define WPDevDisplay_somIsA SOMObject_somIsA
#define WPDevDisplay_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPDevDisplay_somRespondsTo SOMObject_somRespondsTo
#define WPDevDisplay_somDispatch SOMObject_somDispatch
#define WPDevDisplay_somClassDispatch SOMObject_somClassDispatch
#define WPDevDisplay_somCastObj SOMObject_somCastObj
#define WPDevDisplay_somResetObj SOMObject_somResetObj
#define WPDevDisplay_somDispatchV SOMObject_somDispatchV
#define WPDevDisplay_somDispatchL SOMObject_somDispatchL
#define WPDevDisplay_somDispatchA SOMObject_somDispatchA
#define WPDevDisplay_somDispatchD SOMObject_somDispatchD
#define WPDevDisplay_somPrintSelf SOMObject_somPrintSelf
#define WPDevDisplay_somDumpSelf SOMObject_somDumpSelf
#define WPDevDisplay_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPDevDisplay_h */

#ifndef SOM_M_WPDevDisplay_h
#define SOM_M_WPDevDisplay_h


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
#ifndef M_WPDevDisplay
#define M_WPDevDisplay SOMObject
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

#define M_WPDevDisplay_MajorVersion 1
#define M_WPDevDisplay_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPDevDisplayNewClass wpdisplyc
#pragma linkage(wpdisplyc, system)
#define M_WPDevDisplayClassData wpdisplyd
#define M_WPDevDisplayCClassData wpdisplyx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPDevDisplay_classObj M_WPDevDisplayClassData.classObject
#define _M_WPDevDisplay M_WPDevDisplay_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPDevDisplayNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPDevDisplayNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPDevDisplayClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPDevDisplayClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPDevDisplayCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPDevDisplayCClassData;

/*
 * New and Renew macros for M_WPDevDisplay
 */
#define M_WPDevDisplayNew() \
   ( _M_WPDevDisplay ? \
	_somNew(_M_WPDevDisplay) \
	: ( M_WPDevDisplayNewClass(\
		M_WPDevDisplay_MajorVersion, \
		M_WPDevDisplay_MinorVersion),\
	   _somNew(_M_WPDevDisplay)))
#define M_WPDevDisplayRenew(buf) \
   ( _M_WPDevDisplay ? \
	_somRenew(_M_WPDevDisplay, buf) \
	: ( M_WPDevDisplayNewClass(\
		M_WPDevDisplay_MajorVersion, \
		M_WPDevDisplay_MinorVersion),\
	   _somRenew(_M_WPDevDisplay, buf)))

/*
 * Override method: wpclsInitData
 */
#define M_WPDevDisplay_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPDevDisplay_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPDevDisplay_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsUnInitData
 */
#define M_WPDevDisplay_wpclsUnInitData(somSelf) \
	M_WPObject_wpclsUnInitData(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPDevDisplay_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPDevDisplay_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPDevDisplay_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPDevDisplay_wpclsQueryStyle M_WPObject_wpclsQueryStyle
#define M_WPDevDisplay_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPDevDisplay_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPDevDisplay_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPDevDisplay_wpclsNew M_WPObject_wpclsNew
#define M_WPDevDisplay_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPDevDisplay_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPDevDisplay_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPDevDisplay_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPDevDisplay_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPDevDisplay_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPDevDisplay_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPDevDisplay_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPDevDisplay_wpclsSetError M_WPObject_wpclsSetError
#define M_WPDevDisplay_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPDevDisplay_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPDevDisplay_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPDevDisplay_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPDevDisplay_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPDevDisplay_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPDevDisplay_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPDevDisplay_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPDevDisplay_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPDevDisplay_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPDevDisplay_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPDevDisplay_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPDevDisplay_somUninit SOMObject_somUninit
#define M_WPDevDisplay_somClassReady SOMClass_somClassReady
#define M_WPDevDisplay_somNew SOMClass_somNew
#define M_WPDevDisplay_somRenew SOMClass_somRenew
#define M_WPDevDisplay__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPDevDisplay__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPDevDisplay__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPDevDisplay__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPDevDisplay_somNewNoInit SOMClass_somNewNoInit
#define M_WPDevDisplay_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPDevDisplay_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPDevDisplay_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPDevDisplay_somAllocate SOMClass_somAllocate
#define M_WPDevDisplay_somDeallocate SOMClass_somDeallocate
#define M_WPDevDisplay__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPDevDisplay__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPDevDisplay_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPDevDisplay_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPDevDisplay_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPDevDisplay_somInitClass SOMClass_somInitClass
#define M_WPDevDisplay_somInitMIClass SOMClass_somInitMIClass
#define M_WPDevDisplay_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPDevDisplay_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPDevDisplay_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPDevDisplay_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPDevDisplay_somGetClassData SOMClass_somGetClassData
#define M_WPDevDisplay_somSetClassData SOMClass_somSetClassData
#define M_WPDevDisplay_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPDevDisplay_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPDevDisplay_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPDevDisplay_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPDevDisplay_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPDevDisplay_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPDevDisplay_somGetMethodData SOMClass_somGetMethodData
#define M_WPDevDisplay_somGetRdStub SOMClass_somGetRdStub
#define M_WPDevDisplay_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPDevDisplay_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPDevDisplay_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPDevDisplay_somGetName SOMClass_somGetName
#define M_WPDevDisplay_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPDevDisplay_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPDevDisplay_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPDevDisplay_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPDevDisplay_somGetParent SOMClass_somGetParent
#define M_WPDevDisplay_somGetParents SOMClass_somGetParents
#define M_WPDevDisplay_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPDevDisplay_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPDevDisplay_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPDevDisplay_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPDevDisplay_somFindMethod SOMClass_somFindMethod
#define M_WPDevDisplay_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPDevDisplay_somFindSMethod SOMClass_somFindSMethod
#define M_WPDevDisplay_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPDevDisplay_somLookupMethod SOMClass_somLookupMethod
#define M_WPDevDisplay_somCheckVersion SOMClass_somCheckVersion
#define M_WPDevDisplay_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPDevDisplay_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPDevDisplay_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPDevDisplay_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPDevDisplay_somDefaultInit SOMObject_somDefaultInit
#define M_WPDevDisplay_somDestruct SOMObject_somDestruct
#define M_WPDevDisplay_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPDevDisplay_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPDevDisplay_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPDevDisplay_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPDevDisplay_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPDevDisplay_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPDevDisplay_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPDevDisplay_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPDevDisplay_somInit SOMObject_somInit
#define M_WPDevDisplay_somFree SOMObject_somFree
#define M_WPDevDisplay_somGetClass SOMObject_somGetClass
#define M_WPDevDisplay_somGetClassName SOMObject_somGetClassName
#define M_WPDevDisplay_somGetSize SOMObject_somGetSize
#define M_WPDevDisplay_somIsA SOMObject_somIsA
#define M_WPDevDisplay_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPDevDisplay_somRespondsTo SOMObject_somRespondsTo
#define M_WPDevDisplay_somDispatch SOMObject_somDispatch
#define M_WPDevDisplay_somClassDispatch SOMObject_somClassDispatch
#define M_WPDevDisplay_somCastObj SOMObject_somCastObj
#define M_WPDevDisplay_somResetObj SOMObject_somResetObj
#define M_WPDevDisplay_somDispatchV SOMObject_somDispatchV
#define M_WPDevDisplay_somDispatchL SOMObject_somDispatchL
#define M_WPDevDisplay_somDispatchA SOMObject_somDispatchA
#define M_WPDevDisplay_somDispatchD SOMObject_somDispatchD
#define M_WPDevDisplay_somPrintSelf SOMObject_somPrintSelf
#define M_WPDevDisplay_somDumpSelf SOMObject_somDumpSelf
#define M_WPDevDisplay_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPDevDisplay_h */
