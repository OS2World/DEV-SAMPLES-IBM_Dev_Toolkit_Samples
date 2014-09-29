/****************************** Module Header ******************************\
*
* Module Name: PMERR.H
*
* This file contains all the public PM error codes.
*
* This file has been constructed to bring together all the error codes
* into one place.
*
* Copyright (c) International Business Machines Corporation 1981, 1988-1992
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



#define PMERR_INCLUDED

/****************************************************************************
*** Window Manager error codes
****************************************************************************/

#ifdef INCL_WINERRORS
   #ifndef INCL_WINERRORS_INCL
      /* XLATOFF */
      #define INCL_WINERRORS_INCL
      /* XLATON */
      
      #define PMERR_INVALID_HWND                  0x1001
      #define PMERR_INVALID_HMQ                   0x1002
      #define PMERR_PARAMETER_OUT_OF_RANGE        0x1003
      #define PMERR_WINDOW_LOCK_UNDERFLOW         0x1004
      #define PMERR_WINDOW_LOCK_OVERFLOW          0x1005
      #define PMERR_BAD_WINDOW_LOCK_COUNT         0x1006
      #define PMERR_WINDOW_NOT_LOCKED             0x1007
      #define PMERR_INVALID_SELECTOR              0x1008
      #define PMERR_CALL_FROM_WRONG_THREAD        0x1009
      #define PMERR_RESOURCE_NOT_FOUND            0x100A
      #define PMERR_INVALID_STRING_PARM           0x100B
      #define PMERR_INVALID_HHEAP                 0x100C
      #define PMERR_INVALID_HEAP_POINTER          0x100D
      #define PMERR_INVALID_HEAP_SIZE_PARM        0x100E
      #define PMERR_INVALID_HEAP_SIZE             0x100F
      #define PMERR_INVALID_HEAP_SIZE_WORD        0x1010
      #define PMERR_HEAP_OUT_OF_MEMORY            0x1011
      #define PMERR_HEAP_MAX_SIZE_REACHED         0x1012
      #define PMERR_INVALID_HATOMTBL              0x1013
      #define PMERR_INVALID_ATOM                  0x1014
      #define PMERR_INVALID_ATOM_NAME             0x1015
      #define PMERR_INVALID_INTEGER_ATOM          0x1016
      #define PMERR_ATOM_NAME_NOT_FOUND           0x1017
      #define PMERR_QUEUE_TOO_LARGE               0x1018
      #define PMERR_INVALID_FLAG                  0x1019
      #define PMERR_INVALID_HACCEL                0x101A
      #define PMERR_INVALID_HPTR                  0x101B
      #define PMERR_INVALID_HENUM                 0x101C
      #define PMERR_INVALID_SRC_CODEPAGE          0x101D
      #define PMERR_INVALID_DST_CODEPAGE          0x101E
      
      /* These are not real error codes, but just used to access special  */
      /* error message strings used by WinGetErrorInfo to format an error */
      /* message.                                                         */
      
      #define PMERR_UNKNOWN_COMPONENT_ID          0x101f
      #define PMERR_UNKNOWN_ERROR_CODE            0x1020
      #define PMERR_SEVERITY_LEVELS               0x1021
      
      /* 0x1022 - 0x1033, 0x1035, 0x104B - 0x104C used elsewhere          */
      #define PMERR_INVALID_RESOURCE_FORMAT       0x1034
      #define WINDBG_WINDOW_UNLOCK_WAIT           0x1035
      #define PMERR_NO_MSG_QUEUE                  0x1036
      #define PMERR_CANNOT_SET_FOCUS              0x1037
      #define PMERR_QUEUE_FULL                    0x1038
      
      #define PMERR_LIBRARY_LOAD_FAILED           0x1039
      #define PMERR_PROCEDURE_LOAD_FAILED         0x103A
      #define PMERR_LIBRARY_DELETE_FAILED         0x103B
      #define PMERR_PROCEDURE_DELETE_FAILED       0x103C
      #define PMERR_ARRAY_TOO_LARGE               0x103D
      #define PMERR_ARRAY_TOO_SMALL               0x103E
      #define PMERR_DATATYPE_ENTRY_BAD_INDEX      0x103F
      #define PMERR_DATATYPE_ENTRY_CTL_BAD        0x1040
      #define PMERR_DATATYPE_ENTRY_CTL_MISS       0x1041
      #define PMERR_DATATYPE_ENTRY_INVALID        0x1042
      #define PMERR_DATATYPE_ENTRY_NOT_NUM        0x1043
      #define PMERR_DATATYPE_ENTRY_NOT_OFF        0x1044
      #define PMERR_DATATYPE_INVALID              0x1045
      #define PMERR_DATATYPE_NOT_UNIQUE           0x1046
      #define PMERR_DATATYPE_TOO_LONG             0x1047
      #define PMERR_DATATYPE_TOO_SMALL            0x1048
      #define PMERR_DIRECTION_INVALID             0x1049
      #define PMERR_INVALID_HAB                   0x104A
      #define PMERR_INVALID_HSTRUCT               0x104D
      #define PMERR_LENGTH_TOO_SMALL              0x104E
      #define PMERR_MSGID_TOO_SMALL               0x104F
      #define PMERR_NO_HANDLE_ALLOC               0x1050
      #define PMERR_NOT_IN_A_PM_SESSION           0x1051
      #define PMERR_MSG_QUEUE_ALREADY_EXISTS      0x1052
      #define PMERR_SEND_MSG_TIMEOUT              0x1053
      #define PMERR_SEND_MSG_FAILED               0x1054
      #define PMERR_OLD_RESOURCE                  0x1055
      
      #define PMERR_BIDI_FIRST                    0x10F0
      #define PMERR_BIDI_LAST                     0x10FF
      
      #ifdef SOM2VERSION                                                             /* EEO:85870 */
         #define PMERR_WPDSERVER_IS_ACTIVE        0x1056
         #define PMERR_WPDSERVER_NOT_STARTED      0x1057
         #define PMERR_SOMDD_IS_ACTIVE            0x1058
         #define PMERR_SOMDD_NOT_STARTED          0x1059
      #endif                                                                         /* EEO:85870 */
   #endif /* error codes already included */
#endif /* include error codes */

/***********************************************************************
*
*            Window Manager error codes
*
* 2.) PMSHL error codes
*
***********************************************************************/

