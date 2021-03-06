
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpshdir.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPSHDIR
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPSharedDir_h
#define SOM_WPSharedDir_h


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
#ifndef WPSharedDir
#define WPSharedDir SOMObject
#endif
#include <wpfolder.h>

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
#ifndef M_WPFileSystem
    #define M_WPFileSystem SOMObject
#endif /* M_WPFileSystem */
#ifndef M_WPFolder
    #define M_WPFolder SOMObject
#endif /* M_WPFolder */
#ifndef M_WPSharedDir
    #define M_WPSharedDir SOMObject
#endif /* M_WPSharedDir */

/*
 * End of bindings for IDL types.
 */

#define WPSharedDir_MajorVersion 1
#define WPSharedDir_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPSharedDirNewClass wpshdc
#pragma linkage(wpshdc, system)
#define WPSharedDirClassData wpshdd
#define WPSharedDirCClassData wpshdx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpshdir.h>
/*--------------Migration------------*/
#define WPSharedDir_classObj WPSharedDirClassData.classObject
#define _WPSharedDir WPSharedDir_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPSharedDirNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPSharedDirNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPSharedDirClassDataStructure {
	SOMClass *classObject;
	somMToken wpAddResourcePage;
} SOMDLINK WPSharedDirClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPSharedDirCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPSharedDirCClassData;

/*
 * New and Renew macros for WPSharedDir
 */
#define WPSharedDirNew() \
   ( _WPSharedDir ? \
	_somNew(_WPSharedDir) \
	: ( WPSharedDirNewClass(\
		WPSharedDir_MajorVersion, \
		WPSharedDir_MinorVersion),\
	   _somNew(_WPSharedDir)))
#define WPSharedDirRenew(buf) \
   ( _WPSharedDir ? \
	_somRenew(_WPSharedDir, buf) \
	: ( WPSharedDirNewClass(\
		WPSharedDir_MajorVersion, \
		WPSharedDir_MinorVersion),\
	   _somRenew(_WPSharedDir, buf)))

/*
 * Override method: wpAddSettingsPages
 */
#define WPSharedDir_wpAddSettingsPages(somSelf,hwndNotebook) \
	WPObject_wpAddSettingsPages(somSelf,hwndNotebook)

/*
 * Override method: wpMenuItemHelpSelected
 */
#define WPSharedDir_wpMenuItemHelpSelected(somSelf,MenuId) \
	WPObject_wpMenuItemHelpSelected(somSelf,MenuId)

/*
 * Override method: wpMenuItemSelected
 */
#define WPSharedDir_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId) \
	WPObject_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId)

/*
 * Override method: wpSaveState
 */
#define WPSharedDir_wpSaveState(somSelf) \
	WPObject_wpSaveState(somSelf)

/*
 * Override method: wpRestoreState
 */
#define WPSharedDir_wpRestoreState(somSelf,ulReserved) \
	WPObject_wpRestoreState(somSelf,ulReserved)

/*
 * Override method: wpInitData
 */
#define WPSharedDir_wpInitData(somSelf) \
	WPObject_wpInitData(somSelf)

/*
 * Override method: wpOpen
 */
#define WPSharedDir_wpOpen(somSelf,hwndCnr,ulView,param) \
	WPObject_wpOpen(somSelf,hwndCnr,ulView,param)

/*
 * Override method: wpPopulate
 */
#define WPSharedDir_wpPopulate(somSelf,ulReserved,pszPath,fFoldersOnly) \
	WPFolder_wpPopulate(somSelf,ulReserved,pszPath,fFoldersOnly)

/*
 * Override method: wpAddFolderIncludePage
 */
#define WPSharedDir_wpAddFolderIncludePage(somSelf,hwndNotebook) \
	WPFolder_wpAddFolderIncludePage(somSelf,hwndNotebook)

/*
 * Override method: wpAddFile1Page
 */
#define WPSharedDir_wpAddFile1Page(somSelf,hwndNotebook) \
	WPFileSystem_wpAddFile1Page(somSelf,hwndNotebook)

/*
 * Override method: wpAddFile2Page
 */
#define WPSharedDir_wpAddFile2Page(somSelf,hwndNotebook) \
	WPFileSystem_wpAddFile2Page(somSelf,hwndNotebook)

/*
 * Override method: wpAddFile3Page
 */
