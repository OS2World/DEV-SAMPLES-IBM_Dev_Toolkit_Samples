
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpstart.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPSTART
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPStartup_h
#define SOM_WPStartup_h


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
#ifndef WPStartup
#define WPStartup SOMObject
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
#ifndef M_WPStartup
    #define M_WPStartup SOMObject
#endif /* M_WPStartup */

/*
 * End of bindings for IDL types.
 */

#define WPStartup_MajorVersion 1
#define WPStartup_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPStartupNewClass WPStartc
#pragma linkage(WPStartc, system)
#define WPStartupClassData WPStartd
#define WPStartupCClassData WPStartx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpstart.h>
/*--------------Migration------------*/
#define WPStartup_classObj WPStartupClassData.classObject
#define _WPStartup WPStartup_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPStartupNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPStartupNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPStartupClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPStartupClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPStartupCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPStartupCClassData;

/*
 * New and Renew macros for WPStartup
 */
#define WPStartupNew() \
   ( _WPStartup ? \
	_somNew(_WPStartup) \
	: ( WPStartupNewClass(\
		WPStartup_MajorVersion, \
		WPStartup_MinorVersion),\
	   _somNew(_WPStartup)))
#define WPStartupRenew(buf) \
   ( _WPStartup ? \
	_somRenew(_WPStartup, buf) \
	: ( WPStartupNewClass(\
		WPStartup_MajorVersion, \
		WPStartup_MinorVersion),\
	   _somRenew(_WPStartup, buf)))

/*
 * Override method: wpSetupOnce
 */
#define WPStartup_wpSetupOnce(somSelf,pszSetupString) \
	WPObject_wpSetupOnce(somSelf,pszSetupString)

/*
 * Override method: wpRestoreState
 */
#define WPStartup_wpRestoreState(somSelf,ulReserved) \
	WPObject_wpRestoreState(somSelf,ulReserved)

/*
 * Override method: wpFree
 */
#define WPStartup_wpFree(somSelf) \
	WPObject_wpFree(somSelf)

/*
 * Override method: somDefaultInit
 */
#define WPStartup_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPStartup_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * Override method: wpInitData
 */
