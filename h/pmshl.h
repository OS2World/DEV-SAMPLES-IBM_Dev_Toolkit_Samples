/****************************** Module Header ******************************\
*
* Module Name: PMSHL.H
*
* OS/2 Presentation Manager Shell constants, types, messages and
* function declarations include file.
*
* Copyright (c) International Business Machines Corporation 1981, 1988-1992
*
* ===========================================================================
*
* The following symbols are used in this file for conditional sections.
*
*   INCL_SHLERRORS       defined if INCL_ERRORS is defined
*   INCL_WINPROGRAMLIST  Include Program List Calls
*   INCL_WINSHELLDATA    Include Presentation Manager profile calls
*   INCL_WINSWITCHLIST   Include Switch List Calls
*
* ===========================================================================
*
* Comments at the end of each typedef line give the name tags used in
* the assembler include version of this file.
*
* The assembler include version of this file excludes lines between XLATOFF
* and XLATON comments.
*
\***************************************************************************/

/* NOINC */
#if __IBMC__ || __IBMCPP__
   #pragma info( none )
   #ifndef __CHKHDR__
      #pragma info( none )
   #endif
   #pragma info( restore )
#endif
#ifdef __cplusplus
      extern "C" {
#endif
/* INC */

#define SHL_INCLUDED


/*** if error definitions are required then allow Shell errors *************/
#ifdef INCL_ERRORS
   #define INCL_SHLERRORS
#endif /* INCL_ERRORS */


#ifndef SESMGR
   /*** common types, constants and function declarations ******************/
   
   
   /*** maximum title length ***********************************************/
   #define MAXNAMEL 60
   
   
   /*** program handle *****************************************************/
   typedef LHANDLE HPROGRAM;       /* hprog */
   typedef HPROGRAM *PHPROGRAM;
   typedef LHANDLE HAPP;
   
   
   /*** ini file handle ****************************************************/
   typedef LHANDLE HINI;           /* hini */
   typedef HINI *PHINI;
   
   
   #define HINI_PROFILE         (HINI) NULL
   #define HINI_USERPROFILE     (HINI) -1L
   #define HINI_SYSTEMPROFILE   (HINI) -2L
   #define HINI_USER    HINI_USERPROFILE
   #define HINI_SYSTEM  HINI_SYSTEMPROFILE
   
   
   typedef struct _PRFPROFILE    /* prfpro */
   {
      ULONG  cchUserName;
      PSZ    pszUserName;
      ULONG  cchSysName;
      PSZ    pszSysName;
   } PRFPROFILE;
   typedef PRFPROFILE *PPRFPROFILE;
   
#endif  /* end #ifndef SESMGR */

#ifdef INCL_WINPROGRAMLIST
   /*** program list section ***********************************************/
   #ifndef SESMGR
      
      /*** maximum path length *********************************************/
      #define MAXPATHL 128
      
      /*** root group handle ***********************************************/
      #define SGH_ROOT      (HPROGRAM)-1L
      
      typedef struct _HPROGARRAY       /* hpga */
      {
         HPROGRAM ahprog[1];
      } HPROGARRAY;
      typedef HPROGARRAY *PHPROGARRAY;
      
   #endif  /* end of #ifndef SESMGR */
   
   typedef ULONG PROGCATEGORY;       /* progc */
   
   typedef PROGCATEGORY *PPROGCATEGORY;
   
   /*** values acceptable for PROGCATEGORY for PM groups *******************/
   #define PROG_DEFAULT             (PROGCATEGORY)0
   #define PROG_FULLSCREEN          (PROGCATEGORY)1
   #define PROG_WINDOWABLEVIO       (PROGCATEGORY)2
   #define PROG_PM                  (PROGCATEGORY)3
   #define PROG_GROUP               (PROGCATEGORY)5
   #define PROG_REAL                (PROGCATEGORY)4
   #define PROG_VDM                 (PROGCATEGORY)4
   #define PROG_WINDOWEDVDM         (PROGCATEGORY)7
   #define PROG_DLL                 (PROGCATEGORY)6
   #define PROG_PDD                 (PROGCATEGORY)8
   #define PROG_VDD                 (PROGCATEGORY)9
   #define PROG_WINDOW_REAL         (PROGCATEGORY)10
   #define PROG_WINDOW_PROT         (PROGCATEGORY)11
   #define PROG_30_STD              (PROGCATEGORY)11
   #define PROG_WINDOW_AUTO         (PROGCATEGORY)12
   #define PROG_SEAMLESSVDM         (PROGCATEGORY)13
   #define PROG_30_STDSEAMLESSVDM   (PROGCATEGORY)13
   #define PROG_SEAMLESSCOMMON      (PROGCATEGORY)14
   #define PROG_30_STDSEAMLESSCOMMON (PROGCATEGORY)14
   #define PROG_31_STDSEAMLESSVDM   (PROGCATEGORY)15
   #define PROG_31_STDSEAMLESSCOMMON (PROGCATEGORY)16
   #define PROG_31_ENHSEAMLESSVDM   (PROGCATEGORY)17
   #define PROG_31_ENHSEAMLESSCOMMON (PROGCATEGORY)18
   #define PROG_31_ENH              (PROGCATEGORY)19
   #define PROG_31_STD              (PROGCATEGORY)20
   #define PROG_DOS_GAME            (PROGCATEGORY)21
   #define PROG_WIN_GAME            (PROGCATEGORY)22
   #define PROG_DOS_MODE            (PROGCATEGORY)23
   #define PROG_RESERVED            (PROGCATEGORY)255
   
   #ifndef SESMGR
      
      typedef struct _PROGTYPE         /* progt */
      {
         PROGCATEGORY progc;
         ULONG        fbVisible;
      } PROGTYPE;
      typedef PROGTYPE *PPROGTYPE;
      
      
      /*** visibility flag for PROGTYPE structure **************************/
      #define SHE_VISIBLE         0x00
      #define SHE_INVISIBLE       0x01
      #define SHE_RESERVED        0xFF
      
      /*** Protected group flag for PROGTYPE structure *********************/
      #define SHE_UNPROTECTED     0x00
      #define SHE_PROTECTED       0x02
      
      
      
      /*** Structures associated with 'Prf' calls **************************/
      typedef struct _PROGDETAILS    /* progde */
      {
         ULONG     Length;         /* set this to sizeof(PROGDETAILS)  */
         PROGTYPE  progt;
         PSZ       pszTitle;       /* any of the pointers can be NULL  */
         PSZ       pszExecutable;
         PSZ       pszParameters;
         PSZ       pszStartupDir;
         PSZ       pszIcon;
         PSZ       pszEnvironment; /* this is terminated by  /0/0      */
         SWP       swpInitial;     /* this replaces XYWINSIZE          */
      } PROGDETAILS;
      typedef  PROGDETAILS *PPROGDETAILS;
      
      typedef struct _PROGTITLE             /* progti */
      {
         HPROGRAM hprog;
         PROGTYPE progt;
         PSZ      pszTitle;
      } PROGTITLE;
      typedef PROGTITLE *PPROGTITLE;
      
      /*** Program List API Function Definitions ***************************/
      
      
      /*** Program List API available 'Prf' calls **************************/
      
      ULONG APIENTRY PrfQueryProgramTitles(HINI hini,
                                           HPROGRAM hprogGroup,
                                           PPROGTITLE pTitles,
                                           ULONG cchBufferMax,
                                           PULONG pulCount);
      
      /*********************************************************************/
      /*  NOTE: string information is concatanated after the array of      */
      /*        PROGTITLE structures so you need to allocate storage       */
      /*        greater than sizeof(PROGTITLE)*cPrograms to query programs */
      /*        in a group.                                                */
      /*                                                                   */
      /*  PrfQueryProgramTitles recommended usage to obtain titles of all  */
      /*  programs in a group (Hgroup=SGH_ROOT is for all groups):         */
      /*                                                                   */
      /*  BufLen = PrfQueryProgramTitles(Hini, Hgroup,                     */
      /*                                  (PPROGTITLE)NULL, 0, &Count);    */
      /*                                                                   */
      /*  Alocate buffer of  Buflen                                        */
      /*                                                                   */
      /*  Len = PrfQueryProgramTitles(Hini, Hgroup, (PPROGTITLE)pBuffer,   */
      /*                               BufLen, pCount);                    */
      /*                                                                   */
      /*********************************************************************/
      
      HPROGRAM APIENTRY PrfAddProgram(HINI hini,
                                      PPROGDETAILS pDetails,
                                      HPROGRAM hprogGroup);
      
      BOOL     APIENTRY PrfChangeProgram(HINI hini,
                                         HPROGRAM hprog,
                                         PPROGDETAILS pDetails);
      
      ULONG    APIENTRY PrfQueryDefinition(HINI hini,
                                           HPROGRAM hprog,
                                           PPROGDETAILS pDetails,
                                           ULONG cchBufferMax);
      
      /*********************************************************************/
      /*  NOTE: string information is concatanated after the PROGDETAILS   */
      /*        field structure so you need to allocate storage greater    */
      /*        than sizeof(PROGDETAILS) to query programs                 */
      /*                                                                   */
      /*  PrfQueryDefinition recomended usage:                             */
      /*                                                                   */
      /*  bufferlen = PrfQueryDefinition(Hini,Hprog,(PPROGDETAILS)NULL,0)  */
      /*                                                                   */
      /*  Alocate buffer of bufferlen bytes                                */
      /*  set Length field (0 will be supported)                           */
      /*                                                                   */
      /*  (PPROGDETAILS)pBuffer->Length=sizeof(PPROGDETAILS)               */
      /*                                                                   */
      /*  len = PrfQueryDefinition(Hini, Hprog, (PPROGDETAILS)pBuffer,     */
      /*      bufferlen)                                                   */
      /*********************************************************************/
      
      BOOL     APIENTRY PrfRemoveProgram(HINI hini,
                                         HPROGRAM hprog);
      
#ifdef __cplusplus
      ULONG    APIENTRY PrfQueryProgramHandle(HINI hini,
                                              PCSZ  pszExe,
                                              PHPROGARRAY phprogArray,
                                              ULONG cchBufferMax,
                                              PULONG pulCount);
#else
      ULONG    APIENTRY PrfQueryProgramHandle(HINI hini,
                                              PSZ pszExe,
                                              PHPROGARRAY phprogArray,
                                              ULONG cchBufferMax,
                                              PULONG pulCount);
#endif
      
#ifdef __cplusplus
      HPROGRAM APIENTRY PrfCreateGroup(HINI hini,
                                       PCSZ  pszTitle,
                                       UCHAR chVisibility);
#else
      HPROGRAM APIENTRY PrfCreateGroup(HINI hini,
                                       PSZ pszTitle,
                                       UCHAR chVisibility);
#endif
      
      BOOL     APIENTRY PrfDestroyGroup(HINI hini,
                                        HPROGRAM hprogGroup);
      
#ifdef __cplusplus
      PROGCATEGORY  APIENTRY PrfQueryProgramCategory(HINI hini,
                                                     PCSZ  pszExe);
#else
      PROGCATEGORY  APIENTRY PrfQueryProgramCategory(HINI hini,
                                                     PSZ pszExe);
#endif
      
#ifdef __cplusplus
      HAPP APIENTRY WinStartApp(HWND hwndNotify,
                                PPROGDETAILS pDetails,
                                PCSZ  pszParams,
                                PVOID Reserved,
                                ULONG fbOptions);
#else
      HAPP APIENTRY WinStartApp(HWND hwndNotify,
                                PPROGDETAILS pDetails,
                                PSZ pszParams,
                                PVOID Reserved,
                                ULONG fbOptions);
#endif
      
      /*** bit values for Options parameter ********************************/
      #define SAF_VALIDFLAGS  0x001F
      
      #define SAF_INSTALLEDCMDLINE  0x0001     /* use installed parameters */
      #define SAF_STARTCHILDAPP     0x0002     /* related application      */
      #define SAF_MAXIMIZED         0x0004     /* Start App maximized */
      #define SAF_MINIMIZED         0x0008     /* Start App minimized, if !SAF_MAXIMIZED */
      #define SAF_BACKGROUND        0x0010     /* Start app in the background */
      
      
      BOOL APIENTRY WinTerminateApp(HAPP happ);
      
   #endif /* end of #ifndef SESMGR */
#endif /* INCL_WINPROGRAMLIST */


/*** switch list section ***************************************************/

typedef LHANDLE HSWITCH;        /* hsw */
typedef HSWITCH *PHSWITCH;

#ifndef SESMGR
   #if (defined(INCL_WINSWITCHLIST) || !defined(INCL_NOCOMMON))
      
      typedef struct _SWCNTRL          /* swctl */
      {
         HWND     hwnd;
         HWND     hwndIcon;
         HPROGRAM hprog;
         PID      idProcess;
         ULONG    idSession;
         ULONG    uchVisibility;
         ULONG    fbJump;
         CHAR     szSwtitle[MAXNAMEL+4];
         ULONG    bProgType;
      } SWCNTRL;
      
      typedef SWCNTRL *PSWCNTRL;
      
      /*** visibility flag for SWCNTRL structure ***************************/
      #define SWL_VISIBLE    0x04
      #define SWL_INVISIBLE  0x01
      #define SWL_GRAYED     0x02
      
      /*** jump flag for SWCNTRL structure *********************************/
      #define SWL_JUMPABLE    0x02
      #define SWL_NOTJUMPABLE 0x01
      
      
      /*** Switching Program functions *************************************/
      HSWITCH APIENTRY WinAddSwitchEntry(PSWCNTRL);
      ULONG   APIENTRY WinRemoveSwitchEntry(HSWITCH);
      
   #endif  /* not INCL_NOCOMMON */
   
   #ifdef INCL_WINSWITCHLIST
      
      typedef struct _SWENTRY          /* swent */
      {
         HSWITCH hswitch;
         SWCNTRL swctl;
      } SWENTRY;
      typedef SWENTRY *PSWENTRY;
      
      typedef struct _SWBLOCK          /* swblk */
      {
         ULONG    cswentry;
         SWENTRY aswentry[1];
      } SWBLOCK;
      typedef SWBLOCK *PSWBLOCK;
      
      
      /*** 32-bit versions of these APIs have 32-bit parameters *********/
      ULONG   APIENTRY WinChangeSwitchEntry(HSWITCH hswitchSwitch,
                                            PSWCNTRL pswctlSwitchData);
      
      HSWITCH  APIENTRY WinCreateSwitchEntry(HAB hab,
                                             PSWCNTRL pswctlSwitchData);
      
#ifdef __cplusplus
      ULONG   APIENTRY WinQuerySessionTitle(HAB hab,
                                            ULONG usSession,
                                            PCSZ  pszTitle,
                                            ULONG usTitlelen);
#else
      ULONG   APIENTRY WinQuerySessionTitle(HAB hab,
                                            ULONG usSession,
                                            PSZ pszTitle,
                                            ULONG usTitlelen);
#endif
      
      ULONG   APIENTRY WinQuerySwitchEntry(HSWITCH hswitchSwitch,
                                           PSWCNTRL pswctlSwitchData);
      
      HSWITCH  APIENTRY WinQuerySwitchHandle(HWND hwnd,
                                             PID pidProcess);
      ULONG   APIENTRY WinQuerySwitchList(HAB hab,
                                          PSWBLOCK pswblkSwitchEntries,
                                          ULONG usDataLength);
      
      ULONG   APIENTRY WinQueryTaskSizePos(HAB hab,
                                           ULONG usScreenGroup,
                                           PSWP pswpPositionData);
      
#ifdef __cplusplus
      ULONG   APIENTRY WinQueryTaskTitle(ULONG usSession,
                                         PCSZ  pszTitle,
                                         ULONG usTitlelen);
#else
      ULONG   APIENTRY WinQueryTaskTitle(ULONG usSession,
                                         PSZ pszTitle,
                                         ULONG usTitlelen);
#endif
      
      ULONG   APIENTRY WinSwitchToProgram(HSWITCH hswitchSwHandle);
      
      
   #endif /* end of INCL_WINSWITCHLIST */
   
   #ifdef INCL_WINSHELLDATA
      
      /*** OS2.INI Access functions ****************************************/
      
#ifdef __cplusplus
      LONG   APIENTRY PrfQueryProfileInt(HINI hini,
                                         PCSZ  pszApp,
                                         PCSZ  pszKey,
                                         LONG  sDefault);
#else
      LONG   APIENTRY PrfQueryProfileInt(HINI hini,
                                         PSZ pszApp,
                                         PSZ pszKey,
                                         LONG  sDefault);
#endif
      
#ifdef __cplusplus
      ULONG  APIENTRY PrfQueryProfileString(HINI hini,
                                            PCSZ  pszApp,
                                            PCSZ  pszKey,
                                            PCSZ  pszDefault,
                                            PVOID pBuffer,
                                            ULONG cchBufferMax);
#else
      ULONG  APIENTRY PrfQueryProfileString(HINI hini,
                                            PSZ pszApp,
                                            PSZ pszKey,
                                            PSZ pszDefault,
                                            PVOID pBuffer,
                                            ULONG cchBufferMax);
#endif
      
#ifdef __cplusplus
      BOOL   APIENTRY PrfWriteProfileString(HINI hini,
                                            PCSZ  pszApp,
                                            PCSZ  pszKey,
                                            PCSZ  pszData);
#else
      BOOL   APIENTRY PrfWriteProfileString(HINI hini,
                                            PSZ pszApp,
                                            PSZ pszKey,
                                            PSZ pszData);
#endif
      
#ifdef __cplusplus
      BOOL   APIENTRY PrfQueryProfileSize(HINI hini,
                                          PCSZ  pszApp,
                                          PCSZ  pszKey,
                                          PULONG pulReqLen);
#else
      BOOL   APIENTRY PrfQueryProfileSize(HINI hini,
                                          PSZ pszApp,
                                          PSZ pszKey,
                                          PULONG pulReqLen);
#endif
      
#ifdef __cplusplus
      BOOL   APIENTRY PrfQueryProfileData(HINI hini,
                                          PCSZ  pszApp,
                                          PCSZ  pszKey,
                                          PVOID pBuffer,
                                          PULONG pulBuffLen);
#else
      BOOL   APIENTRY PrfQueryProfileData(HINI hini,
                                          PSZ pszApp,
                                          PSZ pszKey,
                                          PVOID pBuffer,
                                          PULONG pulBuffLen);
#endif
      
#ifdef __cplusplus
      BOOL   APIENTRY PrfWriteProfileData(HINI hini,
                                          PCSZ  pszApp,
                                          PCSZ  pszKey,
                                          PVOID pData,
                                          ULONG cchDataLen);
#else
      BOOL   APIENTRY PrfWriteProfileData(HINI hini,
                                          PSZ pszApp,
                                          PSZ pszKey,
                                          PVOID pData,
                                          ULONG cchDataLen);
#endif
      
#ifdef __cplusplus
      HINI   APIENTRY PrfOpenProfile(HAB hab,
                                     PCSZ  pszFileName);
#else
      HINI   APIENTRY PrfOpenProfile(HAB hab,
                                     PSZ pszFileName);
#endif
      
      BOOL   APIENTRY PrfCloseProfile(HINI hini);
      
      BOOL   APIENTRY PrfReset(HAB hab,
                               PPRFPROFILE pPrfProfile);
      
      BOOL   APIENTRY PrfQueryProfile(HAB hab,
                                      PPRFPROFILE pPrfProfile);
      
      /*** public message, broadcast on WinReset ***************************/
      #define PL_ALTERED 0x008E  /* WM_SHELLFIRST + 0E */
      
   #endif /* INCL_WINSHELLDATA */
   
   #ifdef INCL_SHLERRORS
      #include <pmerr.h>
   #endif /* INCL_SHLERRORS */
   
#endif /* of #ifndef SESMGR */


/* NOINC */
#ifdef __cplusplus
        }
#endif
#if __IBMC__ || __IBMCPP__
   #pragma info( none )
   #ifndef __CHKHDR__
      #pragma info( restore )
   #endif
   #pragma info( restore )
#endif
/* INC */

/**************************** end of file **********************************/
