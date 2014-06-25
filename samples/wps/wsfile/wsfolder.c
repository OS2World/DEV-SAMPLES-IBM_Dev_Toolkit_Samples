
/*
 * This file was generated by the SOM Compiler.
 * FileName: wsfolder.c.
 * Generated using:
 *     SOM Precompiler spc: 1.22
 *     SOM Emitter emitc: 1.24
 */

/******************************************************************************
*
*  Module Name: WSFOLDER.C
*
*  OS/2 Work Place Shell Sample Program
*
*  Copyright (C) 1994, 1995 IBM Corporation
*
*      DISCLAIMER OF WARRANTIES.  The following [enclosed] code is
*      sample code created by IBM Corporation. This sample code is not
*      part of any standard or IBM product and is provided to you solely
*      for  the purpose of assisting you in the development of your
*      applications.  The code is provided "AS IS", without
*      warranty of any kind.  IBM shall not be liable for any damages
*      arising out of your use of the sample code, even if they have been
*      advised of the possibility of such damages.
*
*  Entry Points:
*
*     Class Methods:
*
*        wsfoldM_clsQueryModuleHandle
*
*     Overridden Class Methods:
*
*        wsfoldM_wpclsInitData
*        wsfoldM_wpclsQueryTitle
*        wsfoldM_wpclsQueryIconData
*        wsfoldM_wpclsQueryIconDataN
*        wsfoldM_wpclsQueryDefaultView
*        wsfoldM_wpclsQueryDefaultHelp
*        wsfoldM_wpclsQueryStyle
*
*     Instance Methods:
*
*        wsfold_closeViews
*        wsfold_queryFirstViewHandle
*        wsfold_setFirstViewHandle
*
*     Overridden Instance Methods:
*
*        wsfold_wpOpen
*        wsfold_wpClose
*        wsfold_wpMenuItemHelpSelected
*        wsfold_wpMenuItemSelected
*        wsfold_wpModifyPopupMenu
*        wsfold_wpDragOver
*        wsfold_wpDrop
*        wsfold_wpDeleteFromObjUseList
*        wsfold_wpQueryConcurrentView
*        wsfold_wpInitData
*        wsfold_wpPrintObject
*        wsfold_wpAddToContent
*        wsfold_wpDeleteFromContent
*
*     Non-Method Functions:
*
*
******************************************************************************/

#define INCL_DOS
#define INCL_PM
#include <os2.h>
#include <string.h>

#define WSFOLDER_Class_Source
#define M_WSFOLDER_Class_Source
#include "wsfolder.ih"
/* CSC2IDL:  REMOVED after .csc -> .idl conversion:   #include "wsfolder.ph" */

/***************** GLOBAL/STATIC (NON-INSTANCE) DATA SECTION ******************
*****                                                                     *****
*****    This data shouldn't be changed by instance methods or it will    *****
*****    effect all instances!  Any variables that are specific (unique   *****
*****    values) for each instance of this object should be declared as   *****
*****  instance data or dynamically allocated and stored as window data.  *****
*****                                                                     *****
*****      This global data should be declared as class instance data     *****
*****    if it will change after initialization.  In this case, it will   *****
*****                  be accessed through class methods.                 *****
*****                                                                     *****
******************************************************************************/

   UCHAR      szWSFOLDERClassTitle[CCHMAXPATH] = "";
   CHAR       szHelpLibrary[] =          "wsfolder.hlp";
   HMODULE    hmod = NULLHANDLE;

/*
 *  METHOD: closeViews                                     ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    Close all but the first of the currently open views of a wsfolder object.
 *
 *  NOTE: There is a "Close Views" option on the context menu, that will
 *         call this method
 */
