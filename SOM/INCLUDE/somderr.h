/*
 *   COMPONENT_NAME: somd
 *
 *   ORIGINS: 27
 *
 *
 *   10H9767, 10H9769  (C) COPYRIGHT International Business Machines Corp. 1992,1994
 *   All Rights Reserved
 *   Licensed Materials - Property of IBM
 *   US Government Users Restricted Rights - Use, duplication or
 *   disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */
/* @(#) 2.30.1.1 src/somd/somderr.h, somd, som2.1 4/7/95 13:22:09 [7/30/96 14:45:42] */


/*
 */


/*
 *    SOMDERR.H
 *    Distributed System Object Model run-time error codes
 */


#ifndef somderr_h
#define somderr_h


/* Error Definition Macro */
#define SOMD_ERR_BASE   30000
#define SOMD_OPSYS_BASE 40000
#define SOMDERROR_OPSYS "SOMDERROR_OperatingSystem"
#define SOMD_ErrorCode(incode) (SOMD_ERR_BASE + (incode))

#define SOMDERROR_NoMemory              SOMD_ErrorCode(1)
#define SOMDERROR_NotImplemented        SOMD_ErrorCode(2)
#define SOMDERROR_UnexpectedNULL        SOMD_ErrorCode(3)
#define SOMDERROR_IO                    SOMD_ErrorCode(4)
#define SOMDERROR_BadVersion            SOMD_ErrorCode(5)
#define SOMDERROR_ParmSize              SOMD_ErrorCode(6)
#define SOMDERROR_HostName              SOMD_ErrorCode(7)
#define SOMDERROR_HostAddress           SOMD_ErrorCode(8)
#define SOMDERROR_SocketCreate          SOMD_ErrorCode(9)
#define SOMDERROR_SocketBind            SOMD_ErrorCode(10)
#define SOMDERROR_SocketName            SOMD_ErrorCode(11)
#define SOMDERROR_SocketReceive         SOMD_ErrorCode(12)
#define SOMDERROR_SocketSend            SOMD_ErrorCode(13)
#define SOMDERROR_SocketIoctl           SOMD_ErrorCode(14)
#define SOMDERROR_SocketSelect          SOMD_ErrorCode(15)
#define SOMDERROR_PacketSequence        SOMD_ErrorCode(16)
#define SOMDERROR_PacketTooBig          SOMD_ErrorCode(17)
#define SOMDERROR_AddressNotFound       SOMD_ErrorCode(18)
#define SOMDERROR_NoMessages            SOMD_ErrorCode(19)
#define SOMDERROR_UnknownAddress        SOMD_ErrorCode(20)
#define SOMDERROR_RecvError             SOMD_ErrorCode(21)
#define SOMDERROR_SendError             SOMD_ErrorCode(22)
#define SOMDERROR_CommTimeOut           SOMD_ErrorCode(23)
#define SOMDERROR_CannotConnect         SOMD_ErrorCode(24)
#define SOMDERROR_BadConnection         SOMD_ErrorCode(25)
#define SOMDERROR_NoHostName            SOMD_ErrorCode(26)
#define SOMDERROR_BadBinding            SOMD_ErrorCode(27)
#define SOMDERROR_BadMethodName         SOMD_ErrorCode(28)
#define SOMDERROR_BadEnvironment        SOMD_ErrorCode(29)
#define SOMDERROR_BadContext            SOMD_ErrorCode(30)
#define SOMDERROR_BadNVList             SOMD_ErrorCode(31)
#define SOMDERROR_BadFlag               SOMD_ErrorCode(32)
#define SOMDERROR_BadLength             SOMD_ErrorCode(33)
#define SOMDERROR_BadObjref             SOMD_ErrorCode(34)
#define SOMDERROR_NullField             SOMD_ErrorCode(35)
#define SOMDERROR_UnknownReposId        SOMD_ErrorCode(36)
#define SOMDERROR_NVListAccess          SOMD_ErrorCode(37)
#define SOMDERROR_NVIndexError          SOMD_ErrorCode(38)
#define SOMDERROR_SysTime               SOMD_ErrorCode(39)
#define SOMDERROR_SystemCallFailed      SOMD_ErrorCode(40)
#define SOMDERROR_CouldNotStartProcess  SOMD_ErrorCode(41)
#define SOMDERROR_NoServerClass         SOMD_ErrorCode(42)
#define SOMDERROR_NoSOMDInit            SOMD_ErrorCode(43)
#define SOMDERROR_SOMDDIRNotSet         SOMD_ErrorCode(44)
#define SOMDERROR_NoImplDatabase        SOMD_ErrorCode(45)
#define SOMDERROR_ImplNotFound          SOMD_ErrorCode(46)
#define SOMDERROR_ClassNotFound         SOMD_ErrorCode(47)
#define SOMDERROR_ServerNotFound        SOMD_ErrorCode(48)
#define SOMDERROR_ServerAlreadyExists   SOMD_ErrorCode(49)
#define SOMDERROR_ServerNotActive       SOMD_ErrorCode(50)
#define SOMDERROR_CouldNotStartSOM      SOMD_ErrorCode(51)
#define SOMDERROR_ObjectNotFound        SOMD_ErrorCode(52)
#define SOMDERROR_NoParentClass         SOMD_ErrorCode(53)
#define SOMDERROR_DispatchError         SOMD_ErrorCode(54)
#define SOMDERROR_BadTypeCode           SOMD_ErrorCode(55)
#define SOMDERROR_BadDescriptor         SOMD_ErrorCode(56)
#define SOMDERROR_BadResultType         SOMD_ErrorCode(57)
#define SOMDERROR_KeyInUse              SOMD_ErrorCode(58)
#define SOMDERROR_KeyNotFound           SOMD_ErrorCode(59)
#define SOMDERROR_CtxInvalidPropName    SOMD_ErrorCode(60)
#define SOMDERROR_CtxNoPropFound        SOMD_ErrorCode(61)
#define SOMDERROR_CtxStartScopeNotFound SOMD_ErrorCode(62)
#define SOMDERROR_CtxAccess             SOMD_ErrorCode(63)
#define SOMDERROR_CouldNotStartThread   SOMD_ErrorCode(64)
#define SOMDERROR_AccessDenied          SOMD_ErrorCode(65)
#define SOMDERROR_BadParm               SOMD_ErrorCode(66)
#define SOMDERROR_Interrupt             SOMD_ErrorCode(67)
#define SOMDERROR_Locked                SOMD_ErrorCode(68)
#define SOMDERROR_Pointer               SOMD_ErrorCode(69)
#define SOMDERROR_Boundary              SOMD_ErrorCode(70)
#define SOMDERROR_UnknownError          SOMD_ErrorCode(71)
#define SOMDERROR_NoSpace               SOMD_ErrorCode(72)
#define SOMDERROR_DuplicateQueue        SOMD_ErrorCode(73)
#define SOMDERROR_BadQueueName          SOMD_ErrorCode(74)
#define SOMDERROR_DuplicateSem          SOMD_ErrorCode(75)
#define SOMDERROR_BadSemName            SOMD_ErrorCode(76)
#define SOMDERROR_TooManyHandles        SOMD_ErrorCode(77)
#define SOMDERROR_BadAddrFamily         SOMD_ErrorCode(78)
#define SOMDERROR_BadFormat             SOMD_ErrorCode(79)
#define SOMDERROR_BadDrive              SOMD_ErrorCode(80)
#define SOMDERROR_SharingViolation      SOMD_ErrorCode(81)
#define SOMDERROR_BadExeSignature       SOMD_ErrorCode(82)
#define SOMDERROR_BadExe                SOMD_ErrorCode(83)
#define SOMDERROR_Busy                  SOMD_ErrorCode(84)
#define SOMDERROR_BadThread             SOMD_ErrorCode(85)
#define SOMDERROR_SOMDPORTNotDefined    SOMD_ErrorCode(86)
#define SOMDERROR_ResourceExists        SOMD_ErrorCode(87)
#define SOMDERROR_UserName              SOMD_ErrorCode(88)
#define SOMDERROR_WrongRefType          SOMD_ErrorCode(89)
#define SOMDERROR_MustOverride          SOMD_ErrorCode(90)
#define SOMDERROR_NoSocketsClass        SOMD_ErrorCode(91)
#define SOMDERROR_EManRegData           SOMD_ErrorCode(92)
#define SOMDERROR_NoRemoteComm          SOMD_ErrorCode(93)
#define SOMDERROR_RequestNotFound       SOMD_ErrorCode(94)
#define SOMDERROR_SocketClose           SOMD_ErrorCode(95)
#define SOMDERROR_GlobalAtomError       SOMD_ErrorCode(96)
#define SOMDERROR_NamedMemoryTableError SOMD_ErrorCode(97)
#define SOMDERROR_WMQUIT                SOMD_ErrorCode(98)
#define SOMDERROR_AnchorNotFound        SOMD_ErrorCode(99)
#define SOMDERROR_NotQueueOwner         SOMD_ErrorCode(100)
#define SOMDERROR_QueueNotFound         SOMD_ErrorCode(101)
#define SOMDERROR_BadQueueHandle        SOMD_ErrorCode(102)

