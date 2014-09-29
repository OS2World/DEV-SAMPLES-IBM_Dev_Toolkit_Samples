
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpshadow.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPSHADOW
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPShadow_h
#define SOM_WPShadow_h


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
#ifndef WPShadow
#define WPShadow SOMObject
#endif
#include <wpabs.h>

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
#ifndef M_WPAbstract
    #define M_WPAbstract SOMObject
#endif /* M_WPAbstract */
#ifndef M_WPShadow
    #define M_WPShadow SOMObject
#endif /* M_WPShadow */

/*
 * End of bindings for IDL types.
 */

#define WPShadow_MajorVersion 1
#define WPShadow_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPShadowNewClass wplinkc
#pragma linkage(wplinkc, system)
#define WPShadowClassData wplinkd
#define WPShadowCClassData wplinkx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpshadow.h>
/*--------------Migration------------*/
#define WPShadow_classObj WPShadowClassData.classObject
#define _WPShadow WPShadow_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPShadowNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPShadowNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPShadowClassDataStructure {
	SOMClass *classObject;
	somMToken wpSetLinkToObject;
	somMToken withdrawn;
	somMToken wpSetShadowTitle;
	somMToken wpQueryShadowedObject;
} SOMDLINK WPShadowClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPShadowCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPShadowCClassData;

/*
 * New and Renew macros for WPShadow
 */
#define WPShadowNew() \
   ( _WPShadow ? \
	_somNew(_WPShadow) \
	: ( WPShadowNewClass(\
		WPShadow_MajorVersion, \
		WPShadow_MinorVersion),\
	   _somNew(_WPShadow)))
#define WPShadowRenew(buf) \
   ( _WPShadow ? \
	_somRenew(_WPShadow, buf) \
	: ( WPShadowNewClass(\
		WPShadow_MajorVersion, \
		WPShadow_MinorVersion),\
	   _somRenew(_WPShadow, buf)))

/*
 * Override method: wpQueryTitle
 */
#define WPShadow_wpQueryTitle(somSelf) \
	WPObject_wpQueryTitle(somSelf)

/*
 * Override method: wpSetup
 */
#define WPShadow_wpSetup(somSelf,pszSetupString) \
	WPObject_wpSetup(somSelf,pszSetupString)

/*
 * Override method: wpSaveState
 */
#define WPShadow_wpSaveState(somSelf) \
	WPObject_wpSaveState(somSelf)

/*
 * Override method: wpRestoreState
 */
#define WPShadow_wpRestoreState(somSelf,ulReserved) \
	WPObject_wpRestoreState(somSelf,ulReserved)

/*
 * Override method: wpQueryStyle
 */
#define WPShadow_wpQueryStyle(somSelf) \
	WPObject_wpQueryStyle(somSelf)

/*
 * Override method: wpInitData
 */
#define WPShadow_wpInitData(somSelf) \
	WPObject_wpInitData(somSelf)

/*
 * Override method: wpUnInitData
 */
#define WPShadow_wpUnInitData(somSelf) \
	WPObject_wpUnInitData(somSelf)

/*
 * Override method: wpSetTitle
 */
#define WPShadow_wpSetTitle(somSelf,pszNewTitle) \
	WPObject_wpSetTitle(somSelf,pszNewTitle)

/*
 * Override method: wpFilterPopupMenu
 */
#define WPShadow_wpFilterPopupMenu(somSelf,ulFlags,hwndCnr,fMultiSelect) \
	WPObject_wpFilterPopupMenu(somSelf,ulFlags,hwndCnr,fMultiSelect)

/*
 * Override method: wpModifyPopupMenu
 */
#define WPShadow_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition) \
	WPObject_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition)

/*
 * Override method: wpMenuItemSelected
 */
#define WPShadow_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId) \
	WPObject_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId)

/*
 * Override method: wpViewObject
 */
#define WPShadow_wpViewObject(somSelf,hwndCnr,ulView,param) \
	WPObject_wpViewObject(somSelf,hwndCnr,ulView,param)