#define WPSharedDir_wpAddFile3Page(somSelf,hwndNotebook) \
	WPFileSystem_wpAddFile3Page(somSelf,hwndNotebook)

/*
 * Override method: wpAddObjectGeneralPage
 */
#define WPSharedDir_wpAddObjectGeneralPage(somSelf,hwndNotebook) \
	WPObject_wpAddObjectGeneralPage(somSelf,hwndNotebook)

/*
 * Override method: wpAddObjectGeneralPage2
 */
#define WPSharedDir_wpAddObjectGeneralPage2(somSelf,hwndNotebook) \
	WPObject_wpAddObjectGeneralPage2(somSelf,hwndNotebook)

/*
 * Override method: wpFilterMenu
 */
#define WPSharedDir_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved) \
	WPObject_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved)

/*
 * Override method: wpModifyMenu
 */
#define WPSharedDir_wpModifyMenu(somSelf,hwndMenu,hwndCnr,iPosition,ulMenuType,ulView,ulReserved) \
	WPObject_wpModifyMenu(somSelf,hwndMenu,hwndCnr,iPosition,ulMenuType,ulView,ulReserved)

/*
 * Override method: somDefaultInit
 */
#define WPSharedDir_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPSharedDir_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * New Method: wpAddResourcePage
 */
typedef ULONG   SOMLINK somTP_WPSharedDir_wpAddResourcePage(WPSharedDir *somSelf, 
		HWND hwndNotebook);
#pragma linkage(somTP_WPSharedDir_wpAddResourcePage, system)
typedef somTP_WPSharedDir_wpAddResourcePage *somTD_WPSharedDir_wpAddResourcePage;
#define somMD_WPSharedDir_wpAddResourcePage "::WPSharedDir::wpAddResourcePage"
#define WPSharedDir_wpAddResourcePage(somSelf,hwndNotebook) \
    (SOM_Resolve(somSelf, WPSharedDir, wpAddResourcePage) \
	(somSelf,hwndNotebook))
#ifndef SOMGD_wpAddResourcePage
    #if (defined(_wpAddResourcePage) || defined(__wpAddResourcePage))
        #undef _wpAddResourcePage
        #undef __wpAddResourcePage
        #define SOMGD_wpAddResourcePage 1
    #else
        #define _wpAddResourcePage WPSharedDir_wpAddResourcePage
    #endif /* _wpAddResourcePage */
