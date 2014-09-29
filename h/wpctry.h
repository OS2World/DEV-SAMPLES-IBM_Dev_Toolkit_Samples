
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpctry.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPCTRY
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPCountry_h
#define SOM_WPCountry_h


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
#ifndef WPCountry
#define WPCountry SOMObject
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
#ifndef M_WPCountry
    #define M_WPCountry SOMObject
#endif /* M_WPCountry */

/*
 * End of bindings for IDL types.
 */

#define WPCountry_MajorVersion 1
#define WPCountry_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPCountryNewClass WPcouc
#pragma linkage(WPcouc, system)
#define WPCountryClassData WPcoud
#define WPCountryCClassData WPcoux
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpctry.h>
/*--------------Migration------------*/
#define WPCountry_classObj WPCountryClassData.classObject
#define _WPCountry WPCountry_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPCountryNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPCountryNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPCountryClassDataStructure {
	SOMClass *classObject;
	somMToken wpAddCountryTimePage;
	somMToken wpAddCountryDatePage;
	somMToken withdrawn;
	somMToken wpAddCountryPage;
	somMToken wpAddCountryNumbersPage;
} SOMDLINK WPCountryClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPCountryCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPCountryCClassData;

/*
 * New and Renew macros for WPCountry
 */
#define WPCountryNew() \
   ( _WPCountry ? \
	_somNew(_WPCountry) \
	: ( WPCountryNewClass(\
		WPCountry_MajorVersion, \
		WPCountry_MinorVersion),\
	   _somNew(_WPCountry)))
#define WPCountryRenew(buf) \
   ( _WPCountry ? \
	_somRenew(_WPCountry, buf) \
	: ( WPCountryNewClass(\
		WPCountry_MajorVersion, \
		WPCountry_MinorVersion),\
	   _somRenew(_WPCountry, buf)))

/*
 * Override method: wpAddSettingsPages
 */
#define WPCountry_wpAddSettingsPages(somSelf,hwndNotebook) \
	WPObject_wpAddSettingsPages(somSelf,hwndNotebook)

/*
 * Override method: wpAddObjectWindowPage
 */
#define WPCountry_wpAddObjectWindowPage(somSelf,hwndNotebook) \
	WPObject_wpAddObjectWindowPage(somSelf,hwndNotebook)

/*
 * Override method: wpInitData
 */
#define WPCountry_wpInitData(somSelf) \
	WPObject_wpInitData(somSelf)

/*
 * Override method: wpFilterMenu
 */
#define WPCountry_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved) \
	WPObject_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved)

/*
 * Override method: somDefaultInit
 */
#define WPCountry_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPCountry_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * New Method: wpAddCountryTimePage
 */
typedef ULONG   SOMLINK somTP_WPCountry_wpAddCountryTimePage(WPCountry *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPCountry_wpAddCountryTimePage, system)
typedef somTP_WPCountry_wpAddCountryTimePage *somTD_WPCountry_wpAddCountryTimePage;
#define somMD_WPCountry_wpAddCountryTimePage "::WPCountry::wpAddCountryTimePage"
#define WPCountry_wpAddCountryTimePage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPCountry, wpAddCountryTimePage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddCountryTimePage
    #if (defined(_wpAddCountryTimePage) || defined(__wpAddCountryTimePage))
        #undef _wpAddCountryTimePage
        #undef __wpAddCountryTimePage
        #define SOMGD_wpAddCountryTimePage 1
    #else
        #define _wpAddCountryTimePage WPCountry_wpAddCountryTimePage
    #endif /* _wpAddCountryTimePage */
#endif /* SOMGD_wpAddCountryTimePage */

/*
 * New Method: wpAddCountryDatePage
 */
