
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wppif.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPPIF
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPPif_h
#define SOM_WPPif_h


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
#ifndef WPPif
#define WPPif SOMObject
#endif
#include <wpdataf.h>

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
#ifndef M_WPDataFile
    #define M_WPDataFile SOMObject
#endif /* M_WPDataFile */
#ifndef M_WPPif
    #define M_WPPif SOMObject
#endif /* M_WPPif */

/*
 * End of bindings for IDL types.
 */

#define WPPif_MajorVersion 1
#define WPPif_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPPifNewClass wppifc
#pragma linkage(wppifc, system)
#define WPPifClassData wppifd
#define WPPifCClassData wppifx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wppif.h>
/*--------------Migration------------*/
#define WPPif_classObj WPPifClassData.classObject
#define _WPPif WPPif_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPPifNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPPifNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPPifClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPPifClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPPifCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPPifCClassData;

/*
 * New and Renew macros for WPPif
 */
#define WPPifNew() \
   ( _WPPif ? \
	_somNew(_WPPif) \
	: ( WPPifNewClass(\
		WPPif_MajorVersion, \
		WPPif_MinorVersion),\
	   _somNew(_WPPif)))
#define WPPifRenew(buf) \
   ( _WPPif ? \
	_somRenew(_WPPif, buf) \
	: ( WPPifNewClass(\
		WPPif_MajorVersion, \
		WPPif_MinorVersion),\
	   _somRenew(_WPPif, buf)))

/*
 * Override method: wpSetupOnce
 */
#define WPPif_wpSetupOnce(somSelf,pszSetupString) \
	WPObject_wpSetupOnce(somSelf,pszSetupString)

/*
 * Override method: somDefaultInit
 */
