
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wprootf.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPROOTF
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPRootFolder_h
#define SOM_WPRootFolder_h


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
#ifndef WPRootFolder
#define WPRootFolder SOMObject
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
#ifndef M_WPRootFolder
    #define M_WPRootFolder SOMObject
#endif /* M_WPRootFolder */

/*
 * End of bindings for IDL types.
 */

#define WPRootFolder_MajorVersion 1
#define WPRootFolder_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPRootFolderNewClass wprfc
#pragma linkage(wprfc, system)
#define WPRootFolderClassData wprfd
#define WPRootFolderCClassData wprfx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wprootf.h>
/*--------------Migration------------*/
#define WPRootFolder_classObj WPRootFolderClassData.classObject
#define _WPRootFolder WPRootFolder_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPRootFolderNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPRootFolderNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPRootFolderClassDataStructure {
	SOMClass *classObject;
	somMToken wpRootFolderPrivate1;
	somMToken wpRefresh;
} SOMDLINK WPRootFolderClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPRootFolderCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPRootFolderCClassData;

/*
 * New and Renew macros for WPRootFolder
 */
#define WPRootFolderNew() \
   ( _WPRootFolder ? \
	_somNew(_WPRootFolder) \
	: ( WPRootFolderNewClass(\
		WPRootFolder_MajorVersion, \
		WPRootFolder_MinorVersion),\
	   _somNew(_WPRootFolder)))
#define WPRootFolderRenew(buf) \
   ( _WPRootFolder ? \
	_somRenew(_WPRootFolder, buf) \
	: ( WPRootFolderNewClass(\
		WPRootFolder_MajorVersion, \
		WPRootFolder_MinorVersion),\
	   _somRenew(_WPRootFolder, buf)))

/*
 * Override method: wpSetTitle
 */
#define WPRootFolder_wpSetTitle(somSelf,pszNewTitle) \
	WPObject_wpSetTitle(somSelf,pszNewTitle)

/*
 * Override method: wpOpen
 */
#define WPRootFolder_wpOpen(somSelf,hwndCnr,ulView,param) \
	WPObject_wpOpen(somSelf,hwndCnr,ulView,param)

/*
 * Override method: wpSaveState
 */
#define WPRootFolder_wpSaveState(somSelf) \
	WPObject_wpSaveState(somSelf)

/*
 * Override method: wpRestoreState
 */
#define WPRootFolder_wpRestoreState(somSelf,ulReserved) \
	WPObject_wpRestoreState(somSelf,ulReserved)

/*
 * Override method: wpAddFile1Page
 */
#define WPRootFolder_wpAddFile1Page(somSelf,hwndNotebook) \
	WPFileSystem_wpAddFile1Page(somSelf,hwndNotebook)

/*
 * Override method: wpAddFile2Page
 */
#define WPRootFolder_wpAddFile2Page(somSelf,hwndNotebook) \
	WPFileSystem_wpAddFile2Page(somSelf,hwndNotebook)

/*
 * Override method: wpAddFile3Page
 */
#define WPRootFolder_wpAddFile3Page(somSelf,hwndNotebook) \
	WPFileSystem_wpAddFile3Page(somSelf,hwndNotebook)

/*
 * Override method: wpSetDefaultView
 */
#define WPRootFolder_wpSetDefaultView(somSelf,ulView) \
	WPObject_wpSetDefaultView(somSelf,ulView)

/*
 * Override method: wpRefresh
 */
#define WPRootFolder_wpRefresh(somSelf,ulView,pReserved) \
	WPFileSystem_wpRefresh(somSelf,ulView,pReserved)

/*
 * Override method: wpFilterMenu
 */
#define WPRootFolder_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved) \
	WPObject_wpFilterMenu(somSelf,pFlags,hwndCnr,fMultiSelect,ulMenuType,ulView,ulReserved)

/*
 * Override method: somDefaultInit
 */
#define WPRootFolder_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPRootFolder_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * Override method: wpViewObject
 */
#define WPRootFolder_wpViewObject(somSelf,hwndCnr,ulView,param) \
	WPObject_wpViewObject(somSelf,hwndCnr,ulView,param)