SOM_Scope void   SOMLINK wsfold_closeViews(WSFOLDER *somSelf)
{
    PUSEITEM  pUseItem, pUseItemNext;
    PVIEWITEM pViewItem;
    HWND      hwndView;
    typedef struct _HANDLENODE
    {
       LHANDLE handle;
       struct _HANDLENODE * pNextHandle;
    } HANDLENODE;
    HANDLENODE *pHandles = NULL;
    HANDLENODE *pTemp = NULL;

    /* WSFOLDERData *somThis = WSFOLDERGetData(somSelf); */
    WSFOLDERMethodDebug("WSFOLDER","wsfold_closeViews");


    /* go through use list looking for OPENVIEW use items, as you
     * find one, add view item's handle to a list
     */
    for ( pUseItem = _wpFindUseItem(somSelf , USAGE_OPENVIEW, NULL);
          pUseItem;
          pUseItem = _wpFindUseItem(somSelf , USAGE_OPENVIEW, pUseItem) )
    {
       if (pTemp = (HANDLENODE*)_wpAllocMem(somSelf,sizeof(HANDLENODE),NULL))
       {
          pViewItem = (PVIEWITEM)(pUseItem + 1);
          pTemp->handle = pViewItem->handle;       /* hwnd of view */
          pTemp->pNextHandle = pHandles;
          pHandles = pTemp;
       }
    }

    /* go through list of handles we just found and close any
     * views other than the first one
     */
    pTemp = pHandles;
    while (pTemp)
    {
       if (_queryFirstViewHandle(somSelf) != (HWND)pTemp->handle )
       {
          WinSendMsg( (HWND)pTemp->handle, WM_CLOSE, 0, 0);
       }
       pTemp = pTemp->pNextHandle;
    }

    /* free our list */
    while (pHandles)
    {
       pTemp = pHandles;
       pHandles = pTemp->pNextHandle;
       _wpFreeMem(somSelf,(PBYTE)pTemp);
    }

}

/*
 *
 *   METHOD: queryFirstViewHandle                           ( ) PRIVATE
 *                                                          (X) PUBLIC
 *   DESCRIPTION:
 *
 *     return the handle of the view that was opened first of the
 *     currently open views of this wsfolder object.
 *
 */
SOM_Scope HWND   SOMLINK wsfold_queryFirstViewHandle(WSFOLDER *somSelf)
{
    WSFOLDERData *somThis = WSFOLDERGetData(somSelf);
    WSFOLDERMethodDebug("WSFOLDER","wsfold_queryFirstViewHandle");

    return _hwndFirstView;
}

/*
 *
 *   METHOD: setFirstViewHandle                             ( ) PRIVATE
 *                                                          (X) PUBLIC
 *   DESCRIPTION:
 *
 *     Do special processing on first open of folder
 *
 *   PARAMETERS:
 *
 *      HWND - hwnd of the first of multiple currently opened
 *             views of this object
 *
 *   RETURNS:
 *
 *      TRUE - hwnd set successfully
 *      FALSE - first hwnd wasn't set successfully
 *
 */
SOM_Scope BOOL   SOMLINK wsfold_setFirstViewHandle(WSFOLDER *somSelf,
                HWND hwndView)
{
    BOOL rc = TRUE;
    WSFOLDERData *somThis = WSFOLDERGetData(somSelf);
    WSFOLDERMethodDebug("WSFOLDER","wsfold_setFirstViewHandle");

    if (hwndView != NULLHANDLE)
    {
      if (_hwndFirstView == NULLHANDLE)  /* no current first view */
      {
         _hwndFirstView = hwndView;     /* setting to a first view handle */
      }
      else
      {
         /* a non-null _hwndFirstView can only be wiped out by resetting it
          * to NULLHANDLE, not to another handle.  This prevents a
          * misuse of this method
          */
         rc = FALSE;
      }

    }
    else      /* wiping out first view handle */
    {
       _hwndFirstView = NULLHANDLE;
    }

    return rc;
}

/*
 *  METHOD: wpOpen                                         ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    Do special processing on first open of folder
 */