/*
 * Override method: wpMenuItemHelpSelected
 */
#define WPShadow_wpMenuItemHelpSelected(somSelf,MenuId) \
	WPObject_wpMenuItemHelpSelected(somSelf,MenuId)

/*
 * Override method: wpCreateFromTemplate
 */
#define WPShadow_wpCreateFromTemplate(somSelf,folder,fLock) \
	WPObject_wpCreateFromTemplate(somSelf,folder,fLock)

/*
 * Override method: wpOpen
 */
#define WPShadow_wpOpen(somSelf,hwndCnr,ulView,param) \
	WPObject_wpOpen(somSelf,hwndCnr,ulView,param)

/*
 * Override method: wpInsertPopupMenuItems
 */
#define WPShadow_wpInsertPopupMenuItems(somSelf,hwndMenu,iPosition,hmod,MenuID,SubMenuID) \
	WPObject_wpInsertPopupMenuItems(somSelf,hwndMenu,iPosition,hmod,MenuID,SubMenuID)

/*
 * Override method: wpInsertMenuItems
 */
#define WPShadow_wpInsertMenuItems(somSelf,hwndMenu,iPosition,hmod,MenuID,SubMenuID) \
	WPObject_wpInsertMenuItems(somSelf,hwndMenu,iPosition,hmod,MenuID,SubMenuID)

/*
 * Override method: wpCreateShadowObject
 */
#define WPShadow_wpCreateShadowObject(somSelf,Folder,fLock) \
	WPObject_wpCreateShadowObject(somSelf,Folder,fLock)

/*
 * Override method: wpDragOver
 */
#define WPShadow_wpDragOver(somSelf,hwndCnr,pdrgInfo) \
	WPObject_wpDragOver(somSelf,hwndCnr,pdrgInfo)

/*
 * Override method: wpDrop
 */
#define WPShadow_wpDrop(somSelf,hwndCnr,pdrgInfo,pdrgItem) \
	WPObject_wpDrop(somSelf,hwndCnr,pdrgInfo,pdrgItem)

/*
 * Override method: wpQueryDefaultHelp
 */
#define WPShadow_wpQueryDefaultHelp(somSelf,pHelpPanelId,HelpLibrary) \
	WPObject_wpQueryDefaultHelp(somSelf,pHelpPanelId,HelpLibrary)

/*
 * Override method: wpConfirmDelete
 */
#define WPShadow_wpConfirmDelete(somSelf,fConfirmations) \
	WPObject_wpConfirmDelete(somSelf,fConfirmations)

/*
 * Override method: wpConfirmObjectTitle
 */
#define WPShadow_wpConfirmObjectTitle(somSelf,Folder,ppDuplicate,pszTitle,cbTitle,menuID) \
	WPObject_wpConfirmObjectTitle(somSelf,Folder,ppDuplicate,pszTitle,cbTitle,menuID)

/*
 * Override method: wpPrintObject
 */
#define WPShadow_wpPrintObject(somSelf,pPrintDest,ulReserved) \
	WPObject_wpPrintObject(somSelf,pPrintDest,ulReserved)

/*
 * Override method: wpFormatDragItem
 */
#define WPShadow_wpFormatDragItem(somSelf,pdrgItem) \
	WPObject_wpFormatDragItem(somSelf,pdrgItem)

/*
 * Override method: wpDraggedOverObject
 */
#define WPShadow_wpDraggedOverObject(somSelf,DraggedOverObject) \
	WPObject_wpDraggedOverObject(somSelf,DraggedOverObject)

/*
 * Override method: wpDroppedOnObject
 */
#define WPShadow_wpDroppedOnObject(somSelf,DroppedOnObject) \
	WPObject_wpDroppedOnObject(somSelf,DroppedOnObject)

/*
 * Override method: wpQueryNameClashOptions
 */
#define WPShadow_wpQueryNameClashOptions(somSelf,menuID) \
	WPObject_wpQueryNameClashOptions(somSelf,menuID)