/*
 * Override method: wpFindViewItem
 */
#define WPRootFolder_wpFindViewItem(somSelf,flViews,pCurrentItem) \
	WPObject_wpFindViewItem(somSelf,flViews,pCurrentItem)

/*
 * Override method: wpSetFldrSort
 */
#define WPRootFolder_wpSetFldrSort(somSelf,pSortRecord,ulView,ulType) \
	WPFolder_wpSetFldrSort(somSelf,pSortRecord,ulView,ulType)

/*
 * Override method: wpQueryDisk
 */
#define WPRootFolder_wpQueryDisk(somSelf) \
	WPFileSystem_wpQueryDisk(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPRootFolder_wpSetFldrFlags WPFolder_wpSetFldrFlags
#define WPRootFolder_wpQueryFldrFlags WPFolder_wpQueryFldrFlags
#define WPRootFolder_wpSetFldrFont WPFolder_wpSetFldrFont
#define WPRootFolder_wpQueryFldrFont WPFolder_wpQueryFldrFont
#define WPRootFolder_wpSetFldrAttr WPFolder_wpSetFldrAttr
#define WPRootFolder_wpQueryFldrAttr WPFolder_wpQueryFldrAttr
#define WPRootFolder_wpSetNextIconPos WPFolder_wpSetNextIconPos
#define WPRootFolder_wpQueryNextIconPos WPFolder_wpQueryNextIconPos
#define WPRootFolder_wpPopulate WPFolder_wpPopulate
#define WPRootFolder_wpQueryContent WPFolder_wpQueryContent
#define WPRootFolder_wpAddFolderView1Page WPFolder_wpAddFolderView1Page
#define WPRootFolder_wpAddFolderView2Page WPFolder_wpAddFolderView2Page
#define WPRootFolder_wpAddFolderView3Page WPFolder_wpAddFolderView3Page
#define WPRootFolder_wpAddFolderIncludePage WPFolder_wpAddFolderIncludePage
#define WPRootFolder_wpAddFolderSortPage WPFolder_wpAddFolderSortPage
#define WPRootFolder_wpAddFolderBackgroundPage WPFolder_wpAddFolderBackgroundPage
#define WPRootFolder_wpAddFolderMenu2Page WPFolder_wpAddFolderMenu2Page
#define WPRootFolder_wpAddFolderSelfClosePage WPFolder_wpAddFolderSelfClosePage
#define WPRootFolder_wpInitIconPosData WPFolder_wpInitIconPosData
#define WPRootFolder_wpFreeIconPosData WPFolder_wpFreeIconPosData
#define WPRootFolder_wpStoreIconPosData WPFolder_wpStoreIconPosData
#define WPRootFolder_wpQueryIconPosition WPFolder_wpQueryIconPosition
#define WPRootFolder_wpQueryFldrSort WPFolder_wpQueryFldrSort
#define WPRootFolder_wpRestoreFldrRunObjs WPFolder_wpRestoreFldrRunObjs
#define WPRootFolder_wpStoreFldrRunObjs WPFolder_wpStoreFldrRunObjs
#define WPRootFolder_wpHideFldrRunObjs WPFolder_wpHideFldrRunObjs
#define WPRootFolder_wpDeleteContents WPFolder_wpDeleteContents
#define WPRootFolder_wpSetFldrDetailsClass WPFolder_wpSetFldrDetailsClass
#define WPRootFolder_wpQueryFldrDetailsClass WPFolder_wpQueryFldrDetailsClass
#define WPRootFolder_wpSearchFolder WPFolder_wpSearchFolder
#define WPRootFolder_wpContainsFolders WPFolder_wpContainsFolders
#define WPRootFolder_wpQueryOpenFolders WPFolder_wpQueryOpenFolders
#define WPRootFolder_wpModifyFldrFlags WPFolder_wpModifyFldrFlags
#define WPRootFolder_wpAddToContent WPFolder_wpAddToContent
#define WPRootFolder_wpDeleteFromContent WPFolder_wpDeleteFromContent
#define WPRootFolder_wpSetDetailsColumnVisibility WPFolder_wpSetDetailsColumnVisibility
#define WPRootFolder_wpIsDetailsColumnVisible WPFolder_wpIsDetailsColumnVisible
#define WPRootFolder_wpSetFldrSortClass WPFolder_wpSetFldrSortClass
#define WPRootFolder_wpQueryFldrSortClass WPFolder_wpQueryFldrSortClass
#define WPRootFolder_wpSetSortAttribAvailable WPFolder_wpSetSortAttribAvailable
#define WPRootFolder_wpIsSortAttribAvailable WPFolder_wpIsSortAttribAvailable
#define WPRootFolder_wpQueryIconViewPos WPFolder_wpQueryIconViewPos
#define WPRootFolder_wpAddFirstChild WPFolder_wpAddFirstChild
#define WPRootFolder_wpFlushNotifications WPFolder_wpFlushNotifications
#define WPRootFolder_wpSetMenuBarVisibility WPFolder_wpSetMenuBarVisibility
#define WPRootFolder_wpQueryMenuBarVisibility WPFolder_wpQueryMenuBarVisibility
#define WPRootFolder_wpQueryIconTextBackgroundColor WPFolder_wpQueryIconTextBackgroundColor
#define WPRootFolder_wpSetIconTextBackgroundColor WPFolder_wpSetIconTextBackgroundColor
#define WPRootFolder_wpQueryIconTextColor WPFolder_wpQueryIconTextColor
#define WPRootFolder_wpSetIconTextColor WPFolder_wpSetIconTextColor
#define WPRootFolder_wpQueryShadowTextColor WPFolder_wpQueryShadowTextColor
#define WPRootFolder_wpSetShadowTextColor WPFolder_wpSetShadowTextColor
#define WPRootFolder_wpQueryIconTextVisibility WPFolder_wpQueryIconTextVisibility
#define WPRootFolder_wpSetIconTextVisibility WPFolder_wpSetIconTextVisibility
#define WPRootFolder_wpQueryFldrBackground WPFolder_wpQueryFldrBackground
#define WPRootFolder_wpSetFldrBackground WPFolder_wpSetFldrBackground
#define WPRootFolder_wpInitData WPObject_wpInitData
#define WPRootFolder_wpUnInitData WPObject_wpUnInitData
#define WPRootFolder_wpFree WPObject_wpFree
#define WPRootFolder_wpDelete WPObject_wpDelete
#define WPRootFolder_wpConfirmDelete WPObject_wpConfirmDelete
#define WPRootFolder_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPRootFolder_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPRootFolder_wpSetup WPObject_wpSetup
#define WPRootFolder_wpMoveObject WPObject_wpMoveObject
#define WPRootFolder_wpDrop WPObject_wpDrop
#define WPRootFolder_wpDragOver WPObject_wpDragOver
#define WPRootFolder_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPRootFolder_wpFormatDragItem WPObject_wpFormatDragItem
#define WPRootFolder_wpRender WPObject_wpRender
#define WPRootFolder_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPRootFolder_wpRenderComplete WPObject_wpRenderComplete
#define WPRootFolder_wpAddFileMenuPage WPFileSystem_wpAddFileMenuPage
#define WPRootFolder_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPRootFolder_wpObjectReady WPObject_wpObjectReady
#define WPRootFolder_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPRootFolder_wpModifyMenu WPObject_wpModifyMenu
#define WPRootFolder_wpDisplayMenu WPObject_wpDisplayMenu
#define WPRootFolder_wpSetIconData WPObject_wpSetIconData
#define WPRootFolder_wpSetRealName WPFileSystem_wpSetRealName
#define WPRootFolder_wpSetType WPFileSystem_wpSetType
#define WPRootFolder_wpQueryType WPFileSystem_wpQueryType
#define WPRootFolder_wpSetAttr WPFileSystem_wpSetAttr
#define WPRootFolder_wpQueryAttr WPFileSystem_wpQueryAttr
#define WPRootFolder_wpQueryCreation WPFileSystem_wpQueryCreation
#define WPRootFolder_wpQueryLastAccess WPFileSystem_wpQueryLastAccess
#define WPRootFolder_wpQueryLastWrite WPFileSystem_wpQueryLastWrite
#define WPRootFolder_wpQueryFileSize WPFileSystem_wpQueryFileSize
#define WPRootFolder_wpQueryEASize WPFileSystem_wpQueryEASize
#define WPRootFolder_wpSetDateInfo WPFileSystem_wpSetDateInfo
#define WPRootFolder_wpSetFileSizeInfo WPFileSystem_wpSetFileSizeInfo
#define WPRootFolder_wpQueryRefreshFlags WPFileSystem_wpQueryRefreshFlags
#define WPRootFolder_wpSetRefreshFlags WPFileSystem_wpSetRefreshFlags
#define WPRootFolder_wpPrintPlainTextFile WPFileSystem_wpPrintPlainTextFile
#define WPRootFolder_wpSetTitleAndRenameFile WPFileSystem_wpSetTitleAndRenameFile
#define WPRootFolder_wpConfirmRenameFileWithExt WPFileSystem_wpConfirmRenameFileWithExt
#define WPRootFolder_wpVerifyUpdateAccess WPFileSystem_wpVerifyUpdateAccess
#define WPRootFolder_wpQueryEASupport WPFileSystem_wpQueryEASupport
#define WPRootFolder_wpAddUserItemsToPopupMenu WPFileSystem_wpAddUserItemsToPopupMenu
#define WPRootFolder_wpIsDiskSwapped WPFileSystem_wpIsDiskSwapped
#define WPRootFolder_wpQueryRealName WPFileSystem_wpQueryRealName
#define WPRootFolder_wpQueryFilename WPFileSystem_wpQueryFilename
#define WPRootFolder_wpQueryDateInfo WPFileSystem_wpQueryDateInfo
#define WPRootFolder_wpConfirmKeepAssoc WPFileSystem_wpConfirmKeepAssoc
#define WPRootFolder_wpQueryFileSizeL WPFileSystem_wpQueryFileSizeL
#define WPRootFolder_wpSetFileSizeL WPFileSystem_wpSetFileSizeL
#define WPRootFolder_wpQueryHandle WPObject_wpQueryHandle
#define WPRootFolder_wpSaveImmediate WPObject_wpSaveImmediate
#define WPRootFolder_wpSwitchTo WPObject_wpSwitchTo
#define WPRootFolder_wpCopyObject WPObject_wpCopyObject
#define WPRootFolder_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPRootFolder_wpQueryIcon WPObject_wpQueryIcon
#define WPRootFolder_wpQueryIconData WPObject_wpQueryIconData
#define WPRootFolder_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPRootFolder_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPRootFolder_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPRootFolder_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPRootFolder_wpAppendObject WPObject_wpAppendObject
#define WPRootFolder_wpReplaceObject WPObject_wpReplaceObject
#define WPRootFolder_wpQueryStyle WPObject_wpQueryStyle
#define WPRootFolder_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPRootFolder_wpIdentify WPObject_wpIdentify
#define WPRootFolder_wpIsDeleteable WPObject_wpIsDeleteable
#define WPRootFolder_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPRootFolder_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPRootFolder_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPRootFolder_wpAllocMem WPObject_wpAllocMem
#define WPRootFolder_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPRootFolder_wpClose WPObject_wpClose
#define WPRootFolder_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPRootFolder_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPRootFolder_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPRootFolder_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPRootFolder_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPRootFolder_wpCreateAnother WPObject_wpCreateAnother
#define WPRootFolder_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPRootFolder_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPRootFolder_wpDisplayHelp WPObject_wpDisplayHelp
#define WPRootFolder_wpEndConversation WPObject_wpEndConversation
#define WPRootFolder_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPRootFolder_wpFindUseItem WPObject_wpFindUseItem
#define WPRootFolder_wpFreeMem WPObject_wpFreeMem
#define WPRootFolder_wpHide WPObject_wpHide
#define WPRootFolder_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPRootFolder_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPRootFolder_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPRootFolder_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPRootFolder_wpPrintObject WPObject_wpPrintObject
#define WPRootFolder_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPRootFolder_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPRootFolder_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPRootFolder_wpQueryError WPObject_wpQueryError
#define WPRootFolder_wpSetFolder WPObject_wpSetFolder
#define WPRootFolder_wpQueryFolder WPObject_wpQueryFolder
#define WPRootFolder_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPRootFolder_wpSetTaskRec WPObject_wpSetTaskRec
#define WPRootFolder_wpFindTaskRec WPObject_wpFindTaskRec
#define WPRootFolder_wpQueryTitle WPObject_wpQueryTitle
#define WPRootFolder_wpRegisterView WPObject_wpRegisterView
#define WPRootFolder_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPRootFolder_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPRootFolder_wpRestore WPObject_wpRestore
#define WPRootFolder_wpRestoreData WPObject_wpRestoreData
#define WPRootFolder_wpRestoreLong WPObject_wpRestoreLong
#define WPRootFolder_wpRestoreString WPObject_wpRestoreString
#define WPRootFolder_wpSaveData WPObject_wpSaveData
#define WPRootFolder_wpSaveDeferred WPObject_wpSaveDeferred
#define WPRootFolder_wpSaveLong WPObject_wpSaveLong
#define WPRootFolder_wpSaveString WPObject_wpSaveString
#define WPRootFolder_wpScanSetupString WPObject_wpScanSetupString
#define WPRootFolder_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPRootFolder_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPRootFolder_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPRootFolder_wpSetError WPObject_wpSetError
#define WPRootFolder_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPRootFolder_wpSetupOnce WPObject_wpSetupOnce
#define WPRootFolder_wpSetIcon WPObject_wpSetIcon
#define WPRootFolder_wpSetMinWindow WPObject_wpSetMinWindow
#define WPRootFolder_wpModifyStyle WPObject_wpModifyStyle
#define WPRootFolder_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPRootFolder_wpUnlockObject WPObject_wpUnlockObject
#define WPRootFolder_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPRootFolder_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPRootFolder_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPRootFolder_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPRootFolder_wpSetObjectID WPObject_wpSetObjectID
#define WPRootFolder_wpQueryObjectID WPObject_wpQueryObjectID
#define WPRootFolder_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPRootFolder_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPRootFolder_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPRootFolder_wpLockObject WPObject_wpLockObject
#define WPRootFolder_wpIsLocked WPObject_wpIsLocked
#define WPRootFolder_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPRootFolder_wpWaitForClose WPObject_wpWaitForClose
#define WPRootFolder_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPRootFolder_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPRootFolder_wpSetStyle WPObject_wpSetStyle
#define WPRootFolder_somInit SOMObject_somInit
#define WPRootFolder_somUninit SOMObject_somUninit
#define WPRootFolder_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPRootFolder_somDefaultAssign SOMObject_somDefaultAssign
#define WPRootFolder_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPRootFolder_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPRootFolder_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPRootFolder_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPRootFolder_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPRootFolder_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPRootFolder_somFree SOMObject_somFree
#define WPRootFolder_somGetClass SOMObject_somGetClass
#define WPRootFolder_somGetClassName SOMObject_somGetClassName
#define WPRootFolder_somGetSize SOMObject_somGetSize
#define WPRootFolder_somIsA SOMObject_somIsA
#define WPRootFolder_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPRootFolder_somRespondsTo SOMObject_somRespondsTo
#define WPRootFolder_somDispatch SOMObject_somDispatch
#define WPRootFolder_somClassDispatch SOMObject_somClassDispatch
#define WPRootFolder_somCastObj SOMObject_somCastObj
#define WPRootFolder_somResetObj SOMObject_somResetObj
#define WPRootFolder_somDispatchV SOMObject_somDispatchV
#define WPRootFolder_somDispatchL SOMObject_somDispatchL
#define WPRootFolder_somDispatchA SOMObject_somDispatchA
#define WPRootFolder_somDispatchD SOMObject_somDispatchD
#define WPRootFolder_somPrintSelf SOMObject_somPrintSelf
#define WPRootFolder_somDumpSelf SOMObject_somDumpSelf
#define WPRootFolder_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPRootFolder_h */

#ifndef SOM_M_WPRootFolder_h
#define SOM_M_WPRootFolder_h


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
#ifndef M_WPRootFolder
#define M_WPRootFolder SOMObject
#endif
#include <wpfolder.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPRootFolder_MajorVersion 1
#define M_WPRootFolder_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPRootFolderNewClass wprfc
#pragma linkage(wprfc, system)
#define M_WPRootFolderClassData wprfd
#define M_WPRootFolderCClassData wprfx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPRootFolder_classObj M_WPRootFolderClassData.classObject
#define _M_WPRootFolder M_WPRootFolder_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPRootFolderNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPRootFolderNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPRootFolderClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPRootFolderClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPRootFolderCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPRootFolderCClassData;

/*
 * New and Renew macros for M_WPRootFolder
 */
#define M_WPRootFolderNew() \
   ( _M_WPRootFolder ? \
	_somNew(_M_WPRootFolder) \
	: ( M_WPRootFolderNewClass(\
		M_WPRootFolder_MajorVersion, \
		M_WPRootFolder_MinorVersion),\
	   _somNew(_M_WPRootFolder)))
#define M_WPRootFolderRenew(buf) \
   ( _M_WPRootFolder ? \
	_somRenew(_M_WPRootFolder, buf) \
	: ( M_WPRootFolderNewClass(\
		M_WPRootFolder_MajorVersion, \
		M_WPRootFolder_MinorVersion),\
	   _somRenew(_M_WPRootFolder, buf)))

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPRootFolder_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)