SOM_Scope HWND   SOMLINK wsfold_wpOpen(WSFOLDER *somSelf,
                HWND hwndCnr,
                ULONG ulView,
                ULONG param)
{
    HWND        hwndFromParentOpen = NULLHANDLE;
    WSFOLDERData *somThis = WSFOLDERGetData(somSelf);
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpOpen");

    if (_queryFirstViewHandle(somSelf) == NULLHANDLE)
    {

       /* we ONLY want to do this on the FIRST open of the folder.
        */
       if (_wpPopulate(somSelf, NULLHANDLE, NULL, FALSE))
        {
           WPObject *Obj;
           WPObject *LastFoundObj = NULL;

           /* loop through the contents of the folder, checking each to
            * see if it is an instance of a WPFolder, we'll delete any
            * WPFolders as a cleanup step
            */
           for ( Obj = _wpQueryContent(somSelf,NULL,(ULONG)QC_First);
                 Obj;
                 Obj = _wpQueryContent(somSelf, Obj, (ULONG) QC_Next ))
           {
              /* delete the last object found on the previous iteration
               * of the loop (we couldn't delete it then, because we
               * needed it at the top of the loop for this iteration)
               */
              if (LastFoundObj)
              {
                 _wpDelete(LastFoundObj,0);
                 LastFoundObj = NULL;
              }

              /* we want to make sure that all previously
               * existing folders are deleted
               */
              if (_somIsA(Obj, _WPFolder))
              {
                 LastFoundObj = Obj;
              }

           }  /* end for */


           /* if there is still one object left to delete, do it now
            */
           if (LastFoundObj)
           {
              _wpDelete(LastFoundObj,0);
              LastFoundObj = NULL;
           }
       } /* end if populate */
    } /* end if first open */

    /* now, show the opened folder */
    hwndFromParentOpen = parent_wpOpen(somSelf, hwndCnr, ulView, param);

    /* if this is the first open, set our global flag
     */
    if (_queryFirstViewHandle(somSelf) == NULLHANDLE)
    {
        _setFirstViewHandle(somSelf, hwndFromParentOpen);
    }

    return hwndFromParentOpen;
}

/*
 *
 *   METHOD: wpInitData                                     ( ) PRIVATE
 *                                                          (X) PUBLIC
 *   DESCRIPTION:
 *
 *     Set object's detail class to be WSFILE
 *
 */

SOM_Scope VOID   SOMLINK wsfold_wpInitData(WSFOLDER *somSelf)
{
    SOMClass * pClass;
    somId      ClassId;
    WSFOLDERData *somThis = WSFOLDERGetData(somSelf);
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpInitData");

    parent_wpInitData(somSelf);
    ClassId = SOM_IdFromString( "WSFILE" );
    pClass = _somFindClass( SOMClassMgrObject, ClassId, 1, 1);
    SOMFree(ClassId);         /* always free somIds */
    _wpSetFldrDetailsClass(somSelf, pClass);
    _wpSetFldrSortClass(somSelf, pClass);
}
/*
 * METHOD: wpModifyPopupMenu                              ( ) PRIVATE
 *                                                        (X) PUBLIC
 * DESCRIPTION:
 *
 *   Add our extra option to the context menu to close all but first view
 */
SOM_Scope BOOL   SOMLINK wsfold_wpModifyPopupMenu(WSFOLDER *somSelf,
                HWND hwndMenu,
                HWND hwndCnr,
                ULONG iPosition)
{
    HMODULE    hmod = NULLHANDLE;
    zString    zsPathName;

    /* WSFOLDERData *somThis = WSFOLDERGetData(somSelf); */
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpModifyPopupMenu");

    hmod = _clsQueryModuleHandle(_WSFOLDER);
    if (hmod)
    {
       _wpInsertPopupMenuItems( somSelf, hwndMenu, 0, hmod, ID_CLOSEVIEWSMENU, 0);
    }

    return (parent_wpModifyPopupMenu(somSelf,hwndMenu,hwndCnr,iPosition));

}

/*
 * METHOD: wpMenuItemSelected                             ( ) PRIVATE
 *                                                        (X) PUBLIC
 * DESCRIPTION:
 *
 *   Process extra menu option that we added.
 */