#ifdef INCL_SHLERRORS
   
   #ifndef INCL_SHLERRORS_INCL
      /* XLATOFF */
      #define INCL_SHLERRORS_INCL
      /* XLATON */
      
      #define PMERR_INVALID_PIB                0x1101
      #define PMERR_INSUFF_SPACE_TO_ADD        0x1102
      #define PMERR_INVALID_GROUP_HANDLE       0x1103
      #define PMERR_DUPLICATE_TITLE            0x1104
      #define PMERR_INVALID_TITLE              0x1105
      #define PMERR_HANDLE_NOT_IN_GROUP        0x1107
      #define PMERR_INVALID_TARGET_HANDLE      0x1106
      #define PMERR_INVALID_PATH_STATEMENT     0x1108
      #define PMERR_NO_PROGRAM_FOUND           0x1109
      #define PMERR_INVALID_BUFFER_SIZE        0x110A
      #define PMERR_BUFFER_TOO_SMALL           0x110B
      #define PMERR_PL_INITIALISATION_FAIL     0x110C
      #define PMERR_CANT_DESTROY_SYS_GROUP     0x110D
      #define PMERR_INVALID_TYPE_CHANGE        0x110E
      #define PMERR_INVALID_PROGRAM_HANDLE     0x110F
      
      #define PMERR_NOT_CURRENT_PL_VERSION     0x1110
      #define PMERR_INVALID_CIRCULAR_REF       0x1111
      #define PMERR_MEMORY_ALLOCATION_ERR      0x1112
      #define PMERR_MEMORY_DEALLOCATION_ERR    0x1113
      #define PMERR_TASK_HEADER_TOO_BIG        0x1114
      
      #define PMERR_INVALID_INI_FILE_HANDLE    0x1115
      #define PMERR_MEMORY_SHARE               0x1116
      #define PMERR_OPEN_QUEUE                 0x1117
      #define PMERR_CREATE_QUEUE               0x1118
      #define PMERR_WRITE_QUEUE                0x1119
      #define PMERR_READ_QUEUE                 0x111A
      #define PMERR_CALL_NOT_EXECUTED          0x111B
      #define PMERR_UNKNOWN_APIPKT             0x111C
      #define PMERR_INITHREAD_EXISTS           0x111D
      #define PMERR_CREATE_THREAD              0x111E
      #define PMERR_NO_HK_PROFILE_INSTALLED    0x111F
      #define PMERR_INVALID_DIRECTORY          0x1120
      #define PMERR_WILDCARD_IN_FILENAME       0x1121
      #define PMERR_FILENAME_BUFFER_FULL       0x1122
      #define PMERR_FILENAME_TOO_LONG          0x1123
      #define PMERR_INI_FILE_IS_SYS_OR_USER    0x1124
      #define PMERR_BROADCAST_PLMSG            0x1125
      #define PMERR_190_INIT_DONE              0x1126
      #define PMERR_HMOD_FOR_PMSHAPI           0x1127
      #define PMERR_SET_HK_PROFILE             0x1128
      #define PMERR_API_NOT_ALLOWED            0x1129
      #define PMERR_INI_STILL_OPEN             0x112A
      
      #define PMERR_PROGDETAILS_NOT_IN_INI     0x112B
      #define PMERR_PIBSTRUCT_NOT_IN_INI       0x112C
      #define PMERR_INVALID_DISKPROGDETAILS    0x112D
      #define PMERR_PROGDETAILS_READ_FAILURE   0x112E
      #define PMERR_PROGDETAILS_WRITE_FAILURE  0x112F
      #define PMERR_PROGDETAILS_QSIZE_FAILURE  0x1130
      #define PMERR_INVALID_PROGDETAILS        0x1131
      #define PMERR_SHEPROFILEHOOK_NOT_FOUND   0x1132
      #define PMERR_190PLCONVERTED             0x1133
      #define PMERR_FAILED_TO_CONVERT_INI_PL   0x1134
      #define PMERR_PMSHAPI_NOT_INITIALISED    0x1135
      #define PMERR_INVALID_SHELL_API_HOOK_ID  0x1136
      
      #define PMERR_DOS_ERROR                  0x1200
      
      #define PMERR_NO_SPACE                   0x1201
      #define PMERR_INVALID_SWITCH_HANDLE      0x1202
      #define PMERR_NO_HANDLE                  0x1203
      #define PMERR_INVALID_PROCESS_ID         0x1204
      #define PMERR_NOT_SHELL                  0x1205
      #define PMERR_INVALID_WINDOW             0x1206
      #define PMERR_INVALID_POST_MSG           0x1207
      #define PMERR_INVALID_PARAMETERS         0x1208
      #define PMERR_INVALID_PROGRAM_TYPE       0x1209
      #define PMERR_NOT_EXTENDED_FOCUS         0x120A
      #define PMERR_INVALID_SESSION_ID         0x120B
      #define PMERR_SMG_INVALID_ICON_FILE      0x120C
      #define PMERR_SMG_ICON_NOT_CREATED       0x120D
      #define PMERR_SHL_DEBUG                  0x120E
      
      #define PMERR_OPENING_INI_FILE           0x1301
      #define PMERR_INI_FILE_CORRUPT           0x1302
      #define PMERR_INVALID_PARM               0x1303
      #define PMERR_NOT_IN_IDX                 0x1304
      #define PMERR_NO_ENTRIES_IN_GROUP        0x1305
      
      #define PMERR_INI_WRITE_FAIL             0x1306
      #define PMERR_IDX_FULL                   0x1307
      #define PMERR_INI_PROTECTED              0x1308
      #define PMERR_MEMORY_ALLOC               0x1309
      #define PMERR_INI_INIT_ALREADY_DONE      0x130A
      #define PMERR_INVALID_INTEGER            0x130B
      #define PMERR_INVALID_ASCIIZ             0x130C
      #define PMERR_CAN_NOT_CALL_SPOOLER       0x130D
      #define PMERR_VALIDATION_REJECTED        PMERR_CAN_NOT_CALL_SPOOLER
      
      #define PMERR_WARNING_WINDOW_NOT_KILLED  0x1401
      #define PMERR_ERROR_INVALID_WINDOW       0x1402
      #define PMERR_ALREADY_INITIALIZED        0x1403
      #define PMERR_MSG_PROG_NO_MOU            0x1405
      #define PMERR_MSG_PROG_NON_RECOV         0x1406
      #define PMERR_WINCONV_INVALID_PATH       0x1407
      #define PMERR_PI_NOT_INITIALISED         0x1408
      #define PMERR_PL_NOT_INITIALISED         0x1409
      #define PMERR_NO_TASK_MANAGER            0x140A
      #define PMERR_SAVE_NOT_IN_PROGRESS       0x140B
      #define PMERR_NO_STACK_SPACE             0x140C
      #define PMERR_INVALID_COLR_FIELD         0x140d
      #define PMERR_INVALID_COLR_VALUE         0x140e
      #define PMERR_COLR_WRITE                 0x140f
      
      #define PMERR_TARGET_FILE_EXISTS         0x1501
      #define PMERR_SOURCE_SAME_AS_TARGET      0x1502
      #define PMERR_SOURCE_FILE_NOT_FOUND      0x1503
      #define PMERR_INVALID_NEW_PATH           0x1504
      #define PMERR_TARGET_FILE_NOT_FOUND      0x1505
      #define PMERR_INVALID_DRIVE_NUMBER       0x1506
      #define PMERR_NAME_TOO_LONG              0x1507
      #define PMERR_NOT_ENOUGH_ROOM_ON_DISK    0x1508
      #define PMERR_NOT_ENOUGH_MEM             0x1509
      
      #define PMERR_LOG_DRV_DOES_NOT_EXIST     0x150B
      #define PMERR_INVALID_DRIVE              0x150C
      #define PMERR_ACCESS_DENIED              0x150D
      #define PMERR_NO_FIRST_SLASH             0x150E
      #define PMERR_READ_ONLY_FILE             0x150F
      #define PMERR_GROUP_PROTECTED            0x151F
      #define PMERR_INVALID_PROGRAM_CATEGORY   0x152F
      #define PMERR_INVALID_APPL               0x1530
      #define PMERR_CANNOT_START               0x1531
      #define PMERR_STARTED_IN_BACKGROUND      0x1532
      #define PMERR_INVALID_HAPP               0x1533
      #define PMERR_CANNOT_STOP                0x1534
      
      /**********************************************************************
      * Errors generated by Language Bindings layer.
      *
      * (Range 0x1600 thru 0x16FF reserved for Bindings)
      **********************************************************************/
      
      /*** SEVERITY_UNRECOVERABLE ***/
      #define PMERR_INTERNAL_ERROR_1           0x1601
      #define PMERR_INTERNAL_ERROR_2           0x1602
      #define PMERR_INTERNAL_ERROR_3           0x1603
      #define PMERR_INTERNAL_ERROR_4           0x1604
      #define PMERR_INTERNAL_ERROR_5           0x1605
      #define PMERR_INTERNAL_ERROR_6           0x1606
      #define PMERR_INTERNAL_ERROR_7           0x1607
      #define PMERR_INTERNAL_ERROR_8           0x1608
      #define PMERR_INTERNAL_ERROR_9           0x1609
      #define PMERR_INTERNAL_ERROR_10          0x160A
      #define PMERR_INTERNAL_ERROR_11          0x160B
      #define PMERR_INTERNAL_ERROR_12          0x160C
      #define PMERR_INTERNAL_ERROR_13          0x160D
      #define PMERR_INTERNAL_ERROR_14          0x160E
      #define PMERR_INTERNAL_ERROR_15          0x160F
      #define PMERR_INTERNAL_ERROR_16          0x1610
      #define PMERR_INTERNAL_ERROR_17          0x1611
      #define PMERR_INTERNAL_ERROR_18          0x1612
      #define PMERR_INTERNAL_ERROR_19          0x1613
      #define PMERR_INTERNAL_ERROR_20          0x1614
      #define PMERR_INTERNAL_ERROR_21          0x1615
      #define PMERR_INTERNAL_ERROR_22          0x1616
      #define PMERR_INTERNAL_ERROR_23          0x1617
      #define PMERR_INTERNAL_ERROR_24          0x1618
      #define PMERR_INTERNAL_ERROR_25          0x1619
      #define PMERR_INTERNAL_ERROR_26          0x161A
      #define PMERR_INTERNAL_ERROR_27          0x161B
      #define PMERR_INTERNAL_ERROR_28          0x161C
      #define PMERR_INTERNAL_ERROR_29          0x161D
      
      /*** SEVERITY_WARNING ***/
      #define PMERR_INVALID_FREE_MESSAGE_ID    0x1630
      
      /*** SEVERITY_ERROR ***/
      
      #define PMERR_FUNCTION_NOT_SUPPORTED     0x1641
      #define PMERR_INVALID_ARRAY_COUNT        0x1642
      #define PMERR_INVALID_LENGTH             0x1643
      #define PMERR_INVALID_BUNDLE_TYPE        0x1644
      #define PMERR_INVALID_PARAMETER          0x1645
      #define PMERR_INVALID_NUMBER_OF_PARMS    0x1646
      #define PMERR_GREATER_THAN_64K           0x1647
      #define PMERR_INVALID_PARAMETER_TYPE     0x1648
      #define PMERR_NEGATIVE_STRCOND_DIM       0x1649
      #define PMERR_INVALID_NUMBER_OF_TYPES    0x164A
      #define PMERR_INCORRECT_HSTRUCT          0x164B
      #define PMERR_INVALID_ARRAY_SIZE         0x164C
      #define PMERR_INVALID_CONTROL_DATATYPE   0x164D
      #define PMERR_INCOMPLETE_CONTROL_SEQU    0x164E
      #define PMERR_INVALID_DATATYPE           0x164F
      #define PMERR_INCORRECT_DATATYPE         0x1650
      #define PMERR_NOT_SELF_DESCRIBING_DTYP   0x1651
      #define PMERR_INVALID_CTRL_SEQ_INDEX     0x1652
      #define PMERR_INVALID_TYPE_FOR_LENGTH    0x1653
      #define PMERR_INVALID_TYPE_FOR_OFFSET    0x1654
      #define PMERR_INVALID_TYPE_FOR_MPARAM    0x1655
      #define PMERR_INVALID_MESSAGE_ID         0x1656
      #define PMERR_C_LENGTH_TOO_SMALL         0x1657
      #define PMERR_APPL_STRUCTURE_TOO_SMALL   0x1658
      #define PMERR_INVALID_ERRORINFO_HANDLE   0x1659
      #define PMERR_INVALID_CHARACTER_INDEX    0x165A
      
      /**********************************************************************
      * End of Errors generated by Language Bindings layer.
      *
      * (Range 0x1600 thru 0x16FF reserved for Bindings)
      **********************************************************************/
   #endif /* error codes already included */