typedef ULONG   SOMLINK somTP_WPCountry_wpAddCountryDatePage(WPCountry *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPCountry_wpAddCountryDatePage, system)
typedef somTP_WPCountry_wpAddCountryDatePage *somTD_WPCountry_wpAddCountryDatePage;
#define somMD_WPCountry_wpAddCountryDatePage "::WPCountry::wpAddCountryDatePage"
#define WPCountry_wpAddCountryDatePage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPCountry, wpAddCountryDatePage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddCountryDatePage
    #if (defined(_wpAddCountryDatePage) || defined(__wpAddCountryDatePage))
        #undef _wpAddCountryDatePage
        #undef __wpAddCountryDatePage
        #define SOMGD_wpAddCountryDatePage 1
    #else
        #define _wpAddCountryDatePage WPCountry_wpAddCountryDatePage
    #endif /* _wpAddCountryDatePage */
#endif /* SOMGD_wpAddCountryDatePage */

/*
 * New Method: wpAddCountryNumbersPage
 */
typedef ULONG   SOMLINK somTP_WPCountry_wpAddCountryNumbersPage(WPCountry *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPCountry_wpAddCountryNumbersPage, system)
typedef somTP_WPCountry_wpAddCountryNumbersPage *somTD_WPCountry_wpAddCountryNumbersPage;
#define somMD_WPCountry_wpAddCountryNumbersPage "::WPCountry::wpAddCountryNumbersPage"
#define WPCountry_wpAddCountryNumbersPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPCountry, wpAddCountryNumbersPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddCountryNumbersPage
    #if (defined(_wpAddCountryNumbersPage) || defined(__wpAddCountryNumbersPage))
        #undef _wpAddCountryNumbersPage
        #undef __wpAddCountryNumbersPage
        #define SOMGD_wpAddCountryNumbersPage 1
    #else
        #define _wpAddCountryNumbersPage WPCountry_wpAddCountryNumbersPage
    #endif /* _wpAddCountryNumbersPage */
#endif /* SOMGD_wpAddCountryNumbersPage */

/*
 * New Method: wpAddCountryPage
 */
typedef ULONG   SOMLINK somTP_WPCountry_wpAddCountryPage(WPCountry *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPCountry_wpAddCountryPage, system)
typedef somTP_WPCountry_wpAddCountryPage *somTD_WPCountry_wpAddCountryPage;
#define somMD_WPCountry_wpAddCountryPage "::WPCountry::wpAddCountryPage"
#define WPCountry_wpAddCountryPage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPCountry, wpAddCountryPage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddCountryPage
    #if (defined(_wpAddCountryPage) || defined(__wpAddCountryPage))
        #undef _wpAddCountryPage
        #undef __wpAddCountryPage
        #define SOMGD_wpAddCountryPage 1
    #else
        #define _wpAddCountryPage WPCountry_wpAddCountryPage
    #endif /* _wpAddCountryPage */