#define WPPif_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPPif_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPPif_wpAddBecomePage WPDataFile_wpAddBecomePage
#define WPPif_wpAddFileTypePage WPDataFile_wpAddFileTypePage
#define WPPif_wpPrintMetaFile WPDataFile_wpPrintMetaFile
#define WPPif_wpPrintPifFile WPDataFile_wpPrintPifFile
#define WPPif_wpPrintPrinterSpecificFile WPDataFile_wpPrintPrinterSpecificFile
#define WPPif_wpPrintUnknownFile WPDataFile_wpPrintUnknownFile
#define WPPif_wpQueryAssociatedProgram WPDataFile_wpQueryAssociatedProgram
#define WPPif_wpSetAssociatedFileIcon WPDataFile_wpSetAssociatedFileIcon
#define WPPif_wpQueryAssociatedFileIcon WPDataFile_wpQueryAssociatedFileIcon
#define WPPif_wpSetContentsFromPointer WPDataFile_wpSetContentsFromPointer
#define WPPif_wpQueryPointerFromContents WPDataFile_wpQueryPointerFromContents
#define WPPif_wpSetContentsFromHandle WPDataFile_wpSetContentsFromHandle
#define WPPif_wpQueryHandleFromContents WPDataFile_wpQueryHandleFromContents
#define WPPif_wpRenderFromClipboard WPDataFile_wpRenderFromClipboard
#define WPPif_SetUpdateIndicator WPDataFile_SetUpdateIndicator
#define WPPif_QueryUpdateIndicator WPDataFile_QueryUpdateIndicator
#define WPPif_SetNeedSave WPDataFile_SetNeedSave
#define WPPif_QueryNeedSave WPDataFile_QueryNeedSave
#define WPPif_wpSetDefaultBidiSettings WPDataFile_wpSetDefaultBidiSettings
#define WPPif_wpQueryDefaultBidiSettings WPDataFile_wpQueryDefaultBidiSettings
#define WPPif_wpSetBidiValues WPDataFile_wpSetBidiValues
#define WPPif_wpQueryBidiValues WPDataFile_wpQueryBidiValues
#define WPPif_wpInsertBidiPage WPDataFile_wpInsertBidiPage
#define WPPif_wpSaveBidiState WPDataFile_wpSaveBidiState
#define WPPif_wpRestoreBidiState WPDataFile_wpRestoreBidiState
#define WPPif_wpInitBidiData WPDataFile_wpInitBidiData
#define WPPif_wpBidiSetup WPDataFile_wpBidiSetup
#define WPPif_wpSettingsNotebook WPDataFile_wpSettingsNotebook
#define WPPif_wpDragOver WPObject_wpDragOver
#define WPPif_wpRestoreState WPObject_wpRestoreState
#define WPPif_wpSetDefaultView WPObject_wpSetDefaultView
#define WPPif_wpSetRealName WPFileSystem_wpSetRealName
#define WPPif_wpSetType WPFileSystem_wpSetType
#define WPPif_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPPif_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPPif_wpOpen WPObject_wpOpen
#define WPPif_wpPrintObject WPObject_wpPrintObject
#define WPPif_wpModifyMenu WPObject_wpModifyMenu
#define WPPif_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPPif_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPPif_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPPif_wpFormatDragItem WPObject_wpFormatDragItem
#define WPPif_wpConfirmRenameFileWithExt WPFileSystem_wpConfirmRenameFileWithExt
#define WPPif_wpQueryIcon WPObject_wpQueryIcon
#define WPPif_wpSaveState WPObject_wpSaveState
#define WPPif_wpInitData WPObject_wpInitData
#define WPPif_wpSetup WPObject_wpSetup
#define WPPif_wpRender WPObject_wpRender
#define WPPif_wpConfirmKeepAssoc WPFileSystem_wpConfirmKeepAssoc
#define WPPif_wpQueryType WPFileSystem_wpQueryType
#define WPPif_wpSetAttr WPFileSystem_wpSetAttr
#define WPPif_wpQueryAttr WPFileSystem_wpQueryAttr
#define WPPif_wpAddFile1Page WPFileSystem_wpAddFile1Page
#define WPPif_wpAddFile2Page WPFileSystem_wpAddFile2Page
#define WPPif_wpAddFile3Page WPFileSystem_wpAddFile3Page
#define WPPif_wpAddFileMenuPage WPFileSystem_wpAddFileMenuPage
#define WPPif_wpQueryCreation WPFileSystem_wpQueryCreation
#define WPPif_wpQueryLastAccess WPFileSystem_wpQueryLastAccess
#define WPPif_wpQueryLastWrite WPFileSystem_wpQueryLastWrite
#define WPPif_wpQueryFileSize WPFileSystem_wpQueryFileSize
#define WPPif_wpQueryEASize WPFileSystem_wpQueryEASize
#define WPPif_wpSetDateInfo WPFileSystem_wpSetDateInfo
#define WPPif_wpSetFileSizeInfo WPFileSystem_wpSetFileSizeInfo
#define WPPif_wpRefresh WPFileSystem_wpRefresh
#define WPPif_wpQueryRefreshFlags WPFileSystem_wpQueryRefreshFlags
#define WPPif_wpSetRefreshFlags WPFileSystem_wpSetRefreshFlags
#define WPPif_wpPrintPlainTextFile WPFileSystem_wpPrintPlainTextFile
#define WPPif_wpSetTitleAndRenameFile WPFileSystem_wpSetTitleAndRenameFile
#define WPPif_wpVerifyUpdateAccess WPFileSystem_wpVerifyUpdateAccess
#define WPPif_wpQueryEASupport WPFileSystem_wpQueryEASupport
#define WPPif_wpAddUserItemsToPopupMenu WPFileSystem_wpAddUserItemsToPopupMenu
#define WPPif_wpIsDiskSwapped WPFileSystem_wpIsDiskSwapped
#define WPPif_wpQueryRealName WPFileSystem_wpQueryRealName
#define WPPif_wpQueryFilename WPFileSystem_wpQueryFilename
#define WPPif_wpQueryDisk WPFileSystem_wpQueryDisk
#define WPPif_wpQueryDateInfo WPFileSystem_wpQueryDateInfo
#define WPPif_wpQueryFileSizeL WPFileSystem_wpQueryFileSizeL
#define WPPif_wpSetFileSizeL WPFileSystem_wpSetFileSizeL
#define WPPif_wpUnInitData WPObject_wpUnInitData
#define WPPif_wpQueryHandle WPObject_wpQueryHandle
#define WPPif_wpSaveImmediate WPObject_wpSaveImmediate
#define WPPif_wpSetTitle WPObject_wpSetTitle
#define WPPif_wpViewObject WPObject_wpViewObject
#define WPPif_wpSwitchTo WPObject_wpSwitchTo
#define WPPif_wpCopyObject WPObject_wpCopyObject
#define WPPif_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPPif_wpMoveObject WPObject_wpMoveObject
#define WPPif_wpQueryIconData WPObject_wpQueryIconData
#define WPPif_wpSetIconData WPObject_wpSetIconData
#define WPPif_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPPif_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPPif_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPPif_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPPif_wpAppendObject WPObject_wpAppendObject
#define WPPif_wpReplaceObject WPObject_wpReplaceObject
#define WPPif_wpQueryStyle WPObject_wpQueryStyle
#define WPPif_wpFilterMenu WPObject_wpFilterMenu
#define WPPif_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPPif_wpIdentify WPObject_wpIdentify
#define WPPif_wpIsDeleteable WPObject_wpIsDeleteable
#define WPPif_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPPif_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPPif_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPPif_wpAllocMem WPObject_wpAllocMem
#define WPPif_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPPif_wpClose WPObject_wpClose
#define WPPif_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPPif_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPPif_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPPif_wpConfirmDelete WPObject_wpConfirmDelete
#define WPPif_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPPif_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPPif_wpCreateAnother WPObject_wpCreateAnother
#define WPPif_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPPif_wpDelete WPObject_wpDelete
#define WPPif_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPPif_wpDisplayHelp WPObject_wpDisplayHelp
#define WPPif_wpDisplayMenu WPObject_wpDisplayMenu
#define WPPif_wpDrop WPObject_wpDrop
#define WPPif_wpEndConversation WPObject_wpEndConversation
#define WPPif_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPPif_wpFindUseItem WPObject_wpFindUseItem
#define WPPif_wpFree WPObject_wpFree
#define WPPif_wpFreeMem WPObject_wpFreeMem
#define WPPif_wpHide WPObject_wpHide
#define WPPif_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPPif_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPPif_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPPif_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPPif_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPPif_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPPif_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPPif_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPPif_wpQueryError WPObject_wpQueryError
#define WPPif_wpSetFolder WPObject_wpSetFolder
#define WPPif_wpQueryFolder WPObject_wpQueryFolder
#define WPPif_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPPif_wpSetTaskRec WPObject_wpSetTaskRec
#define WPPif_wpFindTaskRec WPObject_wpFindTaskRec
#define WPPif_wpQueryTitle WPObject_wpQueryTitle
#define WPPif_wpRegisterView WPObject_wpRegisterView
#define WPPif_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPPif_wpRenderComplete WPObject_wpRenderComplete
#define WPPif_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPPif_wpRestore WPObject_wpRestore
#define WPPif_wpRestoreData WPObject_wpRestoreData
#define WPPif_wpRestoreLong WPObject_wpRestoreLong
#define WPPif_wpRestoreString WPObject_wpRestoreString
#define WPPif_wpSaveData WPObject_wpSaveData
#define WPPif_wpSaveDeferred WPObject_wpSaveDeferred
#define WPPif_wpSaveLong WPObject_wpSaveLong
#define WPPif_wpSaveString WPObject_wpSaveString
#define WPPif_wpScanSetupString WPObject_wpScanSetupString
#define WPPif_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPPif_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPPif_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPPif_wpSetError WPObject_wpSetError
#define WPPif_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPPif_wpSetIcon WPObject_wpSetIcon
#define WPPif_wpSetMinWindow WPObject_wpSetMinWindow
#define WPPif_wpModifyStyle WPObject_wpModifyStyle
#define WPPif_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPPif_wpUnlockObject WPObject_wpUnlockObject
#define WPPif_wpObjectReady WPObject_wpObjectReady
#define WPPif_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPPif_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPPif_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPPif_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPPif_wpSetObjectID WPObject_wpSetObjectID
#define WPPif_wpQueryObjectID WPObject_wpQueryObjectID
#define WPPif_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPPif_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPPif_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPPif_wpFindViewItem WPObject_wpFindViewItem
#define WPPif_wpLockObject WPObject_wpLockObject
#define WPPif_wpIsLocked WPObject_wpIsLocked
#define WPPif_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPPif_wpWaitForClose WPObject_wpWaitForClose
#define WPPif_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPPif_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPPif_wpSetStyle WPObject_wpSetStyle
#define WPPif_somInit SOMObject_somInit
#define WPPif_somUninit SOMObject_somUninit
#define WPPif_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPPif_somDefaultAssign SOMObject_somDefaultAssign
#define WPPif_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPPif_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPPif_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPPif_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPPif_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPPif_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPPif_somFree SOMObject_somFree
#define WPPif_somGetClass SOMObject_somGetClass
#define WPPif_somGetClassName SOMObject_somGetClassName
#define WPPif_somGetSize SOMObject_somGetSize
#define WPPif_somIsA SOMObject_somIsA
#define WPPif_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPPif_somRespondsTo SOMObject_somRespondsTo
#define WPPif_somDispatch SOMObject_somDispatch
#define WPPif_somClassDispatch SOMObject_somClassDispatch
#define WPPif_somCastObj SOMObject_somCastObj
#define WPPif_somResetObj SOMObject_somResetObj
#define WPPif_somDispatchV SOMObject_somDispatchV
#define WPPif_somDispatchL SOMObject_somDispatchL
#define WPPif_somDispatchA SOMObject_somDispatchA
#define WPPif_somDispatchD SOMObject_somDispatchD
#define WPPif_somPrintSelf SOMObject_somPrintSelf
#define WPPif_somDumpSelf SOMObject_somDumpSelf
#define WPPif_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPPif_h */