/*
 * Override method: wpFilterMenu
 */
#define WPShadow_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved) \
	WPObject_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved)

/*
 * Override method: wpModifyMenu
 */
#define WPShadow_wpModifyMenu(somSelf,hwndMenu,hwndCnr,iPosition,ulMenuType,ulView,ulReserved) \
	WPObject_wpModifyMenu(somSelf,hwndMenu,hwndCnr,iPosition,ulMenuType,ulView,ulReserved)

/*
 * Override method: somDefaultInit
 */
#define WPShadow_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPShadow_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * New Method: wpQueryShadowedObject
 */
typedef WPObject*   SOMLINK somTP_WPShadow_wpQueryShadowedObject(WPShadow *somSelf, 
		BOOL fLock);
#pragma linkage(somTP_WPShadow_wpQueryShadowedObject, system)
typedef somTP_WPShadow_wpQueryShadowedObject *somTD_WPShadow_wpQueryShadowedObject;
#define somMD_WPShadow_wpQueryShadowedObject "::WPShadow::wpQueryShadowedObject"
#define WPShadow_wpQueryShadowedObject(somSelf,fLock) \
    (SOM_Resolve(somSelf, WPShadow, wpQueryShadowedObject) \
	(somSelf,fLock))
#ifndef SOMGD_wpQueryShadowedObject
    #if (defined(_wpQueryShadowedObject) || defined(__wpQueryShadowedObject))
        #undef _wpQueryShadowedObject
        #undef __wpQueryShadowedObject
        #define SOMGD_wpQueryShadowedObject 1
    #else
        #define _wpQueryShadowedObject WPShadow_wpQueryShadowedObject
    #endif /* _wpQueryShadowedObject */
#endif /* SOMGD_wpQueryShadowedObject */

/*
 * New Method: wpSetShadowTitle
 */
typedef BOOL   SOMLINK somTP_WPShadow_wpSetShadowTitle(WPShadow *somSelf, 
		PSZ pszNewTitle);
#pragma linkage(somTP_WPShadow_wpSetShadowTitle, system)
typedef somTP_WPShadow_wpSetShadowTitle *somTD_WPShadow_wpSetShadowTitle;
#define somMD_WPShadow_wpSetShadowTitle "::WPShadow::wpSetShadowTitle"
#define WPShadow_wpSetShadowTitle(somSelf,pszNewTitle) \
    (SOM_Resolve(somSelf, WPShadow, wpSetShadowTitle) \
	(somSelf,pszNewTitle))
#ifndef SOMGD_wpSetShadowTitle
    #if (defined(_wpSetShadowTitle) || defined(__wpSetShadowTitle))
        #undef _wpSetShadowTitle
        #undef __wpSetShadowTitle
        #define SOMGD_wpSetShadowTitle 1
    #else
        #define _wpSetShadowTitle WPShadow_wpSetShadowTitle
    #endif /* _wpSetShadowTitle */
#endif /* SOMGD_wpSetShadowTitle */

/*
 * New Method: wpSetLinkToObject
 */
typedef BOOL   SOMLINK somTP_WPShadow_wpSetLinkToObject(WPShadow *somSelf, 
		WPObject* FromObject);
#pragma linkage(somTP_WPShadow_wpSetLinkToObject, system)
typedef somTP_WPShadow_wpSetLinkToObject *somTD_WPShadow_wpSetLinkToObject;
#define somMD_WPShadow_wpSetLinkToObject "::WPShadow::wpSetLinkToObject"
#define WPShadow_wpSetLinkToObject(somSelf,FromObject) \
    (SOM_Resolve(somSelf, WPShadow, wpSetLinkToObject) \
	(somSelf,FromObject))
#ifndef SOMGD_wpSetLinkToObject
    #if (defined(_wpSetLinkToObject) || defined(__wpSetLinkToObject))
        #undef _wpSetLinkToObject
        #undef __wpSetLinkToObject
        #define SOMGD_wpSetLinkToObject 1
    #else
        #define _wpSetLinkToObject WPShadow_wpSetLinkToObject
    #endif /* _wpSetLinkToObject */