#define WPStartup_wpInitData(somSelf) \
	WPObject_wpInitData(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPStartup_wpSetFldrFlags WPFolder_wpSetFldrFlags
#define WPStartup_wpQueryFldrFlags WPFolder_wpQueryFldrFlags
#define WPStartup_wpSetFldrFont WPFolder_wpSetFldrFont
#define WPStartup_wpQueryFldrFont WPFolder_wpQueryFldrFont
#define WPStartup_wpSetFldrAttr WPFolder_wpSetFldrAttr
#define WPStartup_wpQueryFldrAttr WPFolder_wpQueryFldrAttr
#define WPStartup_wpSetNextIconPos WPFolder_wpSetNextIconPos
#define WPStartup_wpQueryNextIconPos WPFolder_wpQueryNextIconPos
#define WPStartup_wpPopulate WPFolder_wpPopulate
#define WPStartup_wpQueryContent WPFolder_wpQueryContent
#define WPStartup_wpAddFolderView1Page WPFolder_wpAddFolderView1Page
#define WPStartup_wpAddFolderView2Page WPFolder_wpAddFolderView2Page
#define WPStartup_wpAddFolderView3Page WPFolder_wpAddFolderView3Page
#define WPStartup_wpAddFolderIncludePage WPFolder_wpAddFolderIncludePage
#define WPStartup_wpAddFolderSortPage WPFolder_wpAddFolderSortPage
#define WPStartup_wpAddFolderBackgroundPage WPFolder_wpAddFolderBackgroundPage
#define WPStartup_wpAddFolderMenu2Page WPFolder_wpAddFolderMenu2Page
#define WPStartup_wpAddFolderSelfClosePage WPFolder_wpAddFolderSelfClosePage
#define WPStartup_wpInitIconPosData WPFolder_wpInitIconPosData
#define WPStartup_wpFreeIconPosData WPFolder_wpFreeIconPosData
#define WPStartup_wpStoreIconPosData WPFolder_wpStoreIconPosData
#define WPStartup_wpQueryIconPosition WPFolder_wpQueryIconPosition
#define WPStartup_wpSetFldrSort WPFolder_wpSetFldrSort
#define WPStartup_wpQueryFldrSort WPFolder_wpQueryFldrSort
#define WPStartup_wpRestoreFldrRunObjs WPFolder_wpRestoreFldrRunObjs
#define WPStartup_wpStoreFldrRunObjs WPFolder_wpStoreFldrRunObjs
#define WPStartup_wpHideFldrRunObjs WPFolder_wpHideFldrRunObjs
#define WPStartup_wpDeleteContents WPFolder_wpDeleteContents
#define WPStartup_wpSetFldrDetailsClass WPFolder_wpSetFldrDetailsClass
#define WPStartup_wpQueryFldrDetailsClass WPFolder_wpQueryFldrDetailsClass
#define WPStartup_wpSearchFolder WPFolder_wpSearchFolder
#define WPStartup_wpContainsFolders WPFolder_wpContainsFolders
#define WPStartup_wpQueryOpenFolders WPFolder_wpQueryOpenFolders
#define WPStartup_wpModifyFldrFlags WPFolder_wpModifyFldrFlags
#define WPStartup_wpAddToContent WPFolder_wpAddToContent
#define WPStartup_wpDeleteFromContent WPFolder_wpDeleteFromContent
#define WPStartup_wpSetDetailsColumnVisibility WPFolder_wpSetDetailsColumnVisibility
#define WPStartup_wpIsDetailsColumnVisible WPFolder_wpIsDetailsColumnVisible
#define WPStartup_wpSetFldrSortClass WPFolder_wpSetFldrSortClass
#define WPStartup_wpQueryFldrSortClass WPFolder_wpQueryFldrSortClass
#define WPStartup_wpSetSortAttribAvailable WPFolder_wpSetSortAttribAvailable
#define WPStartup_wpIsSortAttribAvailable WPFolder_wpIsSortAttribAvailable
#define WPStartup_wpQueryIconViewPos WPFolder_wpQueryIconViewPos
#define WPStartup_wpAddFirstChild WPFolder_wpAddFirstChild
#define WPStartup_wpFlushNotifications WPFolder_wpFlushNotifications
#define WPStartup_wpSetMenuBarVisibility WPFolder_wpSetMenuBarVisibility
#define WPStartup_wpQueryMenuBarVisibility WPFolder_wpQueryMenuBarVisibility
#define WPStartup_wpQueryIconTextBackgroundColor WPFolder_wpQueryIconTextBackgroundColor
#define WPStartup_wpSetIconTextBackgroundColor WPFolder_wpSetIconTextBackgroundColor
#define WPStartup_wpQueryIconTextColor WPFolder_wpQueryIconTextColor
#define WPStartup_wpSetIconTextColor WPFolder_wpSetIconTextColor
#define WPStartup_wpQueryShadowTextColor WPFolder_wpQueryShadowTextColor
#define WPStartup_wpSetShadowTextColor WPFolder_wpSetShadowTextColor
#define WPStartup_wpQueryIconTextVisibility WPFolder_wpQueryIconTextVisibility
#define WPStartup_wpSetIconTextVisibility WPFolder_wpSetIconTextVisibility
#define WPStartup_wpQueryFldrBackground WPFolder_wpQueryFldrBackground
#define WPStartup_wpSetFldrBackground WPFolder_wpSetFldrBackground
#define WPStartup_wpUnInitData WPObject_wpUnInitData
#define WPStartup_wpDelete WPObject_wpDelete
#define WPStartup_wpConfirmDelete WPObject_wpConfirmDelete
#define WPStartup_wpSaveState WPObject_wpSaveState
#define WPStartup_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPStartup_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPStartup_wpOpen WPObject_wpOpen
#define WPStartup_wpSetup WPObject_wpSetup
#define WPStartup_wpMoveObject WPObject_wpMoveObject
#define WPStartup_wpDrop WPObject_wpDrop
#define WPStartup_wpDragOver WPObject_wpDragOver
#define WPStartup_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPStartup_wpAddFile3Page WPFileSystem_wpAddFile3Page
#define WPStartup_wpAddFile2Page WPFileSystem_wpAddFile2Page
#define WPStartup_wpFormatDragItem WPObject_wpFormatDragItem
#define WPStartup_wpRender WPObject_wpRender
#define WPStartup_wpRefresh WPFileSystem_wpRefresh
#define WPStartup_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPStartup_wpRenderComplete WPObject_wpRenderComplete
#define WPStartup_wpAddFileMenuPage WPFileSystem_wpAddFileMenuPage
#define WPStartup_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPStartup_wpObjectReady WPObject_wpObjectReady
#define WPStartup_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPStartup_wpModifyMenu WPObject_wpModifyMenu
#define WPStartup_wpFilterMenu WPObject_wpFilterMenu
#define WPStartup_wpDisplayMenu WPObject_wpDisplayMenu
#define WPStartup_wpSetIconData WPObject_wpSetIconData
#define WPStartup_wpSetRealName WPFileSystem_wpSetRealName
#define WPStartup_wpSetType WPFileSystem_wpSetType
#define WPStartup_wpQueryType WPFileSystem_wpQueryType
#define WPStartup_wpSetAttr WPFileSystem_wpSetAttr
#define WPStartup_wpQueryAttr WPFileSystem_wpQueryAttr
#define WPStartup_wpAddFile1Page WPFileSystem_wpAddFile1Page
#define WPStartup_wpQueryCreation WPFileSystem_wpQueryCreation
#define WPStartup_wpQueryLastAccess WPFileSystem_wpQueryLastAccess
#define WPStartup_wpQueryLastWrite WPFileSystem_wpQueryLastWrite
#define WPStartup_wpQueryFileSize WPFileSystem_wpQueryFileSize
#define WPStartup_wpQueryEASize WPFileSystem_wpQueryEASize
#define WPStartup_wpSetDateInfo WPFileSystem_wpSetDateInfo
#define WPStartup_wpSetFileSizeInfo WPFileSystem_wpSetFileSizeInfo
#define WPStartup_wpQueryRefreshFlags WPFileSystem_wpQueryRefreshFlags
#define WPStartup_wpSetRefreshFlags WPFileSystem_wpSetRefreshFlags
#define WPStartup_wpPrintPlainTextFile WPFileSystem_wpPrintPlainTextFile
#define WPStartup_wpSetTitleAndRenameFile WPFileSystem_wpSetTitleAndRenameFile
#define WPStartup_wpConfirmRenameFileWithExt WPFileSystem_wpConfirmRenameFileWithExt
#define WPStartup_wpVerifyUpdateAccess WPFileSystem_wpVerifyUpdateAccess
#define WPStartup_wpQueryEASupport WPFileSystem_wpQueryEASupport
#define WPStartup_wpAddUserItemsToPopupMenu WPFileSystem_wpAddUserItemsToPopupMenu
#define WPStartup_wpIsDiskSwapped WPFileSystem_wpIsDiskSwapped
#define WPStartup_wpQueryRealName WPFileSystem_wpQueryRealName
#define WPStartup_wpQueryFilename WPFileSystem_wpQueryFilename
#define WPStartup_wpQueryDisk WPFileSystem_wpQueryDisk
#define WPStartup_wpQueryDateInfo WPFileSystem_wpQueryDateInfo
#define WPStartup_wpConfirmKeepAssoc WPFileSystem_wpConfirmKeepAssoc
#define WPStartup_wpQueryFileSizeL WPFileSystem_wpQueryFileSizeL
#define WPStartup_wpSetFileSizeL WPFileSystem_wpSetFileSizeL
#define WPStartup_wpQueryHandle WPObject_wpQueryHandle
#define WPStartup_wpSaveImmediate WPObject_wpSaveImmediate
#define WPStartup_wpSetTitle WPObject_wpSetTitle
#define WPStartup_wpViewObject WPObject_wpViewObject
#define WPStartup_wpSwitchTo WPObject_wpSwitchTo
#define WPStartup_wpCopyObject WPObject_wpCopyObject
#define WPStartup_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPStartup_wpQueryIcon WPObject_wpQueryIcon
#define WPStartup_wpQueryIconData WPObject_wpQueryIconData
#define WPStartup_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPStartup_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPStartup_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPStartup_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPStartup_wpAppendObject WPObject_wpAppendObject
#define WPStartup_wpReplaceObject WPObject_wpReplaceObject
#define WPStartup_wpQueryStyle WPObject_wpQueryStyle
#define WPStartup_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPStartup_wpIdentify WPObject_wpIdentify
#define WPStartup_wpIsDeleteable WPObject_wpIsDeleteable
#define WPStartup_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPStartup_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPStartup_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPStartup_wpAllocMem WPObject_wpAllocMem
#define WPStartup_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPStartup_wpClose WPObject_wpClose
#define WPStartup_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPStartup_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPStartup_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPStartup_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPStartup_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPStartup_wpCreateAnother WPObject_wpCreateAnother
#define WPStartup_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPStartup_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPStartup_wpDisplayHelp WPObject_wpDisplayHelp
#define WPStartup_wpEndConversation WPObject_wpEndConversation
#define WPStartup_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPStartup_wpFindUseItem WPObject_wpFindUseItem
#define WPStartup_wpFreeMem WPObject_wpFreeMem
#define WPStartup_wpHide WPObject_wpHide
#define WPStartup_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPStartup_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPStartup_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPStartup_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPStartup_wpPrintObject WPObject_wpPrintObject
#define WPStartup_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPStartup_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPStartup_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPStartup_wpQueryError WPObject_wpQueryError
#define WPStartup_wpSetFolder WPObject_wpSetFolder
#define WPStartup_wpQueryFolder WPObject_wpQueryFolder
#define WPStartup_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPStartup_wpSetTaskRec WPObject_wpSetTaskRec
#define WPStartup_wpFindTaskRec WPObject_wpFindTaskRec
#define WPStartup_wpQueryTitle WPObject_wpQueryTitle
#define WPStartup_wpRegisterView WPObject_wpRegisterView
#define WPStartup_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPStartup_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPStartup_wpRestore WPObject_wpRestore
#define WPStartup_wpRestoreData WPObject_wpRestoreData
#define WPStartup_wpRestoreLong WPObject_wpRestoreLong
#define WPStartup_wpRestoreString WPObject_wpRestoreString
#define WPStartup_wpSaveData WPObject_wpSaveData
#define WPStartup_wpSaveDeferred WPObject_wpSaveDeferred
#define WPStartup_wpSaveLong WPObject_wpSaveLong
#define WPStartup_wpSaveString WPObject_wpSaveString
#define WPStartup_wpScanSetupString WPObject_wpScanSetupString
#define WPStartup_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPStartup_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPStartup_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPStartup_wpSetDefaultView WPObject_wpSetDefaultView
#define WPStartup_wpSetError WPObject_wpSetError
#define WPStartup_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPStartup_wpSetIcon WPObject_wpSetIcon
#define WPStartup_wpSetMinWindow WPObject_wpSetMinWindow
#define WPStartup_wpModifyStyle WPObject_wpModifyStyle
#define WPStartup_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPStartup_wpUnlockObject WPObject_wpUnlockObject
#define WPStartup_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPStartup_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPStartup_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPStartup_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPStartup_wpSetObjectID WPObject_wpSetObjectID
#define WPStartup_wpQueryObjectID WPObject_wpQueryObjectID
#define WPStartup_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPStartup_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPStartup_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPStartup_wpFindViewItem WPObject_wpFindViewItem
#define WPStartup_wpLockObject WPObject_wpLockObject
#define WPStartup_wpIsLocked WPObject_wpIsLocked
#define WPStartup_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPStartup_wpWaitForClose WPObject_wpWaitForClose
#define WPStartup_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPStartup_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPStartup_wpSetStyle WPObject_wpSetStyle
#define WPStartup_somInit SOMObject_somInit
#define WPStartup_somUninit SOMObject_somUninit
#define WPStartup_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPStartup_somDefaultAssign SOMObject_somDefaultAssign
#define WPStartup_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPStartup_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPStartup_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPStartup_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPStartup_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPStartup_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPStartup_somFree SOMObject_somFree
#define WPStartup_somGetClass SOMObject_somGetClass
#define WPStartup_somGetClassName SOMObject_somGetClassName
#define WPStartup_somGetSize SOMObject_somGetSize
#define WPStartup_somIsA SOMObject_somIsA
#define WPStartup_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPStartup_somRespondsTo SOMObject_somRespondsTo
#define WPStartup_somDispatch SOMObject_somDispatch
#define WPStartup_somClassDispatch SOMObject_somClassDispatch
#define WPStartup_somCastObj SOMObject_somCastObj
#define WPStartup_somResetObj SOMObject_somResetObj
#define WPStartup_somDispatchV SOMObject_somDispatchV
#define WPStartup_somDispatchL SOMObject_somDispatchL
#define WPStartup_somDispatchA SOMObject_somDispatchA
#define WPStartup_somDispatchD SOMObject_somDispatchD
#define WPStartup_somPrintSelf SOMObject_somPrintSelf
#define WPStartup_somDumpSelf SOMObject_somDumpSelf
#define WPStartup_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPStartup_h */

#ifndef SOM_M_WPStartup_h
#define SOM_M_WPStartup_h


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
#ifndef M_WPStartup
#define M_WPStartup SOMObject
#endif
#include <wpfolder.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPStartup_MajorVersion 1
#define M_WPStartup_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPStartupNewClass WPStartc
#pragma linkage(WPStartc, system)
#define M_WPStartupClassData WPStartd
#define M_WPStartupCClassData WPStartx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPStartup_classObj M_WPStartupClassData.classObject
#define _M_WPStartup M_WPStartup_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPStartupNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPStartupNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPStartupClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPStartupClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPStartupCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPStartupCClassData;

/*
 * New and Renew macros for M_WPStartup
 */
#define M_WPStartupNew() \
   ( _M_WPStartup ? \
	_somNew(_M_WPStartup) \
	: ( M_WPStartupNewClass(\
		M_WPStartup_MajorVersion, \
		M_WPStartup_MinorVersion),\
	   _somNew(_M_WPStartup)))
#define M_WPStartupRenew(buf) \
   ( _M_WPStartup ? \
	_somRenew(_M_WPStartup, buf) \
	: ( M_WPStartupNewClass(\
		M_WPStartup_MajorVersion, \
		M_WPStartup_MinorVersion),\
	   _somRenew(_M_WPStartup, buf)))

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPStartup_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPStartup_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPStartup_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryIconDataN
 */
#define M_WPStartup_wpclsQueryIconDataN(somSelf,pIconInfo,ulIconIndex) \
	M_WPFolder_wpclsQueryIconDataN(somSelf,pIconInfo,ulIconIndex)

/*
 * Override method: wpclsQueryStyle
 */
#define M_WPStartup_wpclsQueryStyle(somSelf) \
	M_WPObject_wpclsQueryStyle(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPStartup_wpclsQueryIconN M_WPFolder_wpclsQueryIconN
#define M_WPStartup_wpclsQueryOpenFolders M_WPFolder_wpclsQueryOpenFolders
#define M_WPStartup_wpclsInitData M_WPObject_wpclsInitData
#define M_WPStartup_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPStartup_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPStartup_wpclsQueryAwakeObject M_WPFileSystem_wpclsQueryAwakeObject
#define M_WPStartup_wpclsFileSysExists M_WPFileSystem_wpclsFileSysExists
#define M_WPStartup_wpclsQueryObjectFromPath M_WPFileSystem_wpclsQueryObjectFromPath
#define M_WPStartup_wpclsQueryInstanceType M_WPFileSystem_wpclsQueryInstanceType
#define M_WPStartup_wpclsQueryInstanceFilter M_WPFileSystem_wpclsQueryInstanceFilter
#define M_WPStartup_wpclsQueryInstanceClass M_WPFileSystem_wpclsQueryInstanceClass
#define M_WPStartup_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPStartup_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPStartup_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPStartup_wpclsNew M_WPObject_wpclsNew
#define M_WPStartup_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPStartup_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPStartup_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPStartup_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPStartup_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPStartup_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPStartup_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPStartup_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPStartup_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPStartup_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPStartup_wpclsSetError M_WPObject_wpclsSetError
#define M_WPStartup_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPStartup_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPStartup_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPStartup_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPStartup_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPStartup_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPStartup_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPStartup_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPStartup_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPStartup_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPStartup_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPStartup_somUninit SOMObject_somUninit
#define M_WPStartup_somClassReady SOMClass_somClassReady
#define M_WPStartup_somNew SOMClass_somNew
#define M_WPStartup_somRenew SOMClass_somRenew
#define M_WPStartup__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPStartup__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPStartup__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPStartup__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPStartup_somNewNoInit SOMClass_somNewNoInit
#define M_WPStartup_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPStartup_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPStartup_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPStartup_somAllocate SOMClass_somAllocate
#define M_WPStartup_somDeallocate SOMClass_somDeallocate
#define M_WPStartup__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPStartup__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPStartup_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPStartup_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPStartup_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPStartup_somInitClass SOMClass_somInitClass
#define M_WPStartup_somInitMIClass SOMClass_somInitMIClass
#define M_WPStartup_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPStartup_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPStartup_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPStartup_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPStartup_somGetClassData SOMClass_somGetClassData
#define M_WPStartup_somSetClassData SOMClass_somSetClassData
#define M_WPStartup_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPStartup_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPStartup_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPStartup_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPStartup_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPStartup_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPStartup_somGetMethodData SOMClass_somGetMethodData
#define M_WPStartup_somGetRdStub SOMClass_somGetRdStub
#define M_WPStartup_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPStartup_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPStartup_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPStartup_somGetName SOMClass_somGetName
#define M_WPStartup_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPStartup_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPStartup_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPStartup_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPStartup_somGetParent SOMClass_somGetParent
#define M_WPStartup_somGetParents SOMClass_somGetParents
#define M_WPStartup_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPStartup_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPStartup_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPStartup_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPStartup_somFindMethod SOMClass_somFindMethod
#define M_WPStartup_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPStartup_somFindSMethod SOMClass_somFindSMethod
#define M_WPStartup_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPStartup_somLookupMethod SOMClass_somLookupMethod
#define M_WPStartup_somCheckVersion SOMClass_somCheckVersion
#define M_WPStartup_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPStartup_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPStartup_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPStartup_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPStartup_somDefaultInit SOMObject_somDefaultInit
#define M_WPStartup_somDestruct SOMObject_somDestruct
#define M_WPStartup_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPStartup_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPStartup_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPStartup_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPStartup_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPStartup_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPStartup_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPStartup_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPStartup_somInit SOMObject_somInit
#define M_WPStartup_somFree SOMObject_somFree
#define M_WPStartup_somGetClass SOMObject_somGetClass
#define M_WPStartup_somGetClassName SOMObject_somGetClassName
#define M_WPStartup_somGetSize SOMObject_somGetSize
#define M_WPStartup_somIsA SOMObject_somIsA
#define M_WPStartup_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPStartup_somRespondsTo SOMObject_somRespondsTo
#define M_WPStartup_somDispatch SOMObject_somDispatch
#define M_WPStartup_somClassDispatch SOMObject_somClassDispatch
#define M_WPStartup_somCastObj SOMObject_somCastObj
#define M_WPStartup_somResetObj SOMObject_somResetObj
#define M_WPStartup_somDispatchV SOMObject_somDispatchV
#define M_WPStartup_somDispatchL SOMObject_somDispatchL
#define M_WPStartup_somDispatchA SOMObject_somDispatchA
#define M_WPStartup_somDispatchD SOMObject_somDispatchD
#define M_WPStartup_somPrintSelf SOMObject_somPrintSelf
#define M_WPStartup_somDumpSelf SOMObject_somDumpSelf
#define M_WPStartup_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPStartup_h */