/* new error codes in 2.1 */
#define SOMDERROR_LSBadCommand          SOMD_ErrorCode(103)
#define SOMDERROR_BadRevision           SOMD_ErrorCode(104)
#define SOMDERROR_DuplicateImplEntry    SOMD_ErrorCode(105)
#define SOMDERROR_InvalidSOMSOCKETS     SOMD_ErrorCode(106)
#define SOMDERROR_IRNotFound            SOMD_ErrorCode(107)

/* Defect 3511 */
#define SOMDERROR_ClassNotInIR          SOMD_ErrorCode(108)

/* Added for 2.1, feature 3604 */
#define SOMDERROR_SOMDDNotRunning       SOMD_ErrorCode(109)
#define SOMDERROR_SocketError           SOMD_ErrorCode(110)
#define SOMDERROR_PacketError           SOMD_ErrorCode(111)
#define SOMDERROR_Marshal               SOMD_ErrorCode(112)

/* Added for 2.1; Feature #3619 */
#define SOMDERROR_NotProcessOwner       SOMD_ErrorCode(113)
#define SOMDERROR_ServerInactive        SOMD_ErrorCode(114)
#define SOMDERROR_ServerDisabled        SOMD_ErrorCode(115)

#define SOMDERROR_ServerInterrupt       SOMD_ErrorCode(116)  /* d4064 */
#define SOMDERROR_SOMDDAlreadyRunning   SOMD_ErrorCode(117)  /* Defect 3987 */