#endif /* SOMGD_wpSetLinkToObject */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPShadow_wpQueryHandle WPObject_wpQueryHandle
#define WPShadow_wpSaveImmediate WPObject_wpSaveImmediate
#define WPShadow_wpCopyObject WPObject_wpCopyObject
#define WPShadow_wpMoveObject WPObject_wpMoveObject
#define WPShadow_wpQueryIcon WPObject_wpQueryIcon
#define WPShadow_wpQueryIconData WPObject_wpQueryIconData
#define WPShadow_wpSetIconData WPObject_wpSetIconData
#define WPShadow_wpReplaceObject WPObject_wpReplaceObject
#define WPShadow_wpIdentify WPObject_wpIdentify
#define WPShadow_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPShadow_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPShadow_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPShadow_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPShadow_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPShadow_wpAllocMem WPObject_wpAllocMem
#define WPShadow_wpAppendObject WPObject_wpAppendObject
#define WPShadow_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPShadow_wpClose WPObject_wpClose
#define WPShadow_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPShadow_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPShadow_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPShadow_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPShadow_wpCreateAnother WPObject_wpCreateAnother
#define WPShadow_wpDelete WPObject_wpDelete
#define WPShadow_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPShadow_wpDisplayHelp WPObject_wpDisplayHelp
#define WPShadow_wpDisplayMenu WPObject_wpDisplayMenu
#define WPShadow_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPShadow_wpEndConversation WPObject_wpEndConversation
#define WPShadow_wpFindUseItem WPObject_wpFindUseItem
#define WPShadow_wpFree WPObject_wpFree
#define WPShadow_wpFreeMem WPObject_wpFreeMem
#define WPShadow_wpHide WPObject_wpHide
#define WPShadow_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPShadow_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPShadow_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPShadow_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPShadow_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPShadow_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPShadow_wpQueryError WPObject_wpQueryError
#define WPShadow_wpSetFolder WPObject_wpSetFolder
#define WPShadow_wpQueryFolder WPObject_wpQueryFolder
#define WPShadow_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPShadow_wpSetTaskRec WPObject_wpSetTaskRec
#define WPShadow_wpFindTaskRec WPObject_wpFindTaskRec
#define WPShadow_wpRegisterView WPObject_wpRegisterView
#define WPShadow_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPShadow_wpRender WPObject_wpRender
#define WPShadow_wpRenderComplete WPObject_wpRenderComplete
#define WPShadow_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPShadow_wpRestore WPObject_wpRestore
#define WPShadow_wpRestoreData WPObject_wpRestoreData
#define WPShadow_wpRestoreLong WPObject_wpRestoreLong
#define WPShadow_wpRestoreString WPObject_wpRestoreString
#define WPShadow_wpSaveData WPObject_wpSaveData
#define WPShadow_wpSaveDeferred WPObject_wpSaveDeferred
#define WPShadow_wpSaveLong WPObject_wpSaveLong
#define WPShadow_wpSaveString WPObject_wpSaveString
#define WPShadow_wpScanSetupString WPObject_wpScanSetupString
#define WPShadow_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPShadow_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPShadow_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPShadow_wpSetDefaultView WPObject_wpSetDefaultView
#define WPShadow_wpSetError WPObject_wpSetError
#define WPShadow_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPShadow_wpSetupOnce WPObject_wpSetupOnce
#define WPShadow_wpSetIcon WPObject_wpSetIcon
#define WPShadow_wpSetMinWindow WPObject_wpSetMinWindow
#define WPShadow_wpModifyStyle WPObject_wpModifyStyle
#define WPShadow_wpSwitchTo WPObject_wpSwitchTo
#define WPShadow_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPShadow_wpUnlockObject WPObject_wpUnlockObject
#define WPShadow_wpObjectReady WPObject_wpObjectReady
#define WPShadow_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPShadow_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPShadow_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPShadow_wpIsDeleteable WPObject_wpIsDeleteable
#define WPShadow_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPShadow_wpSetObjectID WPObject_wpSetObjectID
#define WPShadow_wpQueryObjectID WPObject_wpQueryObjectID
#define WPShadow_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPShadow_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPShadow_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPShadow_wpFindViewItem WPObject_wpFindViewItem
#define WPShadow_wpLockObject WPObject_wpLockObject
#define WPShadow_wpIsLocked WPObject_wpIsLocked
#define WPShadow_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPShadow_wpWaitForClose WPObject_wpWaitForClose
#define WPShadow_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPShadow_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPShadow_wpSetStyle WPObject_wpSetStyle
#define WPShadow_somInit SOMObject_somInit
#define WPShadow_somUninit SOMObject_somUninit
#define WPShadow_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPShadow_somDefaultAssign SOMObject_somDefaultAssign
#define WPShadow_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPShadow_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPShadow_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPShadow_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPShadow_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPShadow_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPShadow_somFree SOMObject_somFree
#define WPShadow_somGetClass SOMObject_somGetClass
#define WPShadow_somGetClassName SOMObject_somGetClassName
#define WPShadow_somGetSize SOMObject_somGetSize
#define WPShadow_somIsA SOMObject_somIsA
#define WPShadow_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPShadow_somRespondsTo SOMObject_somRespondsTo
#define WPShadow_somDispatch SOMObject_somDispatch
#define WPShadow_somClassDispatch SOMObject_somClassDispatch
#define WPShadow_somCastObj SOMObject_somCastObj
#define WPShadow_somResetObj SOMObject_somResetObj
#define WPShadow_somDispatchV SOMObject_somDispatchV
#define WPShadow_somDispatchL SOMObject_somDispatchL
#define WPShadow_somDispatchA SOMObject_somDispatchA
#define WPShadow_somDispatchD SOMObject_somDispatchD
#define WPShadow_somPrintSelf SOMObject_somPrintSelf
#define WPShadow_somDumpSelf SOMObject_somDumpSelf
#define WPShadow_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPShadow_h */