SOM_Scope BOOL   SOMLINK wsfold_wpMenuItemSelected(WSFOLDER *somSelf,
                HWND hwndFrame,
                ULONG ulMenuId)
{
    /* WSFOLDERData *somThis = WSFOLDERGetData(somSelf); */
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpMenuItemSelected");

    if (ulMenuId == IDM_CLOSEVIEWS)
    {
       _closeViews(somSelf);
       return(TRUE);
    }
    else
    {
       return (parent_wpMenuItemSelected(somSelf,hwndFrame,ulMenuId));
    }
}


/*
 *
 *  METHOD: wpMenuItemHelpSelected                         ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    Process help for the extra menu option that we added.
 *
 */
SOM_Scope BOOL   SOMLINK wsfold_wpMenuItemHelpSelected(WSFOLDER *somSelf,
                ULONG MenuId)
{
    WSFOLDERData *somThis = WSFOLDERGetData(somSelf);
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpMenuItemHelpSelected");

    switch( MenuId )
    {
       case IDM_CLOSEVIEWS:

          return(_wpDisplayHelp(somSelf,ID_HELP_CLOSEVIEWS,szHelpLibrary));
          break;

       default:
          break;
    }

     return (parent_wpMenuItemHelpSelected(somSelf,MenuId));
}

/*
 *
 *  METHOD: wpClose                                        ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    When a folder object is closed, we will zero out its first view
 *    instance variable, so that the next time it has a first view opened,
 *    we can keep track of that.
 *
 */
SOM_Scope BOOL   SOMLINK wsfold_wpClose(WSFOLDER *somSelf)
{
    WSFOLDERData *somThis = WSFOLDERGetData(somSelf);
    BOOL          rcParentClose;
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpClose");

    rcParentClose = parent_wpClose(somSelf);
    _setFirstViewHandle(somSelf, NULLHANDLE);
    return(rcParentClose);
}

/*
 * METHOD: wpDragOver                                     ( ) PRIVATE
 *                                                        (X) PUBLIC
 * DESCRIPTION:
 *
 *   Instances of class WSFOLDER are the only folders that accept a drop
 *   of a WSFILE object.  This override returns DOR_DROP when a WSFILE
 *   object is dragged over a WSFOLDER object.  The default meaning of
 *   a drag will be changed to perform a COPY (instead of the default
 *   being to MOVE the object)
 */
SOM_Scope MRESULT   SOMLINK wsfold_wpDragOver(WSFOLDER *somSelf,
                HWND hwndCnr,
                PDRAGINFO pdrgInfo)
{
    MRESULT   mr;
    PDRAGITEM pDragItem;
    ULONG     i;
    ULONG     ulOurs = 0;

    /* WSFOLDERData *somThis = WSFOLDERGetData(somSelf); */
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpDragOver");

    for (i = 0; i < pdrgInfo->cditem ; i++)
    {
       pDragItem = DrgQueryDragitemPtr(pdrgInfo,i);

       if (DrgVerifyRMF(pDragItem,"DRM_OUROWNSPECIAL","DRF_OBJECT"))
       {
          ulOurs++;
       }
    }

    if (ulOurs == 0)
    {
       mr = (parent_wpDragOver(somSelf,hwndCnr,pdrgInfo));
    }
    else
    {
       if (ulOurs == pdrgInfo->cditem)
       {
          mr = MRFROM2SHORT(DOR_DROP,
                           (SHORT)((pdrgInfo->usOperation == DO_DEFAULT)
                                   ? DO_COPY : pdrgInfo->usOperation));
       }
       else
       {
          mr = MRFROM2SHORT(DOR_NEVERDROP,DO_DEFAULT);
       }
    }
    return mr;
}

/*
 * METHOD: wpDrop                                         ( ) PRIVATE
 *                                                        (X) PUBLIC
 * DESCRIPTION:
 *
 *   This override will be called after a drop of a WSFILE object, so that
 *   the drop can actually be processed.
 */