#endif /* include error codes */

/**********************************************************************\
*
*            Workplace Shell error codes
*
* PMWP error codes
*
\**********************************************************************/

#ifdef INCL_WPERRORS
   
   #ifndef INCL_WPERRORS_INCL
      /* XLATOFF */
      #define INCL_WPERRORS_INCL
      /* XLATON */
      
      #define WPERR_PROTECTED_CLASS            0x1700
      #define WPERR_INVALID_CLASS              0x1701
      #define WPERR_INVALID_SUPERCLASS         0x1702
      #define WPERR_NO_MEMORY                  0x1703
      #define WPERR_SEMAPHORE_ERROR            0x1704
      #define WPERR_BUFFER_TOO_SMALL           0x1705
      #define WPERR_CLSLOADMOD_FAILED          0x1706
      #define WPERR_CLSPROCADDR_FAILED         0x1707
      #define WPERR_OBJWORD_LOCATION           0x1708
      #define WPERR_INVALID_OBJECT             0x1709
      #define WPERR_MEMORY_CLEANUP             0x170A
      #define WPERR_INVALID_MODULE             0x170B
      #define WPERR_INVALID_OLDCLASS           0x170C
      #define WPERR_INVALID_NEWCLASS           0x170D
      #define WPERR_NOT_IMMEDIATE_CHILD        0x170E
      #define WPERR_NOT_WORKPLACE_CLASS        0x170F
      #define WPERR_CANT_REPLACE_METACLS       0x1710
      #define WPERR_INI_FILE_WRITE             0x1711
      #define WPERR_INVALID_FOLDER             0x1712
      #define WPERR_BUFFER_OVERFLOW            0x1713
      #define WPERR_OBJECT_NOT_FOUND           0x1714
      #define WPERR_INVALID_HFIND              0x1715
      #define WPERR_INVALID_COUNT              0x1716
      #define WPERR_INVALID_BUFFER             0x1717
      #define WPERR_ALREADY_EXISTS             0x1718
      #define WPERR_INVALID_FLAGS              0x1719
      #define WPERR_INVALID_OBJECTID           0x1720
      #define WPERR_INVALID_TARGET_OBJECT      0x1721
      #define WPERR_APM_NOT_INSTALLED          0x1722                           //ihs183342
      #define WPERR_APM_NOT_ENABLED            0x1723                           //ihs183342
      #define WPERR_APM_NOT_ENGAGED            0x1724                           //ihs183342
      #define WPERR_APM_FUNCTION_NOT_SUPPORTED 0x1725                           //ihs183342
      #define WPERR_APM_INVALID_PARAMETER      0x1726                           //ihs183342
      #define WPERR_APM_USER_CANCEL            0x1727                           //ihs183342
      
   #endif /* error codes already included */