#ifndef SOM_M_WPShadow_h
#define SOM_M_WPShadow_h


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
#ifndef M_WPShadow
#define M_WPShadow SOMObject
#endif
#include <wpabs.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPShadow_MajorVersion 1
#define M_WPShadow_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPShadowNewClass wplinkc
#pragma linkage(wplinkc, system)
#define M_WPShadowClassData wplinkd
#define M_WPShadowCClassData wplinkx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPShadow_classObj M_WPShadowClassData.classObject
#define _M_WPShadow M_WPShadow_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPShadowNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPShadowNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPShadowClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPShadowClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPShadowCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPShadowCClassData;

/*
 * New and Renew macros for M_WPShadow
 */
#define M_WPShadowNew() \
   ( _M_WPShadow ? \
	_somNew(_M_WPShadow) \
	: ( M_WPShadowNewClass(\
		M_WPShadow_MajorVersion, \
		M_WPShadow_MinorVersion),\
	   _somNew(_M_WPShadow)))
#define M_WPShadowRenew(buf) \
   ( _M_WPShadow ? \
	_somRenew(_M_WPShadow, buf) \
	: ( M_WPShadowNewClass(\
		M_WPShadow_MajorVersion, \
		M_WPShadow_MinorVersion),\
	   _somRenew(_M_WPShadow, buf)))

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPShadow_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPShadow_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPShadow_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPShadow_wpclsQuerySetting M_WPAbstract_wpclsQuerySetting
#define M_WPShadow_wpclsSetSetting M_WPAbstract_wpclsSetSetting
#define M_WPShadow_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPShadow_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPShadow_wpclsInitData M_WPObject_wpclsInitData
#define M_WPShadow_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPShadow_wpclsNew M_WPObject_wpclsNew
#define M_WPShadow_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPShadow_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPShadow_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPShadow_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPShadow_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPShadow_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPShadow_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPShadow_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPShadow_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPShadow_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPShadow_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPShadow_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPShadow_wpclsSetError M_WPObject_wpclsSetError
#define M_WPShadow_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPShadow_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPShadow_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPShadow_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPShadow_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPShadow_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPShadow_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPShadow_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPShadow_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPShadow_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPShadow_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPShadow_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPShadow_somUninit SOMObject_somUninit
#define M_WPShadow_somClassReady SOMClass_somClassReady
#define M_WPShadow_somNew SOMClass_somNew
#define M_WPShadow_somRenew SOMClass_somRenew
#define M_WPShadow__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPShadow__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPShadow__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPShadow__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPShadow_somNewNoInit SOMClass_somNewNoInit
#define M_WPShadow_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPShadow_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPShadow_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPShadow_somAllocate SOMClass_somAllocate
#define M_WPShadow_somDeallocate SOMClass_somDeallocate
#define M_WPShadow__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPShadow__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPShadow_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPShadow_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPShadow_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPShadow_somInitClass SOMClass_somInitClass
#define M_WPShadow_somInitMIClass SOMClass_somInitMIClass
#define M_WPShadow_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPShadow_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPShadow_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPShadow_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPShadow_somGetClassData SOMClass_somGetClassData
#define M_WPShadow_somSetClassData SOMClass_somSetClassData
#define M_WPShadow_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPShadow_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPShadow_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPShadow_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPShadow_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPShadow_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPShadow_somGetMethodData SOMClass_somGetMethodData
#define M_WPShadow_somGetRdStub SOMClass_somGetRdStub
#define M_WPShadow_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPShadow_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPShadow_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPShadow_somGetName SOMClass_somGetName
#define M_WPShadow_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPShadow_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPShadow_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPShadow_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPShadow_somGetParent SOMClass_somGetParent
#define M_WPShadow_somGetParents SOMClass_somGetParents
#define M_WPShadow_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPShadow_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPShadow_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPShadow_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPShadow_somFindMethod SOMClass_somFindMethod
#define M_WPShadow_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPShadow_somFindSMethod SOMClass_somFindSMethod
#define M_WPShadow_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPShadow_somLookupMethod SOMClass_somLookupMethod
#define M_WPShadow_somCheckVersion SOMClass_somCheckVersion
#define M_WPShadow_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPShadow_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPShadow_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPShadow_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPShadow_somDefaultInit SOMObject_somDefaultInit
#define M_WPShadow_somDestruct SOMObject_somDestruct
#define M_WPShadow_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPShadow_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPShadow_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPShadow_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPShadow_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPShadow_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPShadow_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPShadow_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPShadow_somInit SOMObject_somInit
#define M_WPShadow_somFree SOMObject_somFree
#define M_WPShadow_somGetClass SOMObject_somGetClass
#define M_WPShadow_somGetClassName SOMObject_somGetClassName
#define M_WPShadow_somGetSize SOMObject_somGetSize
#define M_WPShadow_somIsA SOMObject_somIsA
#define M_WPShadow_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPShadow_somRespondsTo SOMObject_somRespondsTo
#define M_WPShadow_somDispatch SOMObject_somDispatch
#define M_WPShadow_somClassDispatch SOMObject_somClassDispatch
#define M_WPShadow_somCastObj SOMObject_somCastObj
#define M_WPShadow_somResetObj SOMObject_somResetObj
#define M_WPShadow_somDispatchV SOMObject_somDispatchV
#define M_WPShadow_somDispatchL SOMObject_somDispatchL
#define M_WPShadow_somDispatchA SOMObject_somDispatchA
#define M_WPShadow_somDispatchD SOMObject_somDispatchD
#define M_WPShadow_somPrintSelf SOMObject_somPrintSelf
#define M_WPShadow_somDumpSelf SOMObject_somDumpSelf
#define M_WPShadow_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPShadow_h */