SOM_Scope MRESULT   SOMLINK wsfold_wpDrop(WSFOLDER *somSelf,
                HWND hwndCnr,
                PDRAGINFO pdrgInfo,
                PDRAGITEM pdrgItem)
{
    ULONG     i;
    PDRAGITEM pDragItem;

    /* WSFOLDERData *somThis = WSFOLDERGetData(somSelf); */
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpDrop");

    for (i = 0; i < pdrgInfo->cditem ; i++)
    {
       pDragItem = DrgQueryDragitemPtr(pdrgInfo,i);

       if (DrgVerifyRMF(pDragItem,"DRM_OUROWNSPECIAL","DRF_OBJECT"))
       {
          DrgDeleteStrHandle(pDragItem->hstrRMF);
          pDragItem->hstrRMF = DrgAddStrHandle("<DRM_OBJECT,DRF_OBJECT>");
       }
    }

    return (parent_wpDrop(somSelf,hwndCnr,pdrgInfo,pdrgItem));
}

/*
 * METHOD: wpDeleteFromObjUseList                         ( ) PRIVATE
 *                                                        (X) PUBLIC
 * DESCRIPTION:
 *
 *   When a the last view of a WSFOLDER object is closed, we will zero out
 *   its "first view" instance variable, so that the next time it has a first
 *   view opened, we can keep track of that.
 */
SOM_Scope BOOL  SOMLINK wsfold_wpDeleteFromObjUseList(WSFOLDER *somSelf,
                       PUSEITEM  pUseItem )
{
   WSFOLDERData *somThis   = WSFOLDERGetData(somSelf);
   PUSEITEM      pItem;
   BOOL          rcParentCall;
   WSFOLDERMethodDebug("WSFOLDER","wsfold_wpDeleteFromObjUseList");

   rcParentCall = parent_wpDeleteFromObjUseList(somSelf, pUseItem);

   pItem = _wpFindUseItem(somSelf, USAGE_OPENVIEW, NULL);
   if (!pItem)
   {
      _setFirstViewHandle(somSelf, NULLHANDLE);
   }
   return(rcParentCall);
}

/*
 * METHOD: wpQueryConcurrentView                          ( ) PRIVATE
 *                                                        (X) PUBLIC
 * DESCRIPTION:
 *
 *   Objects of WSFOLDER class have concurrent views set to ON
 *   by default
 */
SOM_Scope ULONG  SOMLINK wsfold_wpQueryConcurrentView(WSFOLDER *somSelf )
{
/* WSFOLDERData *somThis = WSFOLDERGetData(somSelf); */
   WSFOLDERMethodDebug("WSFOLDER","wsfold_wpQueryConcurrentView");

   return CCVIEW_ON;
}

/*
 *  METHOD: wpPrintObject                                  ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    We will simply beep when a WSFOLDER object is "printed"
 */
SOM_Scope BOOL   SOMLINK wsfold_wpPrintObject(WSFOLDER *somSelf,
                PPRINTDEST pPrintDest,
                ULONG ulReserved)
{
    WSFOLDERData *somThis = WSFOLDERGetData(somSelf);
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpPrintObject");

    WinMessageBox( HWND_DESKTOP, HWND_DESKTOP,
                   (PSZ) "(just pretend!)",
                   (PSZ) "Folder Contents Printing",
                    20,
                    MB_OK | MB_INFORMATION | MB_MOVEABLE);

    return TRUE;
}

/*
 * METHOD: wpAddToContent                                 ( ) PRIVATE
 *                                                        (X) PUBLIC
 * DESCRIPTION:
 *
 *   We will put up a dialog containing the title of
 *   the newly added object whenever one is added to a WSFOLDER
 *   object
 */
SOM_Scope BOOL   SOMLINK wsfold_wpAddToContent(WSFOLDER *somSelf,
                                               WPObject *pObject)
{
    WSFOLDERData *somThis = WSFOLDERGetData(somSelf);
    BOOL  rc = FALSE;
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpAddToContent");

    rc = parent_wpAddToContent(somSelf, pObject);
    if (rc)
    {
       WinMessageBox( HWND_DESKTOP, HWND_DESKTOP,
                      (PSZ) _wpQueryTitle(pObject),
                      (PSZ) "Notification of added object",
                       20,
                       MB_OK | MB_INFORMATION | MB_MOVEABLE);
    }
    return(rc);

}