#ifndef SOM_M_WPPif_h
#define SOM_M_WPPif_h


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
#ifndef M_WPPif
#define M_WPPif SOMObject
#endif
#include <wpdataf.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPPif_MajorVersion 1
#define M_WPPif_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPPifNewClass wppifc
#pragma linkage(wppifc, system)
#define M_WPPifClassData wppifd
#define M_WPPifCClassData wppifx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPPif_classObj M_WPPifClassData.classObject
#define _M_WPPif M_WPPif_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPPifNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPPifNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPPifClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPPifClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPPifCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPPifCClassData;

/*
 * New and Renew macros for M_WPPif
 */
#define M_WPPifNew() \
   ( _M_WPPif ? \
	_somNew(_M_WPPif) \
	: ( M_WPPifNewClass(\
		M_WPPif_MajorVersion, \
		M_WPPif_MinorVersion),\
	   _somNew(_M_WPPif)))
#define M_WPPifRenew(buf) \
   ( _M_WPPif ? \
	_somRenew(_M_WPPif, buf) \
	: ( M_WPPifNewClass(\
		M_WPPif_MajorVersion, \
		M_WPPif_MinorVersion),\
	   _somRenew(_M_WPPif, buf)))

/*
 * Override method: wpclsQueryInstanceFilter
 */