#endif /* SOMGD_wpAddResourcePage */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPSharedDir_wpSetFldrFlags WPFolder_wpSetFldrFlags
#define WPSharedDir_wpQueryFldrFlags WPFolder_wpQueryFldrFlags
#define WPSharedDir_wpSetFldrFont WPFolder_wpSetFldrFont
#define WPSharedDir_wpQueryFldrFont WPFolder_wpQueryFldrFont
#define WPSharedDir_wpSetFldrAttr WPFolder_wpSetFldrAttr
#define WPSharedDir_wpQueryFldrAttr WPFolder_wpQueryFldrAttr
#define WPSharedDir_wpSetNextIconPos WPFolder_wpSetNextIconPos
#define WPSharedDir_wpQueryNextIconPos WPFolder_wpQueryNextIconPos
#define WPSharedDir_wpQueryContent WPFolder_wpQueryContent
#define WPSharedDir_wpAddFolderView1Page WPFolder_wpAddFolderView1Page
#define WPSharedDir_wpAddFolderView2Page WPFolder_wpAddFolderView2Page
#define WPSharedDir_wpAddFolderView3Page WPFolder_wpAddFolderView3Page
#define WPSharedDir_wpAddFolderSortPage WPFolder_wpAddFolderSortPage
#define WPSharedDir_wpAddFolderBackgroundPage WPFolder_wpAddFolderBackgroundPage
#define WPSharedDir_wpAddFolderMenu2Page WPFolder_wpAddFolderMenu2Page
#define WPSharedDir_wpAddFolderSelfClosePage WPFolder_wpAddFolderSelfClosePage
#define WPSharedDir_wpInitIconPosData WPFolder_wpInitIconPosData
#define WPSharedDir_wpFreeIconPosData WPFolder_wpFreeIconPosData
#define WPSharedDir_wpStoreIconPosData WPFolder_wpStoreIconPosData
#define WPSharedDir_wpQueryIconPosition WPFolder_wpQueryIconPosition
#define WPSharedDir_wpSetFldrSort WPFolder_wpSetFldrSort
#define WPSharedDir_wpQueryFldrSort WPFolder_wpQueryFldrSort
#define WPSharedDir_wpRestoreFldrRunObjs WPFolder_wpRestoreFldrRunObjs
#define WPSharedDir_wpStoreFldrRunObjs WPFolder_wpStoreFldrRunObjs
#define WPSharedDir_wpHideFldrRunObjs WPFolder_wpHideFldrRunObjs
#define WPSharedDir_wpDeleteContents WPFolder_wpDeleteContents
#define WPSharedDir_wpSetFldrDetailsClass WPFolder_wpSetFldrDetailsClass
#define WPSharedDir_wpQueryFldrDetailsClass WPFolder_wpQueryFldrDetailsClass
#define WPSharedDir_wpSearchFolder WPFolder_wpSearchFolder
#define WPSharedDir_wpContainsFolders WPFolder_wpContainsFolders
#define WPSharedDir_wpQueryOpenFolders WPFolder_wpQueryOpenFolders
#define WPSharedDir_wpModifyFldrFlags WPFolder_wpModifyFldrFlags
#define WPSharedDir_wpAddToContent WPFolder_wpAddToContent
#define WPSharedDir_wpDeleteFromContent WPFolder_wpDeleteFromContent
#define WPSharedDir_wpSetDetailsColumnVisibility WPFolder_wpSetDetailsColumnVisibility
#define WPSharedDir_wpIsDetailsColumnVisible WPFolder_wpIsDetailsColumnVisible
#define WPSharedDir_wpSetFldrSortClass WPFolder_wpSetFldrSortClass
#define WPSharedDir_wpQueryFldrSortClass WPFolder_wpQueryFldrSortClass
#define WPSharedDir_wpSetSortAttribAvailable WPFolder_wpSetSortAttribAvailable
#define WPSharedDir_wpIsSortAttribAvailable WPFolder_wpIsSortAttribAvailable
#define WPSharedDir_wpQueryIconViewPos WPFolder_wpQueryIconViewPos
#define WPSharedDir_wpAddFirstChild WPFolder_wpAddFirstChild
#define WPSharedDir_wpFlushNotifications WPFolder_wpFlushNotifications
#define WPSharedDir_wpSetMenuBarVisibility WPFolder_wpSetMenuBarVisibility
#define WPSharedDir_wpQueryMenuBarVisibility WPFolder_wpQueryMenuBarVisibility
#define WPSharedDir_wpQueryIconTextBackgroundColor WPFolder_wpQueryIconTextBackgroundColor
#define WPSharedDir_wpSetIconTextBackgroundColor WPFolder_wpSetIconTextBackgroundColor
#define WPSharedDir_wpQueryIconTextColor WPFolder_wpQueryIconTextColor
#define WPSharedDir_wpSetIconTextColor WPFolder_wpSetIconTextColor
#define WPSharedDir_wpQueryShadowTextColor WPFolder_wpQueryShadowTextColor
#define WPSharedDir_wpSetShadowTextColor WPFolder_wpSetShadowTextColor
#define WPSharedDir_wpQueryIconTextVisibility WPFolder_wpQueryIconTextVisibility
#define WPSharedDir_wpSetIconTextVisibility WPFolder_wpSetIconTextVisibility
#define WPSharedDir_wpQueryFldrBackground WPFolder_wpQueryFldrBackground
#define WPSharedDir_wpSetFldrBackground WPFolder_wpSetFldrBackground
#define WPSharedDir_wpUnInitData WPObject_wpUnInitData
#define WPSharedDir_wpFree WPObject_wpFree
#define WPSharedDir_wpDelete WPObject_wpDelete
#define WPSharedDir_wpConfirmDelete WPObject_wpConfirmDelete
#define WPSharedDir_wpSetup WPObject_wpSetup
#define WPSharedDir_wpMoveObject WPObject_wpMoveObject
#define WPSharedDir_wpDrop WPObject_wpDrop
#define WPSharedDir_wpDragOver WPObject_wpDragOver
#define WPSharedDir_wpFormatDragItem WPObject_wpFormatDragItem
#define WPSharedDir_wpRender WPObject_wpRender
#define WPSharedDir_wpRefresh WPFileSystem_wpRefresh
#define WPSharedDir_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPSharedDir_wpRenderComplete WPObject_wpRenderComplete
#define WPSharedDir_wpAddFileMenuPage WPFileSystem_wpAddFileMenuPage
#define WPSharedDir_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPSharedDir_wpObjectReady WPObject_wpObjectReady
#define WPSharedDir_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPSharedDir_wpDisplayMenu WPObject_wpDisplayMenu
#define WPSharedDir_wpSetIconData WPObject_wpSetIconData
#define WPSharedDir_wpSetRealName WPFileSystem_wpSetRealName
#define WPSharedDir_wpSetType WPFileSystem_wpSetType
#define WPSharedDir_wpQueryType WPFileSystem_wpQueryType
#define WPSharedDir_wpSetAttr WPFileSystem_wpSetAttr
#define WPSharedDir_wpQueryAttr WPFileSystem_wpQueryAttr
#define WPSharedDir_wpQueryCreation WPFileSystem_wpQueryCreation
#define WPSharedDir_wpQueryLastAccess WPFileSystem_wpQueryLastAccess
#define WPSharedDir_wpQueryLastWrite WPFileSystem_wpQueryLastWrite
#define WPSharedDir_wpQueryFileSize WPFileSystem_wpQueryFileSize
#define WPSharedDir_wpQueryEASize WPFileSystem_wpQueryEASize
#define WPSharedDir_wpSetDateInfo WPFileSystem_wpSetDateInfo
#define WPSharedDir_wpSetFileSizeInfo WPFileSystem_wpSetFileSizeInfo
#define WPSharedDir_wpQueryRefreshFlags WPFileSystem_wpQueryRefreshFlags
#define WPSharedDir_wpSetRefreshFlags WPFileSystem_wpSetRefreshFlags
#define WPSharedDir_wpPrintPlainTextFile WPFileSystem_wpPrintPlainTextFile
#define WPSharedDir_wpSetTitleAndRenameFile WPFileSystem_wpSetTitleAndRenameFile
#define WPSharedDir_wpConfirmRenameFileWithExt WPFileSystem_wpConfirmRenameFileWithExt
#define WPSharedDir_wpVerifyUpdateAccess WPFileSystem_wpVerifyUpdateAccess
#define WPSharedDir_wpQueryEASupport WPFileSystem_wpQueryEASupport
#define WPSharedDir_wpAddUserItemsToPopupMenu WPFileSystem_wpAddUserItemsToPopupMenu
#define WPSharedDir_wpIsDiskSwapped WPFileSystem_wpIsDiskSwapped
#define WPSharedDir_wpQueryRealName WPFileSystem_wpQueryRealName
#define WPSharedDir_wpQueryFilename WPFileSystem_wpQueryFilename
#define WPSharedDir_wpQueryDisk WPFileSystem_wpQueryDisk
#define WPSharedDir_wpQueryDateInfo WPFileSystem_wpQueryDateInfo
#define WPSharedDir_wpConfirmKeepAssoc WPFileSystem_wpConfirmKeepAssoc
#define WPSharedDir_wpQueryFileSizeL WPFileSystem_wpQueryFileSizeL
#define WPSharedDir_wpSetFileSizeL WPFileSystem_wpSetFileSizeL
#define WPSharedDir_wpQueryHandle WPObject_wpQueryHandle
#define WPSharedDir_wpSaveImmediate WPObject_wpSaveImmediate
#define WPSharedDir_wpSetTitle WPObject_wpSetTitle
#define WPSharedDir_wpViewObject WPObject_wpViewObject
#define WPSharedDir_wpSwitchTo WPObject_wpSwitchTo
#define WPSharedDir_wpCopyObject WPObject_wpCopyObject
#define WPSharedDir_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPSharedDir_wpQueryIcon WPObject_wpQueryIcon
#define WPSharedDir_wpQueryIconData WPObject_wpQueryIconData
#define WPSharedDir_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPSharedDir_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPSharedDir_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPSharedDir_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPSharedDir_wpAppendObject WPObject_wpAppendObject
#define WPSharedDir_wpReplaceObject WPObject_wpReplaceObject
#define WPSharedDir_wpQueryStyle WPObject_wpQueryStyle
#define WPSharedDir_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPSharedDir_wpIdentify WPObject_wpIdentify
#define WPSharedDir_wpIsDeleteable WPObject_wpIsDeleteable
#define WPSharedDir_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPSharedDir_wpAllocMem WPObject_wpAllocMem
#define WPSharedDir_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPSharedDir_wpClose WPObject_wpClose
#define WPSharedDir_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPSharedDir_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPSharedDir_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPSharedDir_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPSharedDir_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPSharedDir_wpCreateAnother WPObject_wpCreateAnother
#define WPSharedDir_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPSharedDir_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPSharedDir_wpDisplayHelp WPObject_wpDisplayHelp
#define WPSharedDir_wpEndConversation WPObject_wpEndConversation
#define WPSharedDir_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPSharedDir_wpFindUseItem WPObject_wpFindUseItem
#define WPSharedDir_wpFreeMem WPObject_wpFreeMem
#define WPSharedDir_wpHide WPObject_wpHide
#define WPSharedDir_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPSharedDir_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPSharedDir_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPSharedDir_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPSharedDir_wpPrintObject WPObject_wpPrintObject
#define WPSharedDir_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPSharedDir_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPSharedDir_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPSharedDir_wpQueryError WPObject_wpQueryError
#define WPSharedDir_wpSetFolder WPObject_wpSetFolder
#define WPSharedDir_wpQueryFolder WPObject_wpQueryFolder
#define WPSharedDir_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPSharedDir_wpSetTaskRec WPObject_wpSetTaskRec
#define WPSharedDir_wpFindTaskRec WPObject_wpFindTaskRec
#define WPSharedDir_wpQueryTitle WPObject_wpQueryTitle
#define WPSharedDir_wpRegisterView WPObject_wpRegisterView
#define WPSharedDir_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPSharedDir_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPSharedDir_wpRestore WPObject_wpRestore
#define WPSharedDir_wpRestoreData WPObject_wpRestoreData
#define WPSharedDir_wpRestoreLong WPObject_wpRestoreLong
#define WPSharedDir_wpRestoreString WPObject_wpRestoreString
#define WPSharedDir_wpSaveData WPObject_wpSaveData
#define WPSharedDir_wpSaveDeferred WPObject_wpSaveDeferred
#define WPSharedDir_wpSaveLong WPObject_wpSaveLong
#define WPSharedDir_wpSaveString WPObject_wpSaveString
#define WPSharedDir_wpScanSetupString WPObject_wpScanSetupString
#define WPSharedDir_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPSharedDir_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPSharedDir_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPSharedDir_wpSetDefaultView WPObject_wpSetDefaultView
#define WPSharedDir_wpSetError WPObject_wpSetError
#define WPSharedDir_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPSharedDir_wpSetupOnce WPObject_wpSetupOnce
#define WPSharedDir_wpSetIcon WPObject_wpSetIcon
#define WPSharedDir_wpSetMinWindow WPObject_wpSetMinWindow
#define WPSharedDir_wpModifyStyle WPObject_wpModifyStyle
#define WPSharedDir_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPSharedDir_wpUnlockObject WPObject_wpUnlockObject
#define WPSharedDir_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPSharedDir_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPSharedDir_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPSharedDir_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPSharedDir_wpSetObjectID WPObject_wpSetObjectID
#define WPSharedDir_wpQueryObjectID WPObject_wpQueryObjectID
#define WPSharedDir_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPSharedDir_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPSharedDir_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPSharedDir_wpFindViewItem WPObject_wpFindViewItem
#define WPSharedDir_wpLockObject WPObject_wpLockObject
#define WPSharedDir_wpIsLocked WPObject_wpIsLocked
#define WPSharedDir_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPSharedDir_wpWaitForClose WPObject_wpWaitForClose
#define WPSharedDir_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPSharedDir_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPSharedDir_wpSetStyle WPObject_wpSetStyle
#define WPSharedDir_somInit SOMObject_somInit
#define WPSharedDir_somUninit SOMObject_somUninit
#define WPSharedDir_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPSharedDir_somDefaultAssign SOMObject_somDefaultAssign
#define WPSharedDir_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPSharedDir_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPSharedDir_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPSharedDir_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPSharedDir_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPSharedDir_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPSharedDir_somFree SOMObject_somFree
#define WPSharedDir_somGetClass SOMObject_somGetClass
#define WPSharedDir_somGetClassName SOMObject_somGetClassName
#define WPSharedDir_somGetSize SOMObject_somGetSize
#define WPSharedDir_somIsA SOMObject_somIsA
#define WPSharedDir_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPSharedDir_somRespondsTo SOMObject_somRespondsTo
#define WPSharedDir_somDispatch SOMObject_somDispatch
#define WPSharedDir_somClassDispatch SOMObject_somClassDispatch
#define WPSharedDir_somCastObj SOMObject_somCastObj
#define WPSharedDir_somResetObj SOMObject_somResetObj
#define WPSharedDir_somDispatchV SOMObject_somDispatchV
#define WPSharedDir_somDispatchL SOMObject_somDispatchL
#define WPSharedDir_somDispatchA SOMObject_somDispatchA
#define WPSharedDir_somDispatchD SOMObject_somDispatchD
#define WPSharedDir_somPrintSelf SOMObject_somPrintSelf
#define WPSharedDir_somDumpSelf SOMObject_somDumpSelf
#define WPSharedDir_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPSharedDir_h */