/*
 * Override method: wpclsInitData
 */
#define M_WPRootFolder_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsUnInitData
 */
#define M_WPRootFolder_wpclsUnInitData(somSelf) \
	M_WPObject_wpclsUnInitData(somSelf)

/*
 * Override method: wpclsQueryDefaultView
 */
#define M_WPRootFolder_wpclsQueryDefaultView(somSelf) \
	M_WPObject_wpclsQueryDefaultView(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPRootFolder_wpclsQueryIconDataN M_WPFolder_wpclsQueryIconDataN
#define M_WPRootFolder_wpclsQueryIconN M_WPFolder_wpclsQueryIconN
#define M_WPRootFolder_wpclsQueryOpenFolders M_WPFolder_wpclsQueryOpenFolders
#define M_WPRootFolder_wpclsQueryTitle M_WPObject_wpclsQueryTitle
#define M_WPRootFolder_wpclsQueryIconData M_WPObject_wpclsQueryIconData
#define M_WPRootFolder_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPRootFolder_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPRootFolder_wpclsQueryAwakeObject M_WPFileSystem_wpclsQueryAwakeObject
#define M_WPRootFolder_wpclsFileSysExists M_WPFileSystem_wpclsFileSysExists
#define M_WPRootFolder_wpclsQueryObjectFromPath M_WPFileSystem_wpclsQueryObjectFromPath
#define M_WPRootFolder_wpclsQueryInstanceType M_WPFileSystem_wpclsQueryInstanceType
#define M_WPRootFolder_wpclsQueryInstanceFilter M_WPFileSystem_wpclsQueryInstanceFilter
#define M_WPRootFolder_wpclsQueryInstanceClass M_WPFileSystem_wpclsQueryInstanceClass
#define M_WPRootFolder_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPRootFolder_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPRootFolder_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPRootFolder_wpclsNew M_WPObject_wpclsNew
#define M_WPRootFolder_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPRootFolder_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPRootFolder_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPRootFolder_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPRootFolder_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPRootFolder_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPRootFolder_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPRootFolder_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPRootFolder_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPRootFolder_wpclsSetError M_WPObject_wpclsSetError
#define M_WPRootFolder_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPRootFolder_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPRootFolder_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPRootFolder_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPRootFolder_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPRootFolder_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPRootFolder_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPRootFolder_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPRootFolder_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPRootFolder_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPRootFolder_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPRootFolder_somUninit SOMObject_somUninit
#define M_WPRootFolder_somClassReady SOMClass_somClassReady
#define M_WPRootFolder_somNew SOMClass_somNew
#define M_WPRootFolder_somRenew SOMClass_somRenew
#define M_WPRootFolder__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPRootFolder__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPRootFolder__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPRootFolder__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPRootFolder_somNewNoInit SOMClass_somNewNoInit
#define M_WPRootFolder_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPRootFolder_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPRootFolder_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPRootFolder_somAllocate SOMClass_somAllocate
#define M_WPRootFolder_somDeallocate SOMClass_somDeallocate
#define M_WPRootFolder__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPRootFolder__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPRootFolder_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPRootFolder_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPRootFolder_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPRootFolder_somInitClass SOMClass_somInitClass
#define M_WPRootFolder_somInitMIClass SOMClass_somInitMIClass
#define M_WPRootFolder_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPRootFolder_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPRootFolder_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPRootFolder_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPRootFolder_somGetClassData SOMClass_somGetClassData
#define M_WPRootFolder_somSetClassData SOMClass_somSetClassData
#define M_WPRootFolder_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPRootFolder_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPRootFolder_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPRootFolder_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPRootFolder_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPRootFolder_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPRootFolder_somGetMethodData SOMClass_somGetMethodData
#define M_WPRootFolder_somGetRdStub SOMClass_somGetRdStub
#define M_WPRootFolder_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPRootFolder_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPRootFolder_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPRootFolder_somGetName SOMClass_somGetName
#define M_WPRootFolder_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPRootFolder_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPRootFolder_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPRootFolder_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPRootFolder_somGetParent SOMClass_somGetParent
#define M_WPRootFolder_somGetParents SOMClass_somGetParents
#define M_WPRootFolder_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPRootFolder_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPRootFolder_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPRootFolder_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPRootFolder_somFindMethod SOMClass_somFindMethod
#define M_WPRootFolder_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPRootFolder_somFindSMethod SOMClass_somFindSMethod
#define M_WPRootFolder_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPRootFolder_somLookupMethod SOMClass_somLookupMethod
#define M_WPRootFolder_somCheckVersion SOMClass_somCheckVersion
#define M_WPRootFolder_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPRootFolder_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPRootFolder_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPRootFolder_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPRootFolder_somDefaultInit SOMObject_somDefaultInit
#define M_WPRootFolder_somDestruct SOMObject_somDestruct
#define M_WPRootFolder_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPRootFolder_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPRootFolder_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPRootFolder_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPRootFolder_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPRootFolder_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPRootFolder_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPRootFolder_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPRootFolder_somInit SOMObject_somInit
#define M_WPRootFolder_somFree SOMObject_somFree
#define M_WPRootFolder_somGetClass SOMObject_somGetClass
#define M_WPRootFolder_somGetClassName SOMObject_somGetClassName
#define M_WPRootFolder_somGetSize SOMObject_somGetSize
#define M_WPRootFolder_somIsA SOMObject_somIsA
#define M_WPRootFolder_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPRootFolder_somRespondsTo SOMObject_somRespondsTo
#define M_WPRootFolder_somDispatch SOMObject_somDispatch
#define M_WPRootFolder_somClassDispatch SOMObject_somClassDispatch
#define M_WPRootFolder_somCastObj SOMObject_somCastObj
#define M_WPRootFolder_somResetObj SOMObject_somResetObj
#define M_WPRootFolder_somDispatchV SOMObject_somDispatchV
#define M_WPRootFolder_somDispatchL SOMObject_somDispatchL
#define M_WPRootFolder_somDispatchA SOMObject_somDispatchA
#define M_WPRootFolder_somDispatchD SOMObject_somDispatchD
#define M_WPRootFolder_somPrintSelf SOMObject_somPrintSelf
#define M_WPRootFolder_somDumpSelf SOMObject_somDumpSelf
#define M_WPRootFolder_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPRootFolder_h */