#define M_WPPif_wpclsQueryInstanceFilter(somSelf) \
	M_WPFileSystem_wpclsQueryInstanceFilter(somSelf)

/*
 * Override method: wpclsQueryInstanceType
 */
#define M_WPPif_wpclsQueryInstanceType(somSelf) \
	M_WPFileSystem_wpclsQueryInstanceType(somSelf)

/*
 * Override method: wpclsInitData
 */
#define M_WPPif_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPPif_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsQueryDefaultHelp
 */
#define M_WPPif_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary) \
	M_WPObject_wpclsQueryDefaultHelp(somSelf,pHelpPanelId,pszHelpLibrary)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPPif_wpclsAddClipboardAssoc M_WPDataFile_wpclsAddClipboardAssoc
#define M_WPPif_wpclsEnumClipboardClasses M_WPDataFile_wpclsEnumClipboardClasses
#define M_WPPif_wpclsQueryIconData M_WPObject_wpclsQueryIconData
#define M_WPPif_wpclsQueryStyle M_WPObject_wpclsQueryStyle
#define M_WPPif_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPPif_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPPif_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPPif_wpclsQueryAwakeObject M_WPFileSystem_wpclsQueryAwakeObject
#define M_WPPif_wpclsFileSysExists M_WPFileSystem_wpclsFileSysExists
#define M_WPPif_wpclsQueryObjectFromPath M_WPFileSystem_wpclsQueryObjectFromPath
#define M_WPPif_wpclsQueryInstanceClass M_WPFileSystem_wpclsQueryInstanceClass
#define M_WPPif_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPPif_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPPif_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPPif_wpclsNew M_WPObject_wpclsNew
#define M_WPPif_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPPif_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPPif_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPPif_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPPif_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPPif_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPPif_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPPif_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPPif_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPPif_wpclsSetError M_WPObject_wpclsSetError
#define M_WPPif_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPPif_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPPif_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPPif_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPPif_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPPif_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPPif_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPPif_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPPif_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPPif_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPPif_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPPif_somUninit SOMObject_somUninit
#define M_WPPif_somClassReady SOMClass_somClassReady
#define M_WPPif_somNew SOMClass_somNew
#define M_WPPif_somRenew SOMClass_somRenew
#define M_WPPif__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPPif__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPPif__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPPif__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPPif_somNewNoInit SOMClass_somNewNoInit
#define M_WPPif_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPPif_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPPif_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPPif_somAllocate SOMClass_somAllocate
#define M_WPPif_somDeallocate SOMClass_somDeallocate
#define M_WPPif__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPPif__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPPif_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPPif_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPPif_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPPif_somInitClass SOMClass_somInitClass
#define M_WPPif_somInitMIClass SOMClass_somInitMIClass
#define M_WPPif_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPPif_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPPif_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPPif_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPPif_somGetClassData SOMClass_somGetClassData
#define M_WPPif_somSetClassData SOMClass_somSetClassData
#define M_WPPif_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPPif_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPPif_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPPif_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPPif_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPPif_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPPif_somGetMethodData SOMClass_somGetMethodData
#define M_WPPif_somGetRdStub SOMClass_somGetRdStub
#define M_WPPif_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPPif_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPPif_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPPif_somGetName SOMClass_somGetName
#define M_WPPif_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPPif_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPPif_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPPif_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPPif_somGetParent SOMClass_somGetParent
#define M_WPPif_somGetParents SOMClass_somGetParents
#define M_WPPif_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPPif_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPPif_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPPif_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPPif_somFindMethod SOMClass_somFindMethod
#define M_WPPif_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPPif_somFindSMethod SOMClass_somFindSMethod
#define M_WPPif_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPPif_somLookupMethod SOMClass_somLookupMethod
#define M_WPPif_somCheckVersion SOMClass_somCheckVersion
#define M_WPPif_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPPif_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPPif_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPPif_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPPif_somDefaultInit SOMObject_somDefaultInit
#define M_WPPif_somDestruct SOMObject_somDestruct
#define M_WPPif_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPPif_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPPif_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPPif_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPPif_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPPif_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPPif_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPPif_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPPif_somInit SOMObject_somInit
#define M_WPPif_somFree SOMObject_somFree
#define M_WPPif_somGetClass SOMObject_somGetClass
#define M_WPPif_somGetClassName SOMObject_somGetClassName
#define M_WPPif_somGetSize SOMObject_somGetSize
#define M_WPPif_somIsA SOMObject_somIsA
#define M_WPPif_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPPif_somRespondsTo SOMObject_somRespondsTo
#define M_WPPif_somDispatch SOMObject_somDispatch
#define M_WPPif_somClassDispatch SOMObject_somClassDispatch
#define M_WPPif_somCastObj SOMObject_somCastObj
#define M_WPPif_somResetObj SOMObject_somResetObj
#define M_WPPif_somDispatchV SOMObject_somDispatchV
#define M_WPPif_somDispatchL SOMObject_somDispatchL
#define M_WPPif_somDispatchA SOMObject_somDispatchA
#define M_WPPif_somDispatchD SOMObject_somDispatchD
#define M_WPPif_somPrintSelf SOMObject_somPrintSelf
#define M_WPPif_somDumpSelf SOMObject_somDumpSelf
#define M_WPPif_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPPif_h */