#ifndef SOM_M_WPSharedDir_h
#define SOM_M_WPSharedDir_h


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
#ifndef M_WPSharedDir
#define M_WPSharedDir SOMObject
#endif
#include <wpfolder.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPSharedDir_MajorVersion 1
#define M_WPSharedDir_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPSharedDirNewClass wpshdc
#pragma linkage(wpshdc, system)
#define M_WPSharedDirClassData wpshdd
#define M_WPSharedDirCClassData wpshdx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPSharedDir_classObj M_WPSharedDirClassData.classObject
#define _M_WPSharedDir M_WPSharedDir_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPSharedDirNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPSharedDirNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPSharedDirClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPSharedDirClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPSharedDirCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPSharedDirCClassData;

/*
 * New and Renew macros for M_WPSharedDir
 */
#define M_WPSharedDirNew() \
   ( _M_WPSharedDir ? \
	_somNew(_M_WPSharedDir) \
	: ( M_WPSharedDirNewClass(\
		M_WPSharedDir_MajorVersion, \
		M_WPSharedDir_MinorVersion),\
	   _somNew(_M_WPSharedDir)))
#define M_WPSharedDirRenew(buf) \
   ( _M_WPSharedDir ? \
	_somRenew(_M_WPSharedDir, buf) \
	: ( M_WPSharedDirNewClass(\
		M_WPSharedDir_MajorVersion, \
		M_WPSharedDir_MinorVersion),\
	   _somRenew(_M_WPSharedDir, buf)))

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPSharedDir_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPSharedDir_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryIconDataN
 */