#define SOMDERROR_ServerToBeDeleted     SOMD_ErrorCode(118)  /* d5564 */
#define SOMDERROR_NoObjRefTable         SOMD_ErrorCode(119)  /* d4136 */


#define SOMDERROR_UpdateImplDef         SOMD_ErrorCode(120)  /* d7724 */

#define SOMDERROR_TranServiceUnavail	SOMD_ErrorCode(121)	/* f7690 */
#define SOMDERROR_TranServiceError	SOMD_ErrorCode(122)	/* f7690 */

/* Reserved for AS/400 (defect 7755): */
#define SOMDERROR_AS400_Error01		SOMD_ErrorCode(123)
#define SOMDERROR_AS400_Error02		SOMD_ErrorCode(124)
#define SOMDERROR_AS400_Error03		SOMD_ErrorCode(125)
#define SOMDERROR_AS400_Error04		SOMD_ErrorCode(126)
#define SOMDERROR_AS400_Error05		SOMD_ErrorCode(127)
#define SOMDERROR_AS400_Error06		SOMD_ErrorCode(128)
#define SOMDERROR_AS400_Error07		SOMD_ErrorCode(129)
#define SOMDERROR_AS400_Error08		SOMD_ErrorCode(130)
#define SOMDERROR_AS400_Error09		SOMD_ErrorCode(131)
#define SOMDERROR_AS400_Error10		SOMD_ErrorCode(132)
#define SOMDERROR_AS400_Error11		SOMD_ErrorCode(133)
#define SOMDERROR_AS400_Error12		SOMD_ErrorCode(134)
#define SOMDERROR_AS400_Error13		SOMD_ErrorCode(135)
#define SOMDERROR_AS400_Error14		SOMD_ErrorCode(136)
#define SOMDERROR_AS400_Error15		SOMD_ErrorCode(137)
/* end of code reserved for AS/400 */