#endif /* SOMGD_wpAddCountryPage */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPCountry_wpQueryHandle WPObject_wpQueryHandle
#define WPCountry_wpSaveImmediate WPObject_wpSaveImmediate
#define WPCountry_wpSaveState WPObject_wpSaveState
#define WPCountry_wpRestoreState WPObject_wpRestoreState
#define WPCountry_wpSetTitle WPObject_wpSetTitle
#define WPCountry_wpCopyObject WPObject_wpCopyObject
#define WPCountry_wpMoveObject WPObject_wpMoveObject
#define WPCountry_wpQueryIcon WPObject_wpQueryIcon
#define WPCountry_wpQueryIconData WPObject_wpQueryIconData
#define WPCountry_wpSetIconData WPObject_wpSetIconData
#define WPCountry_wpDragOver WPObject_wpDragOver
#define WPCountry_wpReplaceObject WPObject_wpReplaceObject
#define WPCountry_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPCountry_wpIdentify WPObject_wpIdentify
#define WPCountry_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPCountry_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPCountry_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPCountry_wpAllocMem WPObject_wpAllocMem
#define WPCountry_wpAppendObject WPObject_wpAppendObject
#define WPCountry_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPCountry_wpClose WPObject_wpClose
#define WPCountry_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPCountry_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPCountry_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPCountry_wpConfirmDelete WPObject_wpConfirmDelete
#define WPCountry_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPCountry_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPCountry_wpCreateAnother WPObject_wpCreateAnother
#define WPCountry_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPCountry_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPCountry_wpDelete WPObject_wpDelete
#define WPCountry_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPCountry_wpDisplayHelp WPObject_wpDisplayHelp
#define WPCountry_wpDisplayMenu WPObject_wpDisplayMenu
#define WPCountry_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPCountry_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPCountry_wpDrop WPObject_wpDrop
#define WPCountry_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPCountry_wpEndConversation WPObject_wpEndConversation
#define WPCountry_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPCountry_wpFindUseItem WPObject_wpFindUseItem
#define WPCountry_wpFormatDragItem WPObject_wpFormatDragItem
#define WPCountry_wpFree WPObject_wpFree
#define WPCountry_wpFreeMem WPObject_wpFreeMem
#define WPCountry_wpHide WPObject_wpHide
#define WPCountry_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPCountry_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPCountry_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPCountry_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPCountry_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPCountry_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPCountry_wpModifyMenu WPObject_wpModifyMenu
#define WPCountry_wpOpen WPObject_wpOpen
#define WPCountry_wpPrintObject WPObject_wpPrintObject
#define WPCountry_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPCountry_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPCountry_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPCountry_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPCountry_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPCountry_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPCountry_wpQueryError WPObject_wpQueryError
#define WPCountry_wpSetFolder WPObject_wpSetFolder
#define WPCountry_wpQueryFolder WPObject_wpQueryFolder
#define WPCountry_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPCountry_wpQueryStyle WPObject_wpQueryStyle
#define WPCountry_wpSetTaskRec WPObject_wpSetTaskRec
#define WPCountry_wpFindTaskRec WPObject_wpFindTaskRec
#define WPCountry_wpQueryTitle WPObject_wpQueryTitle
#define WPCountry_wpRegisterView WPObject_wpRegisterView
#define WPCountry_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPCountry_wpRender WPObject_wpRender
#define WPCountry_wpRenderComplete WPObject_wpRenderComplete
#define WPCountry_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPCountry_wpRestore WPObject_wpRestore
#define WPCountry_wpRestoreData WPObject_wpRestoreData
#define WPCountry_wpRestoreLong WPObject_wpRestoreLong
#define WPCountry_wpRestoreString WPObject_wpRestoreString
#define WPCountry_wpSaveData WPObject_wpSaveData
#define WPCountry_wpSaveDeferred WPObject_wpSaveDeferred
#define WPCountry_wpSaveLong WPObject_wpSaveLong
#define WPCountry_wpSaveString WPObject_wpSaveString
#define WPCountry_wpScanSetupString WPObject_wpScanSetupString
#define WPCountry_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPCountry_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPCountry_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPCountry_wpSetDefaultView WPObject_wpSetDefaultView
#define WPCountry_wpSetError WPObject_wpSetError
#define WPCountry_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPCountry_wpSetupOnce WPObject_wpSetupOnce
#define WPCountry_wpSetIcon WPObject_wpSetIcon
#define WPCountry_wpSetMinWindow WPObject_wpSetMinWindow
#define WPCountry_wpModifyStyle WPObject_wpModifyStyle
#define WPCountry_wpSetup WPObject_wpSetup
#define WPCountry_wpSwitchTo WPObject_wpSwitchTo
#define WPCountry_wpUnInitData WPObject_wpUnInitData
#define WPCountry_wpViewObject WPObject_wpViewObject
#define WPCountry_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPCountry_wpUnlockObject WPObject_wpUnlockObject
#define WPCountry_wpObjectReady WPObject_wpObjectReady
#define WPCountry_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPCountry_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPCountry_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPCountry_wpIsDeleteable WPObject_wpIsDeleteable
#define WPCountry_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPCountry_wpSetObjectID WPObject_wpSetObjectID
#define WPCountry_wpQueryObjectID WPObject_wpQueryObjectID
#define WPCountry_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPCountry_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPCountry_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPCountry_wpFindViewItem WPObject_wpFindViewItem
#define WPCountry_wpLockObject WPObject_wpLockObject
#define WPCountry_wpIsLocked WPObject_wpIsLocked
#define WPCountry_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPCountry_wpWaitForClose WPObject_wpWaitForClose
#define WPCountry_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPCountry_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPCountry_wpSetStyle WPObject_wpSetStyle
#define WPCountry_somInit SOMObject_somInit
#define WPCountry_somUninit SOMObject_somUninit
#define WPCountry_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPCountry_somDefaultAssign SOMObject_somDefaultAssign
#define WPCountry_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPCountry_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPCountry_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPCountry_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPCountry_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPCountry_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPCountry_somFree SOMObject_somFree
#define WPCountry_somGetClass SOMObject_somGetClass
#define WPCountry_somGetClassName SOMObject_somGetClassName
#define WPCountry_somGetSize SOMObject_somGetSize
#define WPCountry_somIsA SOMObject_somIsA
#define WPCountry_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPCountry_somRespondsTo SOMObject_somRespondsTo
#define WPCountry_somDispatch SOMObject_somDispatch
#define WPCountry_somClassDispatch SOMObject_somClassDispatch
#define WPCountry_somCastObj SOMObject_somCastObj
#define WPCountry_somResetObj SOMObject_somResetObj
#define WPCountry_somDispatchV SOMObject_somDispatchV
#define WPCountry_somDispatchL SOMObject_somDispatchL
#define WPCountry_somDispatchA SOMObject_somDispatchA
#define WPCountry_somDispatchD SOMObject_somDispatchD
#define WPCountry_somPrintSelf SOMObject_somPrintSelf
#define WPCountry_somDumpSelf SOMObject_somDumpSelf
#define WPCountry_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPCountry_h */