#define M_WPSharedDir_wpclsQueryIconDataN(somSelf,pIconInfo,ulIconIndex) \
	M_WPFolder_wpclsQueryIconDataN(somSelf,pIconInfo,ulIconIndex)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPSharedDir_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPSharedDir_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)

/*
 * Override method: wpclsQueryDefaultView
 */
#define M_WPSharedDir_wpclsQueryDefaultView(somSelf) \
	M_WPObject_wpclsQueryDefaultView(somSelf)

/*
 * Override method: wpclsQuerySettingsPageSize
 */
#define M_WPSharedDir_wpclsQuerySettingsPageSize(somSelf,pSizl) \
	M_WPObject_wpclsQuerySettingsPageSize(somSelf,pSizl)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPSharedDir_wpclsQueryIconN M_WPFolder_wpclsQueryIconN
#define M_WPSharedDir_wpclsQueryOpenFolders M_WPFolder_wpclsQueryOpenFolders
#define M_WPSharedDir_wpclsInitData M_WPObject_wpclsInitData
#define M_WPSharedDir_wpclsQueryAwakeObject M_WPFileSystem_wpclsQueryAwakeObject
#define M_WPSharedDir_wpclsFileSysExists M_WPFileSystem_wpclsFileSysExists
#define M_WPSharedDir_wpclsQueryObjectFromPath M_WPFileSystem_wpclsQueryObjectFromPath
#define M_WPSharedDir_wpclsQueryInstanceType M_WPFileSystem_wpclsQueryInstanceType
#define M_WPSharedDir_wpclsQueryInstanceFilter M_WPFileSystem_wpclsQueryInstanceFilter
#define M_WPSharedDir_wpclsQueryInstanceClass M_WPFileSystem_wpclsQueryInstanceClass
#define M_WPSharedDir_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPSharedDir_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPSharedDir_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPSharedDir_wpclsNew M_WPObject_wpclsNew
#define M_WPSharedDir_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPSharedDir_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPSharedDir_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPSharedDir_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPSharedDir_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPSharedDir_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPSharedDir_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPSharedDir_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPSharedDir_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPSharedDir_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPSharedDir_wpclsSetError M_WPObject_wpclsSetError
#define M_WPSharedDir_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPSharedDir_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPSharedDir_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPSharedDir_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPSharedDir_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPSharedDir_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPSharedDir_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPSharedDir_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPSharedDir_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPSharedDir_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPSharedDir_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPSharedDir_somUninit SOMObject_somUninit
#define M_WPSharedDir_somClassReady SOMClass_somClassReady
#define M_WPSharedDir_somNew SOMClass_somNew
#define M_WPSharedDir_somRenew SOMClass_somRenew
#define M_WPSharedDir__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPSharedDir__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPSharedDir__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPSharedDir__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPSharedDir_somNewNoInit SOMClass_somNewNoInit
#define M_WPSharedDir_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPSharedDir_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPSharedDir_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPSharedDir_somAllocate SOMClass_somAllocate
#define M_WPSharedDir_somDeallocate SOMClass_somDeallocate
#define M_WPSharedDir__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPSharedDir__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPSharedDir_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPSharedDir_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPSharedDir_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPSharedDir_somInitClass SOMClass_somInitClass
#define M_WPSharedDir_somInitMIClass SOMClass_somInitMIClass
#define M_WPSharedDir_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPSharedDir_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPSharedDir_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPSharedDir_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPSharedDir_somGetClassData SOMClass_somGetClassData
#define M_WPSharedDir_somSetClassData SOMClass_somSetClassData
#define M_WPSharedDir_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPSharedDir_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPSharedDir_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPSharedDir_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPSharedDir_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPSharedDir_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPSharedDir_somGetMethodData SOMClass_somGetMethodData
#define M_WPSharedDir_somGetRdStub SOMClass_somGetRdStub
#define M_WPSharedDir_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPSharedDir_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPSharedDir_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPSharedDir_somGetName SOMClass_somGetName
#define M_WPSharedDir_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPSharedDir_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPSharedDir_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPSharedDir_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPSharedDir_somGetParent SOMClass_somGetParent
#define M_WPSharedDir_somGetParents SOMClass_somGetParents
#define M_WPSharedDir_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPSharedDir_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPSharedDir_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPSharedDir_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPSharedDir_somFindMethod SOMClass_somFindMethod
#define M_WPSharedDir_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPSharedDir_somFindSMethod SOMClass_somFindSMethod
#define M_WPSharedDir_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPSharedDir_somLookupMethod SOMClass_somLookupMethod
#define M_WPSharedDir_somCheckVersion SOMClass_somCheckVersion
#define M_WPSharedDir_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPSharedDir_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPSharedDir_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPSharedDir_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPSharedDir_somDefaultInit SOMObject_somDefaultInit
#define M_WPSharedDir_somDestruct SOMObject_somDestruct
#define M_WPSharedDir_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPSharedDir_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPSharedDir_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPSharedDir_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPSharedDir_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPSharedDir_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPSharedDir_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPSharedDir_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPSharedDir_somInit SOMObject_somInit
#define M_WPSharedDir_somFree SOMObject_somFree
#define M_WPSharedDir_somGetClass SOMObject_somGetClass
#define M_WPSharedDir_somGetClassName SOMObject_somGetClassName
#define M_WPSharedDir_somGetSize SOMObject_somGetSize
#define M_WPSharedDir_somIsA SOMObject_somIsA
#define M_WPSharedDir_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPSharedDir_somRespondsTo SOMObject_somRespondsTo
#define M_WPSharedDir_somDispatch SOMObject_somDispatch
#define M_WPSharedDir_somClassDispatch SOMObject_somClassDispatch
#define M_WPSharedDir_somCastObj SOMObject_somCastObj
#define M_WPSharedDir_somResetObj SOMObject_somResetObj
#define M_WPSharedDir_somDispatchV SOMObject_somDispatchV
#define M_WPSharedDir_somDispatchL SOMObject_somDispatchL
#define M_WPSharedDir_somDispatchA SOMObject_somDispatchA
#define M_WPSharedDir_somDispatchD SOMObject_somDispatchD
#define M_WPSharedDir_somPrintSelf SOMObject_somPrintSelf
#define M_WPSharedDir_somDumpSelf SOMObject_somDumpSelf
#define M_WPSharedDir_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPSharedDir_h */