#define SOMDERROR_NoImplDirectory	SOMD_ErrorCode(138)  /* d8064 */

/* Reserved for AS/400 (defect 8082): */
#define SOMDERROR_ORTError              SOMD_ErrorCode(139)
#define SOMDERROR_AlreadyExists         SOMD_ErrorCode(140)
#define SOMDERROR_ImplRepServerNotFound SOMD_ErrorCode(141)
#define SOMDERROR_WaitTimeError         SOMD_ErrorCode(142)
#define SOMDERROR_TPoolError            SOMD_ErrorCode(143)
#define SOMDERROR_PathConvertError      SOMD_ErrorCode(144)
#define SOMDERROR_ServerENDJOBFailed    SOMD_ErrorCode(145)
#define SOMDERROR_AllImplsNotReturned   SOMD_ErrorCode(146)
#define SOMDERROR_ConvertFailed         SOMD_ErrorCode(147)
#define SOMDERROR_SelidNotFound         SOMD_ErrorCode(148)
#define SOMDERROR_EmptyEntry            SOMD_ErrorCode(149)
#define SOMDERROR_FileNotFound          SOMD_ErrorCode(150)
#define SOMDERROR_FileAlreadyExists     SOMD_ErrorCode(151)
#define SOMDERROR_RemoteDispatchFailed  SOMD_ErrorCode(152)
#define SOMDERROR_ClassNotInImplrep     SOMD_ErrorCode(153)
#define SOMDERROR_ValueTooLong          SOMD_ErrorCode(154)
#define SOMDERROR_ImplRepFileBad        SOMD_ErrorCode(155)
#define SOMDERROR_ImplRepFileFFDC       SOMD_ErrorCode(156)
#define SOMDERROR_AS400_Error34		SOMD_ErrorCode(157)
#define SOMDERROR_AS400_Error35		SOMD_ErrorCode(158)
#define SOMDERROR_AS400_Error36		SOMD_ErrorCode(159)
#define SOMDERROR_AS400_Error37		SOMD_ErrorCode(160)
#define SOMDERROR_AS400_Error38		SOMD_ErrorCode(161)
#define SOMDERROR_AS400_Error39		SOMD_ErrorCode(162)
#define SOMDERROR_AS400_Error40		SOMD_ErrorCode(163)
#define SOMDERROR_AS400_Error41		SOMD_ErrorCode(164)
#define SOMDERROR_AS400_Error42		SOMD_ErrorCode(165)
#define SOMDERROR_AS400_Error43		SOMD_ErrorCode(166)
#define SOMDERROR_AS400_Error44		SOMD_ErrorCode(167)
#define SOMDERROR_AS400_Error45		SOMD_ErrorCode(168)
/* end of code reserved for AS/400 */

#define SOMDERROR_ServerNotStoppable    SOMD_ErrorCode(169)  /* f8011 */

/* begin d8520 */
#define SOMDERROR_AuthnFail             SOMD_ErrorCode(170)
#define SOMDERROR_AuthzFail             SOMD_ErrorCode(171)
#define SOMDERROR_SecurityFail          SOMD_ErrorCode(172)
#define SOMDERROR_NoPersonaClass        SOMD_ErrorCode(173)
#define SOMDERROR_NoAccess          	SOMD_ErrorCode(174)
#define SOMDERROR_ReservedForSec_2        SOMD_ErrorCode(175)
#define SOMDERROR_ReservedForSec_3        SOMD_ErrorCode(176)
#define SOMDERROR_ReservedForSec_4        SOMD_ErrorCode(177)
#define SOMDERROR_ReservedForSec_5        SOMD_ErrorCode(178)
#define SOMDERROR_ReservedForSec_6        SOMD_ErrorCode(179)
/* end d8520 */

#endif /* somderr_h */