#ifndef SOM_M_WPCountry_h
#define SOM_M_WPCountry_h


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
#ifndef M_WPCountry
#define M_WPCountry SOMObject
#endif
#include <wpabs.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPCountry_MajorVersion 1
#define M_WPCountry_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPCountryNewClass WPcouc
#pragma linkage(WPcouc, system)
#define M_WPCountryClassData WPcoud
#define M_WPCountryCClassData WPcoux
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPCountry_classObj M_WPCountryClassData.classObject
#define _M_WPCountry M_WPCountry_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPCountryNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPCountryNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPCountryClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPCountryClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPCountryCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPCountryCClassData;

/*
 * New and Renew macros for M_WPCountry
 */
#define M_WPCountryNew() \
   ( _M_WPCountry ? \
	_somNew(_M_WPCountry) \
	: ( M_WPCountryNewClass(\
		M_WPCountry_MajorVersion, \
		M_WPCountry_MinorVersion),\
	   _somNew(_M_WPCountry)))
#define M_WPCountryRenew(buf) \
   ( _M_WPCountry ? \
	_somRenew(_M_WPCountry, buf) \
	: ( M_WPCountryNewClass(\
		M_WPCountry_MajorVersion, \
		M_WPCountry_MinorVersion),\
	   _somRenew(_M_WPCountry, buf)))

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPCountry_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPCountry_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryDefaultView
 */
#define M_WPCountry_wpclsQueryDefaultView(somSelf) \
	M_WPObject_wpclsQueryDefaultView(somSelf)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPCountry_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPCountry_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPCountry_wpclsQuerySetting M_WPAbstract_wpclsQuerySetting