#endif /* include error codes */


/********************************************************************
*** GPI error codes
********************************************************************/
#ifdef INCL_GPIERRORS
   #ifndef INCL_GPIERRORS_INCL
      /* XLATOFF */
      #define INCL_GPIERRORS_INCL
      /* XLATON */
      
      /* AAB error codes for the GPI */
      #define PMERR_OK                           0x0000
      #define PMERR_ALREADY_IN_AREA              0x2001
      #define PMERR_ALREADY_IN_ELEMENT           0x2002
      #define PMERR_ALREADY_IN_PATH              0x2003
      #define PMERR_ALREADY_IN_SEG               0x2004
      #define PMERR_AREA_INCOMPLETE              0x2005
      #define PMERR_BASE_ERROR                   0x2006
      #define PMERR_BITBLT_LENGTH_EXCEEDED       0x2007
      #define PMERR_BITMAP_IN_USE                0x2008
      #define PMERR_BITMAP_IS_SELECTED           0x2009
      #define PMERR_BITMAP_NOT_FOUND             0x200A
      #define PMERR_BITMAP_NOT_SELECTED          0x200B
      #define PMERR_BOUNDS_OVERFLOW              0x200C
      #define PMERR_CALLED_SEG_IS_CHAINED        0x200D
      #define PMERR_CALLED_SEG_IS_CURRENT        0x200E
      #define PMERR_CALLED_SEG_NOT_FOUND         0x200F
      #define PMERR_CANNOT_DELETE_ALL_DATA       0x2010
      #define PMERR_CANNOT_REPLACE_ELEMENT_0     0x2011
      #define PMERR_COL_TABLE_NOT_REALIZABLE     0x2012
      #define PMERR_COL_TABLE_NOT_REALIZED       0x2013
      #define PMERR_COORDINATE_OVERFLOW          0x2014
      #define PMERR_CORR_FORMAT_MISMATCH         0x2015
      #define PMERR_DATA_TOO_LONG                0x2016
      #define PMERR_DC_IS_ASSOCIATED             0x2017
      #define PMERR_DESC_STRING_TRUNCATED        0x2018
      #define PMERR_DEVICE_DRIVER_ERROR_1        0x2019
      #define PMERR_DEVICE_DRIVER_ERROR_2        0x201A
      #define PMERR_DEVICE_DRIVER_ERROR_3        0x201B
      #define PMERR_DEVICE_DRIVER_ERROR_4        0x201C
      #define PMERR_DEVICE_DRIVER_ERROR_5        0x201D
      #define PMERR_DEVICE_DRIVER_ERROR_6        0x201E
      #define PMERR_DEVICE_DRIVER_ERROR_7        0x201F
      #define PMERR_DEVICE_DRIVER_ERROR_8        0x2020
      #define PMERR_DEVICE_DRIVER_ERROR_9        0x2021
      #define PMERR_DEVICE_DRIVER_ERROR_10       0x2022
      #define PMERR_DEV_FUNC_NOT_INSTALLED       0x2023
      #define PMERR_DOSOPEN_FAILURE              0x2024
      #define PMERR_DOSREAD_FAILURE              0x2025
      #define PMERR_DRIVER_NOT_FOUND             0x2026
      #define PMERR_DUP_SEG                      0x2027
      #define PMERR_DYNAMIC_SEG_SEQ_ERROR        0x2028
      #define PMERR_DYNAMIC_SEG_ZERO_INV         0x2029
      #define PMERR_ELEMENT_INCOMPLETE           0x202A
      #define PMERR_ESC_CODE_NOT_SUPPORTED       0x202B
      #define PMERR_EXCEEDS_MAX_SEG_LENGTH       0x202C
      #define PMERR_FONT_AND_MODE_MISMATCH       0x202D
      #define PMERR_FONT_FILE_NOT_LOADED         0x202E
      #define PMERR_FONT_NOT_LOADED              0x202F
      #define PMERR_FONT_TOO_BIG                 0x2030
      #define PMERR_HARDWARE_INIT_FAILURE        0x2031
      #define PMERR_HBITMAP_BUSY                 0x2032
      #define PMERR_HDC_BUSY                     0x2033
      #define PMERR_HRGN_BUSY                    0x2034
      #define PMERR_HUGE_FONTS_NOT_SUPPORTED     0x2035
      #define PMERR_ID_HAS_NO_BITMAP             0x2036
      #define PMERR_IMAGE_INCOMPLETE             0x2037
      #define PMERR_INCOMPAT_COLOR_FORMAT        0x2038
      #define PMERR_INCOMPAT_COLOR_OPTIONS       0x2039
      #define PMERR_INCOMPATIBLE_BITMAP          0x203A
      #define PMERR_INCOMPATIBLE_METAFILE        0x203B
      #define PMERR_INCORRECT_DC_TYPE            0x203C
      #define PMERR_INSUFFICIENT_DISK_SPACE      0x203D
      #define PMERR_INSUFFICIENT_MEMORY          0x203E
      #define PMERR_INV_ANGLE_PARM               0x203F
      #define PMERR_INV_ARC_CONTROL              0x2040
      #define PMERR_INV_AREA_CONTROL             0x2041
      #define PMERR_INV_ARC_POINTS               0x2042
      #define PMERR_INV_ATTR_MODE                0x2043
      #define PMERR_INV_BACKGROUND_COL_ATTR      0x2044
      #define PMERR_INV_BACKGROUND_MIX_ATTR      0x2045
      #define PMERR_INV_BITBLT_MIX               0x2046
      #define PMERR_INV_BITBLT_STYLE             0x2047
      #define PMERR_INV_BITMAP_DIMENSION         0x2048
      #define PMERR_INV_BOX_CONTROL              0x2049
      #define PMERR_INV_BOX_ROUNDING_PARM        0x204A
      #define PMERR_INV_CHAR_ANGLE_ATTR          0x204B
      #define PMERR_INV_CHAR_DIRECTION_ATTR      0x204C
      #define PMERR_INV_CHAR_MODE_ATTR           0x204D
      #define PMERR_INV_CHAR_POS_OPTIONS         0x204E
      #define PMERR_INV_CHAR_SET_ATTR            0x204F
      #define PMERR_INV_CHAR_SHEAR_ATTR          0x2050
      #define PMERR_INV_CLIP_PATH_OPTIONS        0x2051
      #define PMERR_INV_CODEPAGE                 0x2052
      #define PMERR_INV_COLOR_ATTR               0x2053
      #define PMERR_INV_COLOR_DATA               0x2054
      #define PMERR_INV_COLOR_FORMAT             0x2055
      #define PMERR_INV_COLOR_INDEX              0x2056
      #define PMERR_INV_COLOR_OPTIONS            0x2057
      #define PMERR_INV_COLOR_START_INDEX        0x2058
      #define PMERR_INV_COORD_OFFSET             0x2059
      #define PMERR_INV_COORD_SPACE              0x205A
      #define PMERR_INV_COORDINATE               0x205B
      #define PMERR_INV_CORRELATE_DEPTH          0x205C
      #define PMERR_INV_CORRELATE_TYPE           0x205D
      #define PMERR_INV_CURSOR_BITMAP            0x205E
      #define PMERR_INV_DC_DATA                  0x205F
      #define PMERR_INV_DC_TYPE                  0x2060
      #define PMERR_INV_DEVICE_NAME              0x2061
      #define PMERR_INV_DEV_MODES_OPTIONS        0x2062
      #define PMERR_INV_DRAW_CONTROL             0x2063
      #define PMERR_INV_DRAW_VALUE               0x2064
      #define PMERR_INV_DRAWING_MODE             0x2065
      #define PMERR_INV_DRIVER_DATA              0x2066
      #define PMERR_INV_DRIVER_NAME              0x2067
      #define PMERR_INV_DRAW_BORDER_OPTION       0x2068
      #define PMERR_INV_EDIT_MODE                0x2069
      #define PMERR_INV_ELEMENT_OFFSET           0x206A
      #define PMERR_INV_ELEMENT_POINTER          0x206B
      #define PMERR_INV_END_PATH_OPTIONS         0x206C
      #define PMERR_INV_ESC_CODE                 0x206D
      #define PMERR_INV_ESCAPE_DATA              0x206E
      #define PMERR_INV_EXTENDED_LCID            0x206F
      #define PMERR_INV_FILL_PATH_OPTIONS        0x2070
      #define PMERR_INV_FIRST_CHAR               0x2071
      #define PMERR_INV_FONT_ATTRS               0x2072
      #define PMERR_INV_FONT_FILE_DATA           0x2073
      #define PMERR_INV_FOR_THIS_DC_TYPE         0x2074
      #define PMERR_INV_FORMAT_CONTROL           0x2075
      #define PMERR_INV_FORMS_CODE               0x2076
      #define PMERR_INV_FONTDEF                  0x2077
      #define PMERR_INV_GEOM_LINE_WIDTH_ATTR     0x2078
      #define PMERR_INV_GETDATA_CONTROL          0x2079
      #define PMERR_INV_GRAPHICS_FIELD           0x207A
      #define PMERR_INV_HBITMAP                  0x207B
      #define PMERR_INV_HDC                      0x207C
      #define PMERR_INV_HJOURNAL                 0x207D
      #define PMERR_INV_HMF                      0x207E
      #define PMERR_INV_HPS                      0x207F
      #define PMERR_INV_HRGN                     0x2080
      #define PMERR_INV_ID                       0x2081
      #define PMERR_INV_IMAGE_DATA_LENGTH        0x2082
      #define PMERR_INV_IMAGE_DIMENSION          0x2083
      #define PMERR_INV_IMAGE_FORMAT             0x2084
      #define PMERR_INV_IN_AREA                  0x2085
      #define PMERR_INV_IN_CALLED_SEG            0x2086
      #define PMERR_INV_IN_CURRENT_EDIT_MODE     0x2087
      #define PMERR_INV_IN_DRAW_MODE             0x2088
      #define PMERR_INV_IN_ELEMENT               0x2089
      #define PMERR_INV_IN_IMAGE                 0x208A
      #define PMERR_INV_IN_PATH                  0x208B
      #define PMERR_INV_IN_RETAIN_MODE           0x208C
      #define PMERR_INV_IN_SEG                   0x208D
      #define PMERR_INV_IN_VECTOR_SYMBOL         0x208E
      #define PMERR_INV_INFO_TABLE               0x208F
      #define PMERR_INV_JOURNAL_OPTION           0x2090
      #define PMERR_INV_KERNING_FLAGS            0x2091
      #define PMERR_INV_LENGTH_OR_COUNT          0x2092
      #define PMERR_INV_LINE_END_ATTR            0x2093
      #define PMERR_INV_LINE_JOIN_ATTR           0x2094
      #define PMERR_INV_LINE_TYPE_ATTR           0x2095
      #define PMERR_INV_LINE_WIDTH_ATTR          0x2096
      #define PMERR_INV_LOGICAL_ADDRESS          0x2097
      #define PMERR_INV_MARKER_BOX_ATTR          0x2098
      #define PMERR_INV_MARKER_SET_ATTR          0x2099
      #define PMERR_INV_MARKER_SYMBOL_ATTR       0x209A
      #define PMERR_INV_MATRIX_ELEMENT           0x209B
      #define PMERR_INV_MAX_HITS                 0x209C
      #define PMERR_INV_METAFILE                 0x209D
      #define PMERR_INV_METAFILE_LENGTH          0x209E
      #define PMERR_INV_METAFILE_OFFSET          0x209F
      #define PMERR_INV_MICROPS_DRAW_CONTROL     0x20A0
      #define PMERR_INV_MICROPS_FUNCTION         0x20A1
      #define PMERR_INV_MICROPS_ORDER            0x20A2
      #define PMERR_INV_MIX_ATTR                 0x20A3
      #define PMERR_INV_MODE_FOR_OPEN_DYN        0x20A4
      #define PMERR_INV_MODE_FOR_REOPEN_SEG      0x20A5
      #define PMERR_INV_MODIFY_PATH_MODE         0x20A6
      #define PMERR_INV_MULTIPLIER               0x20A7
      #define PMERR_INV_NESTED_FIGURES           0x20A8
      #define PMERR_INV_OR_INCOMPAT_OPTIONS      0x20A9
      #define PMERR_INV_ORDER_LENGTH             0x20AA
      #define PMERR_INV_ORDERING_PARM            0x20AB
      #define PMERR_INV_OUTSIDE_DRAW_MODE        0x20AC
      #define PMERR_INV_PAGE_VIEWPORT            0x20AD
      #define PMERR_INV_PATH_ID                  0x20AE
      #define PMERR_INV_PATH_MODE                0x20AF
      #define PMERR_INV_PATTERN_ATTR             0x20B0
      #define PMERR_INV_PATTERN_REF_PT_ATTR      0x20B1
      #define PMERR_INV_PATTERN_SET_ATTR         0x20B2
      #define PMERR_INV_PATTERN_SET_FONT         0x20B3
      #define PMERR_INV_PICK_APERTURE_OPTION     0x20B4
      #define PMERR_INV_PICK_APERTURE_POSN       0x20B5
      #define PMERR_INV_PICK_APERTURE_SIZE       0x20B6
      #define PMERR_INV_PICK_NUMBER              0x20B7
      #define PMERR_INV_PLAY_METAFILE_OPTION     0x20B8
      #define PMERR_INV_PRIMITIVE_TYPE           0x20B9
      #define PMERR_INV_PS_SIZE                  0x20BA
      #define PMERR_INV_PUTDATA_FORMAT           0x20BB
      #define PMERR_INV_QUERY_ELEMENT_NO         0x20BC
      #define PMERR_INV_RECT                     0x20BD
      #define PMERR_INV_REGION_CONTROL           0x20BE
      #define PMERR_INV_REGION_MIX_MODE          0x20BF
      #define PMERR_INV_REPLACE_MODE_FUNC        0x20C0
      #define PMERR_INV_RESERVED_FIELD           0x20C1
      #define PMERR_INV_RESET_OPTIONS            0x20C2
      #define PMERR_INV_RGBCOLOR                 0x20C3
      #define PMERR_INV_SCAN_START               0x20C4
      #define PMERR_INV_SEG_ATTR                 0x20C5
      #define PMERR_INV_SEG_ATTR_VALUE           0x20C6
      #define PMERR_INV_SEG_CH_LENGTH            0x20C7
      #define PMERR_INV_SEG_NAME                 0x20C8
      #define PMERR_INV_SEG_OFFSET               0x20C9
      #define PMERR_INV_SETID                    0x20CA
      #define PMERR_INV_SETID_TYPE               0x20CB
      #define PMERR_INV_SET_VIEWPORT_OPTION      0x20CC
      #define PMERR_INV_SHARPNESS_PARM           0x20CD
      #define PMERR_INV_SOURCE_OFFSET            0x20CE
      #define PMERR_INV_STOP_DRAW_VALUE          0x20CF
      #define PMERR_INV_TRANSFORM_TYPE           0x20D0
      #define PMERR_INV_USAGE_PARM               0x20D1
      #define PMERR_INV_VIEWING_LIMITS           0x20D2
      #define PMERR_JFILE_BUSY                   0x20D3
      #define PMERR_JNL_FUNC_DATA_TOO_LONG       0x20D4
      #define PMERR_KERNING_NOT_SUPPORTED        0x20D5
      #define PMERR_LABEL_NOT_FOUND              0x20D6
      #define PMERR_MATRIX_OVERFLOW              0x20D7
      #define PMERR_METAFILE_INTERNAL_ERROR      0x20D8
      #define PMERR_METAFILE_IN_USE              0x20D9
      #define PMERR_METAFILE_LIMIT_EXCEEDED      0x20DA
      #define PMERR_NAME_STACK_FULL              0x20DB
      #define PMERR_NOT_CREATED_BY_DEVOPENDC     0x20DC
      #define PMERR_NOT_IN_AREA                  0x20DD
      #define PMERR_NOT_IN_DRAW_MODE             0x20DE
      #define PMERR_NOT_IN_ELEMENT               0x20DF
      #define PMERR_NOT_IN_IMAGE                 0x20E0
      #define PMERR_NOT_IN_PATH                  0x20E1
      #define PMERR_NOT_IN_RETAIN_MODE           0x20E2
      #define PMERR_NOT_IN_SEG                   0x20E3
      #define PMERR_NO_BITMAP_SELECTED           0x20E4
      #define PMERR_NO_CURRENT_ELEMENT           0x20E5
      #define PMERR_NO_CURRENT_SEG               0x20E6
      #define PMERR_NO_METAFILE_RECORD_HANDLE    0x20E7
      #define PMERR_ORDER_TOO_BIG                0x20E8
      #define PMERR_OTHER_SET_ID_REFS            0x20E9
      #define PMERR_OVERRAN_SEG                  0x20EA
      #define PMERR_OWN_SET_ID_REFS              0x20EB
      #define PMERR_PATH_INCOMPLETE              0x20EC
      #define PMERR_PATH_LIMIT_EXCEEDED          0x20ED
      #define PMERR_PATH_UNKNOWN                 0x20EE
      #define PMERR_PEL_IS_CLIPPED               0x20EF
      #define PMERR_PEL_NOT_AVAILABLE            0x20F0
      #define PMERR_PRIMITIVE_STACK_EMPTY        0x20F1
      #define PMERR_PROLOG_ERROR                 0x20F2
      #define PMERR_PROLOG_SEG_ATTR_NOT_SET      0x20F3
      #define PMERR_PS_BUSY                      0x20F4
      #define PMERR_PS_IS_ASSOCIATED             0x20F5
      #define PMERR_RAM_JNL_FILE_TOO_SMALL       0x20F6
      #define PMERR_REALIZE_NOT_SUPPORTED        0x20F7
      #define PMERR_REGION_IS_CLIP_REGION        0x20F8
      #define PMERR_RESOURCE_DEPLETION           0x20F9
      #define PMERR_SEG_AND_REFSEG_ARE_SAME      0x20FA
      #define PMERR_SEG_CALL_RECURSIVE           0x20FB
      #define PMERR_SEG_CALL_STACK_EMPTY         0x20FC
      #define PMERR_SEG_CALL_STACK_FULL          0x20FD
      #define PMERR_SEG_IS_CURRENT               0x20FE
      #define PMERR_SEG_NOT_CHAINED              0x20FF
      #define PMERR_SEG_NOT_FOUND                0x2100
      #define PMERR_SEG_STORE_LIMIT_EXCEEDED     0x2101
      #define PMERR_SETID_IN_USE                 0x2102
      #define PMERR_SETID_NOT_FOUND              0x2103
      #define PMERR_STARTDOC_NOT_ISSUED          0x2104
      #define PMERR_STOP_DRAW_OCCURRED           0x2105
      #define PMERR_TOO_MANY_METAFILES_IN_USE    0x2106
      #define PMERR_TRUNCATED_ORDER              0x2107
      #define PMERR_UNCHAINED_SEG_ZERO_INV       0x2108
      #define PMERR_UNSUPPORTED_ATTR             0x2109
      #define PMERR_UNSUPPORTED_ATTR_VALUE       0x210A
      #define PMERR_ENDDOC_NOT_ISSUED            0x210B
      #define PMERR_PS_NOT_ASSOCIATED            0x210C
      #define PMERR_INV_FLOOD_FILL_OPTIONS       0x210D
      #define PMERR_INV_FACENAME                 0x210E
      #define PMERR_PALETTE_SELECTED             0x210F
      #define PMERR_NO_PALETTE_SELECTED          0x2110
      #define PMERR_INV_HPAL                     0x2111
      #define PMERR_PALETTE_BUSY                 0x2112
      #define PMERR_START_POINT_CLIPPED          0x2113
      #define PMERR_NO_FILL                      0x2114
      #define PMERR_INV_FACENAMEDESC             0x2115
      #define PMERR_INV_BITMAP_DATA              0x2116
      #define PMERR_INV_CHAR_ALIGN_ATTR          0x2117
      #define PMERR_INV_HFONT                    0x2118
      #define PMERR_HFONT_IS_SELECTED            0x2119
      #define PMERR_DRVR_NOT_SUPPORTED           0x2120
      #define PMERR_INV_INKPS_FUNCTION           0x2121
      
   #endif /* error codes already included */