/*
 * METHOD: wpDeleteFromContent                            ( ) PRIVATE
 *                                                        (X) PUBLIC
 * DESCRIPTION:
 *
 *   We will put up a dialog containing the title of
 *   the newly removed object whenever one is removed from a WSFOLDER
 *   object
 */
SOM_Scope BOOL   SOMLINK wsfold_wpDeleteFromContent(WSFOLDER *somSelf,
                                                    WPObject *pObject)
{
    WSFOLDERData *somThis = WSFOLDERGetData(somSelf);
    BOOL rc = FALSE;
    WSFOLDERMethodDebug("WSFOLDER","wsfold_wpDeleteFromContent");

    rc = parent_wpDeleteFromContent(somSelf, pObject);
    if (rc)
    {
       WinMessageBox( HWND_DESKTOP, HWND_DESKTOP,
                      (PSZ) _wpQueryTitle(pObject),
                      (PSZ) "Notification of removed object",
                       20,
                       MB_OK | MB_INFORMATION | MB_MOVEABLE);
    }
    return(rc);

}

#undef SOM_CurrentClass
#define SOM_CurrentClass SOMMeta

/*
 *
 *  METHOD: clsQueryModuleHandle                           ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    This method returns the module handle of this class.  If this is the
 *    first invocation, DosQueryModuleHandle is called to save the handle
 *    for future invocations.
 *
 *  RETURN:
 *
 *    0              Unsuccessful
 *    non-zero       module handle
 *
 */
SOM_Scope HMODULE   SOMLINK wsfoldM_clsQueryModuleHandle(M_WSFOLDER *somSelf)
{

    /* M_WSFOLDERData *somThis = M_WSFOLDERGetData(somSelf); */
    APIRET rc;
    M_WSFOLDERMethodDebug("M_WSFOLDER","wsfoldM_clsQueryModuleHandle");

   /*
    *   Make sure we already have module handle
    */

    if (hmod == NULLHANDLE)
    {
     zString zsPathName;
       /*
        *   Retrieve registered pathname of our module (DLL) and query the
        *   module handle.
        */
       zsPathName =
       _somLocateClassFile( SOMClassMgrObject, SOM_IdFromString("WSFOLDER"),
                            WSFOLDER_MajorVersion, WSFOLDER_MinorVersion);
       rc = DosQueryModuleHandle( zsPathName, &hmod);
       if (rc)
       {
          DebugBox("wsfoldM_wpclsInitData", "Failed to load module");
          return;
       }

    }   /* end if (hmod == NULLHANDLE) */

    return (hmod);

}

/*
 *
 *  METHOD: wpclsInitData
 *
 *  DESCRIPTION:
 *
 *    Initalize the class data
 *
 */
SOM_Scope void   SOMLINK wsfoldM_wpclsInitData(WSFOLDER *somSelf)
{
/*    WSFOLDERData *somThis = WSFOLDERGetData(somSelf); */
    WSFOLDERMethodDebug("WSFOLDER","wsfoldM_wpclsInitData");

    parent_wpclsInitData(somSelf);

    /*
     *   Get class title
     */
    if (!WinLoadString(WinQueryAnchorBlock(HWND_DESKTOP), _clsQueryModuleHandle(somSelf), ID_TITLE,
                         sizeof(szWSFOLDERClassTitle), szWSFOLDERClassTitle))
                              /* Load string failed: use the parent's string */
       strcpy(szWSFOLDERClassTitle, parent_wpclsQueryTitle(somSelf));

}

/*
 *
 *  METHOD: wpclsQueryDefaultHelp                          ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    Define help for objects of our class.
 *
 */
SOM_Scope BOOL SOMLINK wsfoldM_wpclsQueryDefaultHelp(M_WSFOLDER *somSelf,
                PULONG pHelpPanelId,
                PSZ pszHelpLibrary)
{
 /* M_WSFOLDERData *somThis = M_WSFOLDERGetData(somSelf); */
    M_WSFOLDERMethodDebug("M_WSFOLDER","wsfoldM_wpclsQueryDefaultHelp");

    if (pHelpPanelId)                           /* set default help panel id */
       *pHelpPanelId   = ID_HELP_DEFAULT;

    if (pszHelpLibrary)                                /* copy help filename */
       strcpy(pszHelpLibrary, szHelpLibrary);

    return (TRUE);

}