#define M_WPCountry_wpclsSetSetting M_WPAbstract_wpclsSetSetting
#define M_WPCountry_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPCountry_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPCountry_wpclsInitData M_WPObject_wpclsInitData
#define M_WPCountry_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPCountry_wpclsNew M_WPObject_wpclsNew
#define M_WPCountry_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPCountry_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPCountry_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPCountry_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPCountry_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPCountry_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPCountry_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPCountry_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPCountry_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPCountry_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPCountry_wpclsSetError M_WPObject_wpclsSetError
#define M_WPCountry_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPCountry_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPCountry_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPCountry_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPCountry_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPCountry_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPCountry_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPCountry_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPCountry_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPCountry_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPCountry_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPCountry_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPCountry_somUninit SOMObject_somUninit
#define M_WPCountry_somClassReady SOMClass_somClassReady
#define M_WPCountry_somNew SOMClass_somNew
#define M_WPCountry_somRenew SOMClass_somRenew
#define M_WPCountry__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPCountry__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPCountry__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPCountry__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPCountry_somNewNoInit SOMClass_somNewNoInit
#define M_WPCountry_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPCountry_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPCountry_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPCountry_somAllocate SOMClass_somAllocate
#define M_WPCountry_somDeallocate SOMClass_somDeallocate
#define M_WPCountry__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPCountry__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPCountry_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPCountry_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPCountry_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPCountry_somInitClass SOMClass_somInitClass
#define M_WPCountry_somInitMIClass SOMClass_somInitMIClass
#define M_WPCountry_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPCountry_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPCountry_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPCountry_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPCountry_somGetClassData SOMClass_somGetClassData
#define M_WPCountry_somSetClassData SOMClass_somSetClassData
#define M_WPCountry_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPCountry_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPCountry_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPCountry_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPCountry_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPCountry_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPCountry_somGetMethodData SOMClass_somGetMethodData
#define M_WPCountry_somGetRdStub SOMClass_somGetRdStub
#define M_WPCountry_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPCountry_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPCountry_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPCountry_somGetName SOMClass_somGetName
#define M_WPCountry_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPCountry_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPCountry_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPCountry_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPCountry_somGetParent SOMClass_somGetParent
#define M_WPCountry_somGetParents SOMClass_somGetParents
#define M_WPCountry_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPCountry_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPCountry_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPCountry_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPCountry_somFindMethod SOMClass_somFindMethod
#define M_WPCountry_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPCountry_somFindSMethod SOMClass_somFindSMethod
#define M_WPCountry_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPCountry_somLookupMethod SOMClass_somLookupMethod
#define M_WPCountry_somCheckVersion SOMClass_somCheckVersion
#define M_WPCountry_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPCountry_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPCountry_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPCountry_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPCountry_somDefaultInit SOMObject_somDefaultInit
#define M_WPCountry_somDestruct SOMObject_somDestruct
#define M_WPCountry_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPCountry_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPCountry_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPCountry_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPCountry_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPCountry_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPCountry_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPCountry_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPCountry_somInit SOMObject_somInit
#define M_WPCountry_somFree SOMObject_somFree
#define M_WPCountry_somGetClass SOMObject_somGetClass
#define M_WPCountry_somGetClassName SOMObject_somGetClassName
#define M_WPCountry_somGetSize SOMObject_somGetSize
#define M_WPCountry_somIsA SOMObject_somIsA
#define M_WPCountry_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPCountry_somRespondsTo SOMObject_somRespondsTo
#define M_WPCountry_somDispatch SOMObject_somDispatch
#define M_WPCountry_somClassDispatch SOMObject_somClassDispatch
#define M_WPCountry_somCastObj SOMObject_somCastObj
#define M_WPCountry_somResetObj SOMObject_somResetObj
#define M_WPCountry_somDispatchV SOMObject_somDispatchV
#define M_WPCountry_somDispatchL SOMObject_somDispatchL
#define M_WPCountry_somDispatchA SOMObject_somDispatchA
#define M_WPCountry_somDispatchD SOMObject_somDispatchD
#define M_WPCountry_somPrintSelf SOMObject_somPrintSelf
#define M_WPCountry_somDumpSelf SOMObject_somDumpSelf
#define M_WPCountry_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPCountry_h */