#endif /* include error codes */

/****************************************************************************
*** Device Manager error codes
****************************************************************************/

/* None yet */

/****************************************************************************
*** Spooler error codes
****************************************************************************/
#ifdef INCL_SPLERRORS
   #ifndef INCL_SPLERRORS_INCL
      /* XLATOFF */
      #define INCL_SPLERRORS_INCL
      /* XLATON */
      
      #define PMERR_SPL_DRIVER_ERROR             0x4001
      #define PMERR_SPL_DEVICE_ERROR             0x4002
      #define PMERR_SPL_DEVICE_NOT_INSTALLED     0x4003
      #define PMERR_SPL_QUEUE_ERROR              0x4004
      #define PMERR_SPL_INV_HSPL                 0x4005
      #define PMERR_SPL_NO_DISK_SPACE            0x4006
      #define PMERR_SPL_NO_MEMORY                0x4007
      #define PMERR_SPL_PRINT_ABORT              0x4008
      #define PMERR_SPL_SPOOLER_NOT_INSTALLED    0x4009
      #define PMERR_SPL_INV_FORMS_CODE           0x400A
      #define PMERR_SPL_INV_PRIORITY             0x400B
      #define PMERR_SPL_NO_FREE_JOB_ID           0x400C
      #define PMERR_SPL_NO_DATA                  0x400D
      #define PMERR_SPL_INV_TOKEN                0x400E
      #define PMERR_SPL_INV_DATATYPE             0x400F
      #define PMERR_SPL_PROCESSOR_ERROR          0x4010
      #define PMERR_SPL_INV_JOB_ID               0x4011
      #define PMERR_SPL_JOB_NOT_PRINTING         0x4012
      #define PMERR_SPL_JOB_PRINTING             0x4013
      #define PMERR_SPL_QUEUE_ALREADY_EXISTS     0x4014
      #define PMERR_SPL_INV_QUEUE_NAME           0x4015
      #define PMERR_SPL_QUEUE_NOT_EMPTY          0x4016
      #define PMERR_SPL_DEVICE_ALREADY_EXISTS    0x4017
      #define PMERR_SPL_DEVICE_LIMIT_REACHED     0x4018
      #define PMERR_SPL_STATUS_STRING_TRUNC      0x4019
      #define PMERR_SPL_INV_LENGTH_OR_COUNT      0x401A
      #define PMERR_SPL_FILE_NOT_FOUND           0x401B
      #define PMERR_SPL_CANNOT_OPEN_FILE         0x401C
      #define PMERR_SPL_DRIVER_NOT_INSTALLED     0x401D
      #define PMERR_SPL_INV_PROCESSOR_DATTYPE    0x401E
      #define PMERR_SPL_INV_DRIVER_DATATYPE      0x401F
      #define PMERR_SPL_PROCESSOR_NOT_INST       0x4020
      #define PMERR_SPL_NO_SUCH_LOG_ADDRESS      0x4021
      #define PMERR_SPL_PRINTER_NOT_FOUND        0x4022
      #define PMERR_SPL_DD_NOT_FOUND             0x4023
      #define PMERR_SPL_QUEUE_NOT_FOUND          0x4024
      #define PMERR_SPL_MANY_QUEUES_ASSOC        0x4025
      #define PMERR_SPL_NO_QUEUES_ASSOCIATED     0x4026
      #define PMERR_SPL_INI_FILE_ERROR           0x4027
      #define PMERR_SPL_NO_DEFAULT_QUEUE         0x4028
      #define PMERR_SPL_NO_CURRENT_FORMS_CODE    0x4029
      #define PMERR_SPL_NOT_AUTHORISED           0x402A
      #define PMERR_SPL_TEMP_NETWORK_ERROR       0x402B
      #define PMERR_SPL_HARD_NETWORK_ERROR       0x402C
      #define PMERR_DEL_NOT_ALLOWED              0x402D
      #define PMERR_CANNOT_DEL_QP_REF            0x402E
      #define PMERR_CANNOT_DEL_QNAME_REF         0x402F
      #define PMERR_CANNOT_DEL_PRINTER_DD_REF    0x4030
      #define PMERR_CANNOT_DEL_PRN_NAME_REF      0x4031
      #define PMERR_CANNOT_DEL_PRN_ADDR_REF      0x4032
      #define PMERR_SPOOLER_QP_NOT_DEFINED       0x4033
      #define PMERR_PRN_NAME_NOT_DEFINED         0x4034
      #define PMERR_PRN_ADDR_NOT_DEFINED         0x4035
      #define PMERR_PRINTER_DD_NOT_DEFINED       0x4036
      #define PMERR_PRINTER_QUEUE_NOT_DEFINED    0x4037
      #define PMERR_PRN_ADDR_IN_USE              0x4038
      #define PMERR_SPL_TOO_MANY_OPEN_FILES      0x4039
      #define PMERR_SPL_CP_NOT_REQD              0x403A
      #define PMERR_SPL_PORT_SHUTDOWN            0x403B
      #define PMERR_SPL_NOT_HANDLED              0x403C
      #define PMERR_SPL_CNV_NOT_INIT             0x403D
      #define PMERR_SPL_INIT_IN_PROGRESS         0x403E
      #define PMERR_SPL_TYPE_NOT_AVAIL           0x403F
      #define PMERR_UNABLE_TO_CLOSE_DEVICE       0x4040
      #define PMERR_SPL_SESSION_TERM             0x4041
      #define PMERR_SPL_NOT_REGISTERED           0x4042
      
      #define PMERR_SPL_ERROR_1          ( SPLERR_BASE + 4001 )
      #define PMERR_SPL_ERROR_2          ( SPLERR_BASE + 4002 )
      #define PMERR_SPL_ERROR_3          ( SPLERR_BASE + 4003 )
      #define PMERR_SPL_ERROR_4          ( SPLERR_BASE + 4004 )
      #define PMERR_SPL_ERROR_5          ( SPLERR_BASE + 4005 )
      #define PMERR_SPL_ERROR_6          ( SPLERR_BASE + 4006 )
      #define PMERR_SPL_ERROR_7          ( SPLERR_BASE + 4007 )
      #define PMERR_SPL_ERROR_8          ( SPLERR_BASE + 4008 )
      #define PMERR_SPL_ERROR_9          ( SPLERR_BASE + 4009 )
      #define PMERR_SPL_ERROR_10         ( SPLERR_BASE + 4010 )
      #define PMERR_SPL_ERROR_11         ( SPLERR_BASE + 4011 )
      #define PMERR_SPL_ERROR_12         ( SPLERR_BASE + 4012 )
      #define PMERR_SPL_ERROR_13         ( SPLERR_BASE + 4013 )
      #define PMERR_SPL_ERROR_14         ( SPLERR_BASE + 4014 )
      #define PMERR_SPL_ERROR_15         ( SPLERR_BASE + 4015 )
      #define PMERR_SPL_ERROR_16         ( SPLERR_BASE + 4016 )
      #define PMERR_SPL_ERROR_17         ( SPLERR_BASE + 4017 )
      #define PMERR_SPL_ERROR_18         ( SPLERR_BASE + 4018 )
      #define PMERR_SPL_ERROR_19         ( SPLERR_BASE + 4019 )
      #define PMERR_SPL_ERROR_20         ( SPLERR_BASE + 4020 )
      #define PMERR_SPL_ERROR_21         ( SPLERR_BASE + 4021 )
      #define PMERR_SPL_ERROR_22         ( SPLERR_BASE + 4022 )
      #define PMERR_SPL_ERROR_23         ( SPLERR_BASE + 4023 )
      #define PMERR_SPL_ERROR_24         ( SPLERR_BASE + 4024 )
      #define PMERR_SPL_ERROR_25         ( SPLERR_BASE + 4025 )
      #define PMERR_SPL_ERROR_26         ( SPLERR_BASE + 4026 )
      #define PMERR_SPL_ERROR_27         ( SPLERR_BASE + 4027 )
      #define PMERR_SPL_ERROR_28         ( SPLERR_BASE + 4028 )
      #define PMERR_SPL_ERROR_29         ( SPLERR_BASE + 4029 )
      #define PMERR_SPL_ERROR_30         ( SPLERR_BASE + 4030 )
      #define PMERR_SPL_ERROR_31         ( SPLERR_BASE + 4031 )
      #define PMERR_SPL_ERROR_32         ( SPLERR_BASE + 4032 )
      #define PMERR_SPL_ERROR_33         ( SPLERR_BASE + 4033 )
      #define PMERR_SPL_ERROR_34         ( SPLERR_BASE + 4034 )
      #define PMERR_SPL_ERROR_35         ( SPLERR_BASE + 4035 )
      #define PMERR_SPL_ERROR_36         ( SPLERR_BASE + 4036 )
      #define PMERR_SPL_ERROR_37         ( SPLERR_BASE + 4037 )
      #define PMERR_SPL_ERROR_38         ( SPLERR_BASE + 4038 )
      #define PMERR_SPL_ERROR_39         ( SPLERR_BASE + 4039 )
      #define PMERR_SPL_ERROR_40         ( SPLERR_BASE + 4040 )
      
      #define PMERR_SPLMSGBOX_INFO_CAPTION    ( SPLERR_BASE + 4041 )
      #define PMERR_SPLMSGBOX_WARNING_CAPTION ( SPLERR_BASE + 4042 )
      #define PMERR_SPLMSGBOX_ERROR_CAPTION   ( SPLERR_BASE + 4043 )
      #define PMERR_SPLMSGBOX_SEVERE_CAPTION  ( SPLERR_BASE + 4044 )
      
      #define PMERR_SPLMSGBOX_JOB_DETAILS     ( SPLERR_BASE + 4045 )
      
      #define PMERR_SPLMSGBOX_ERROR_ACTION    ( SPLERR_BASE + 4046 )
      #define PMERR_SPLMSGBOX_SEVERE_ACTION   ( SPLERR_BASE + 4047 )
      
      #define PMERR_SPLMSGBOX_BIT_0_TEXT      ( SPLERR_BASE + 4048 )
      #define PMERR_SPLMSGBOX_BIT_1_TEXT      ( SPLERR_BASE + 4049 )
      #define PMERR_SPLMSGBOX_BIT_2_TEXT      ( SPLERR_BASE + 4050 )
      #define PMERR_SPLMSGBOX_BIT_3_TEXT      ( SPLERR_BASE + 4051 )
      #define PMERR_SPLMSGBOX_BIT_4_TEXT      ( SPLERR_BASE + 4052 )
      #define PMERR_SPLMSGBOX_BIT_5_TEXT      ( SPLERR_BASE + 4053 )
      #define PMERR_SPLMSGBOX_BIT_15_TEXT     ( SPLERR_BASE + 4054 )
      #define PMERR_SPL_NOPATHBUFFER          ( SPLERR_BASE + 4055 )
      
      #define PMERR_SPL_ALREADY_INITIALISED   ( SPLERR_BASE + 4093 )
      #define PMERR_SPL_ERROR                 ( SPLERR_BASE + 4095 )
      
      
      #define NERR_BASE       2100
      #define NERR_NetNotStarted      (NERR_BASE+2)   /* The NETWKSTA.SYS workstation driver isn't installed. */
      #define NERR_RedirectedPath     (NERR_BASE+17)  /* The operation is invalid on a redirected resource. */
      #define NERR_BufTooSmall        (NERR_BASE+23)  /* The API return buffer is too small. */
      #define NERR_InvalidAPI         (NERR_BASE+42)  /* The requested API isn't supported on the remote server. */
      #define NERR_QNotFound          (NERR_BASE+50)  /* The printer queue does not exist. */
      #define NERR_JobNotFound        (NERR_BASE+51)  /* The print job does not exist. */
      #define NERR_DestNotFound       (NERR_BASE+52)  /* The printer destination cannot be found. */
      #define NERR_DestExists         (NERR_BASE+53)  /* The printer destination already exists. */
      #define NERR_QExists            (NERR_BASE+54)  /* The printer queue already exists. */
      #define NERR_QNoRoom            (NERR_BASE+55)  /* No more printer queues can be added. */
      #define NERR_JobNoRoom          (NERR_BASE+56)  /* No more print jobs can be added.  */
      #define NERR_DestNoRoom         (NERR_BASE+57)  /* No more printer destinations can be added. */
      #define NERR_DestIdle           (NERR_BASE+58)  /* This printer destination is idle and cannot accept control operations. */
      #define NERR_DestInvalidOp      (NERR_BASE+59)  /* This printer destination request contains an invalid control function. */
      #define NERR_SpoolerNotLoaded   (NERR_BASE+61)  /* The spooler is not running. */
      #define NERR_DestInvalidState   (NERR_BASE+62)  /* This operation cannot be performed on the print destination in its current state. */
      #define NERR_JobInvalidState    (NERR_BASE+64)  /* This operation cannot be performed on the print job in its current state. */
      #define NERR_SpoolNoMemory      (NERR_BASE+65)  /* A spooler memory allocation failure occurred. */
      #define NERR_DriverNotFound     (NERR_BASE+66)  /* The device driver does not exist. */
      #define NERR_DataTypeInvalid    (NERR_BASE+67)  /* The datatype is not supported by the processor. */
      #define NERR_ProcNotFound       (NERR_BASE+68)  /* The print processor is not installed. */
      #define NERR_BadDev             (NERR_BASE+241) /* The requested device is invalid. */
      #define NERR_CommDevInUse       (NERR_BASE+243) /* This device is already in use as a communications device. */
      #define NERR_InvalidComputer   (NERR_BASE+251) /* This computername is invalid. */
      #define NERR_OpenFiles          (NERR_BASE+301) /* There are open files on the connection.    */
      #define NERR_LocalDrive         (NERR_BASE+305) /* The drive letter is in use locally. */
      
   #endif /* error codes already included */
#endif /* include error codes */

/****************************************************************************
*** Picture Utilities error codes
****************************************************************************/
#ifdef INCL_PICERRORS
   #ifndef INCL_PICERRORS_INCL
      /* XLATOFF */
      #define INCL_PICERRORS_INCL
      /* XLATON */
      
      #define PMERR_INV_TYPE         0x5001
      #define PMERR_INV_CONV         0x5002
      #define PMERR_INV_SEGLEN       0x5003
      #define PMERR_DUP_SEGNAME      0x5004
      #define PMERR_INV_XFORM        0x5005
      #define PMERR_INV_VIEWLIM      0x5006
      #define PMERR_INV_3DCOORD      0x5007
      #define PMERR_SMB_OVFLOW       0x5008
      #define PMERR_SEG_OVFLOW       0x5009
      #define PMERR_PIC_DUP_FILENAME 0x5010
      
   #endif /* error codes already included */
#endif /* include error codes */


/****************************************************************************
*    numbers from 0x5100  to 0x5fff are reserved.
****************************************************************************/


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