/*
 *
 *  METHOD: wpclsQueryDefaultView                          ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    WSFOLDER objects open in OPEN_DETAILS by default
 *
 */
SOM_Scope ULONG SOMLINK wsfoldM_wpclsQueryDefaultView(M_WSFOLDER *somSelf)
{
 /* M_WSFOLDERData *somThis = M_WSFOLDERGetData(somSelf); */
    M_WSFOLDERMethodDebug("M_WSFOLDER","wsfoldM_wpclsQueryDefaultView");

    return OPEN_DETAILS;

}

/*
 *
 *  METHOD: wpclsQueryTitle
 *
 *  DESCRIPTION:
 *
 *    Return class title for WSFOLDER class
 *
 */
SOM_Scope PSZ   SOMLINK wsfoldM_wpclsQueryTitle(M_WSFOLDER *somSelf)
{
    /* M_WSFOLDERData *somThis = M_WSFOLDERGetData(somSelf); */
    M_WSFOLDERMethodDebug("M_WSFOLDER","wsfoldM_wpclsQueryTitle");

    if (*szWSFOLDERClassTitle )
       return( szWSFOLDERClassTitle );
    else
       return( parent_wpclsQueryTitle(somSelf));
}

/*
 *
 *  METHOD: wpclsQueryIconData                            ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    Return the class icon
 *
 */
SOM_Scope ULONG SOMLINK wsfoldM_wpclsQueryIconData(M_WSFOLDER *somSelf,
                  PICONINFO pIconInfo)
{
   APIRET rc;
   M_WSFOLDERMethodDebug("M_WSFOLDER","wsfoldM_wpclsQueryIconData");

   if (pIconInfo)
   {
      /*
       *   fill in icon information
       */
      pIconInfo->fFormat = ICON_RESOURCE;
      pIconInfo->hmod= _clsQueryModuleHandle(somSelf);
      pIconInfo->resid= ID_ICON;
   }

   return (sizeof(ICONINFO));

}

/*
 *
 *  METHOD: wpclsQueryIconDataN                            ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    Return the class open icon
 *
 */
SOM_Scope ULONG SOMLINK wsfoldM_wpclsQueryIconDataN(M_WSFOLDER *somSelf,
                  PICONINFO pIconInfo, ULONG ulIconIndex)
{
   APIRET rc;

   M_WSFOLDERMethodDebug("M_WSFOLDER","wsfoldM_wpclsQueryIconDataN");

   if (pIconInfo)
   {
      if (ulIconIndex == 1)
      {
         /*
          *   fill in open icon information
          */
         pIconInfo->fFormat = ICON_RESOURCE;
         pIconInfo->hmod= _clsQueryModuleHandle(somSelf);
         pIconInfo->resid= ID_OPENICON;

      }
      else
         return parent_wpclsQueryIconDataN(somSelf, pIconInfo, ulIconIndex);
   }

   return (sizeof(ICONINFO));

}

/*
 *  METHOD: wpclsQueryStyle                                ( ) PRIVATE
 *                                                         (X) PUBLIC
 *  DESCRIPTION:
 *
 *    Change default class style so that WSFOLDER objects have can
 *    be "printed" (we'll just beep), and so that this class is not
 *    templated.
 */

SOM_Scope ULONG   SOMLINK wsfoldM_wpclsQueryStyle(M_WSFOLDER *somSelf)
{
    /* M_WSFOLDERData *somThis = M_WSFOLDERGetData(somSelf); */
    M_WSFOLDERMethodDebug("M_WSFOLDER","wsfoldM_wpclsQueryStyle");

    return ((parent_wpclsQueryStyle(somSelf) & ~CLSSTYLE_NEVERPRINT)
            | CLSSTYLE_PRIVATE);
}



