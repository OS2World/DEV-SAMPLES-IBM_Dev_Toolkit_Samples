
/*
 * This file was generated by the SOM Compiler.
 * FileName: ipxsock.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somu
 * 
 *    ORIGINS: 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1996,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 *  @(#) 2.9 src/soms/ipxsock.idl, somu, som2.1 12/26/95 18:17:19 [7/30/96 14:49:48]
 */


#ifndef SOM_IPXSockets_h
#define SOM_IPXSockets_h


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
#ifndef IPXSockets
#define IPXSockets SOMObject
#endif
#include <somssock.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define IPXSockets_MajorVersion 2
#define IPXSockets_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define IPXSocketsNewClass c
#pragma linkage(c, system)
#define IPXSocketsClassData d
#define IPXSocketsCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the metaclass file
 */
#ifndef SOM_SOMMSingleInstance_h
#include <snglicls.h>
#endif
/*--------------Migration------------*/
#define IPXSockets_classObj IPXSocketsClassData.classObject
#define _IPXSockets IPXSockets_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK IPXSocketsNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(IPXSocketsNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct IPXSocketsClassDataStructure {
	SOMClass *classObject;
} SOMDLINK IPXSocketsClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct IPXSocketsCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK IPXSocketsCClassData;

/*
 * New and Renew macros for IPXSockets
 */
#define IPXSocketsNew() \
   ( _IPXSockets ? \
	_somNew(_IPXSockets) \
	: ( IPXSocketsNewClass(\
		IPXSockets_MajorVersion, \
		IPXSockets_MinorVersion),\
	   _somNew(_IPXSockets)))
#define IPXSocketsRenew(buf) \
   ( _IPXSockets ? \
	_somRenew(_IPXSockets, buf) \
	: ( IPXSocketsNewClass(\
		IPXSockets_MajorVersion, \
		IPXSockets_MinorVersion),\
	   _somRenew(_IPXSockets, buf)))

/*
 * Override method: somsAccept
 */
#define IPXSockets_somsAccept(somSelf,ev,s,name,namelen) \
	Sockets_somsAccept(somSelf,ev,s,name,namelen)

/*
 * Override method: somsBind
 */
#define IPXSockets_somsBind(somSelf,ev,s,name,namelen) \
	Sockets_somsBind(somSelf,ev,s,name,namelen)

/*
 * Override method: somsConnect
 */
#define IPXSockets_somsConnect(somSelf,ev,s,name,namelen) \
	Sockets_somsConnect(somSelf,ev,s,name,namelen)

/*
 * Override method: somsGethostbyaddr
 */
#define IPXSockets_somsGethostbyaddr(somSelf,ev,addr,addrlen,domain) \
	Sockets_somsGethostbyaddr(somSelf,ev,addr,addrlen,domain)

/*
 * Override method: somsGethostbyname
 */
#define IPXSockets_somsGethostbyname(somSelf,ev,name) \
	Sockets_somsGethostbyname(somSelf,ev,name)

/*
 * Override method: somsGethostent
 */
#define IPXSockets_somsGethostent(somSelf,ev) \
	Sockets_somsGethostent(somSelf,ev)

/*
 * Override method: somsGethostid
 */
#define IPXSockets_somsGethostid(somSelf,ev) \
	Sockets_somsGethostid(somSelf,ev)

/*
 * Override method: somsGethostname
 */
#define IPXSockets_somsGethostname(somSelf,ev,name,namelength) \
	Sockets_somsGethostname(somSelf,ev,name,namelength)

/*
 * Override method: somsGetpeername
 */
#define IPXSockets_somsGetpeername(somSelf,ev,s,name,namelen) \
	Sockets_somsGetpeername(somSelf,ev,s,name,namelen)

/*
 * Override method: somsGetsockname
 */
#define IPXSockets_somsGetsockname(somSelf,ev,s,name,namelen) \
	Sockets_somsGetsockname(somSelf,ev,s,name,namelen)

/*
 * Override method: somsGetsockopt
 */
#define IPXSockets_somsGetsockopt(somSelf,ev,s,level,optname,optval,option) \
	Sockets_somsGetsockopt(somSelf,ev,s,level,optname,optval,option)

/*
 * Override method: somsGetservbyname
 */
#define IPXSockets_somsGetservbyname(somSelf,ev,name,protocol) \
	Sockets_somsGetservbyname(somSelf,ev,name,protocol)

/*
 * Override method: somsHtonl
 */
#define IPXSockets_somsHtonl(somSelf,ev,a) \
	Sockets_somsHtonl(somSelf,ev,a)

/*
 * Override method: somsHtons
 */
#define IPXSockets_somsHtons(somSelf,ev,a) \
	Sockets_somsHtons(somSelf,ev,a)

/*
 * Override method: somsIoctl
 */
#define IPXSockets_somsIoctl(somSelf,ev,s,cmd,data,length) \
	Sockets_somsIoctl(somSelf,ev,s,cmd,data,length)

/*
 * Override method: somsInet_addr
 */
#define IPXSockets_somsInet_addr(somSelf,ev,cp) \
	Sockets_somsInet_addr(somSelf,ev,cp)

/*
 * Override method: somsInet_lnaof
 */
#define IPXSockets_somsInet_lnaof(somSelf,ev,addr) \
	Sockets_somsInet_lnaof(somSelf,ev,addr)

/*
 * Override method: somsInet_makeaddr
 */
#define IPXSockets_somsInet_makeaddr(somSelf,ev,net,lna) \
	Sockets_somsInet_makeaddr(somSelf,ev,net,lna)

/*
 * Override method: somsInet_netof
 */
#define IPXSockets_somsInet_netof(somSelf,ev,addr) \
	Sockets_somsInet_netof(somSelf,ev,addr)

/*
 * Override method: somsInet_network
 */
#define IPXSockets_somsInet_network(somSelf,ev,cp) \
	Sockets_somsInet_network(somSelf,ev,cp)

/*
 * Override method: somsInet_ntoa
 */
#define IPXSockets_somsInet_ntoa(somSelf,ev,addr) \
	Sockets_somsInet_ntoa(somSelf,ev,addr)

/*
 * Override method: somsListen
 */
#define IPXSockets_somsListen(somSelf,ev,s,backlog) \
	Sockets_somsListen(somSelf,ev,s,backlog)

/*
 * Override method: somsNtohl
 */
#define IPXSockets_somsNtohl(somSelf,ev,a) \
	Sockets_somsNtohl(somSelf,ev,a)

/*
 * Override method: somsNtohs
 */
#define IPXSockets_somsNtohs(somSelf,ev,a) \
	Sockets_somsNtohs(somSelf,ev,a)

/*
 * Override method: somsReadv
 */
#define IPXSockets_somsReadv(somSelf,ev,s,iov,iovcnt) \
	Sockets_somsReadv(somSelf,ev,s,iov,iovcnt)

/*
 * Override method: somsRecv
 */
#define IPXSockets_somsRecv(somSelf,ev,s,buf,len,flags) \
	Sockets_somsRecv(somSelf,ev,s,buf,len,flags)

/*
 * Override method: somsRecvfrom
 */
#define IPXSockets_somsRecvfrom(somSelf,ev,s,buf,len,flags,name,namelen) \
	Sockets_somsRecvfrom(somSelf,ev,s,buf,len,flags,name,namelen)

/*
 * Override method: somsRecvmsg
 */
#define IPXSockets_somsRecvmsg(somSelf,ev,s,msg,flags) \
	Sockets_somsRecvmsg(somSelf,ev,s,msg,flags)

/*
 * Override method: somsSelect
 */
#define IPXSockets_somsSelect(somSelf,ev,nfds,readfds,writefds,exceptfds,timeout) \
	Sockets_somsSelect(somSelf,ev,nfds,readfds,writefds,exceptfds,timeout)

/*
 * Override method: somsSend
 */
#define IPXSockets_somsSend(somSelf,ev,s,msg,len,flags) \
	Sockets_somsSend(somSelf,ev,s,msg,len,flags)

/*
 * Override method: somsSendmsg
 */
#define IPXSockets_somsSendmsg(somSelf,ev,s,msg,flags) \
	Sockets_somsSendmsg(somSelf,ev,s,msg,flags)

/*
 * Override method: somsSendto
 */
#define IPXSockets_somsSendto(somSelf,ev,s,msg,len,flags,to,tolen) \
	Sockets_somsSendto(somSelf,ev,s,msg,len,flags,to,tolen)

/*
 * Override method: somsSetsockopt
 */
#define IPXSockets_somsSetsockopt(somSelf,ev,s,level,optname,optval,optlen) \
	Sockets_somsSetsockopt(somSelf,ev,s,level,optname,optval,optlen)

/*
 * Override method: somsShutdown
 */
#define IPXSockets_somsShutdown(somSelf,ev,s,how) \
	Sockets_somsShutdown(somSelf,ev,s,how)

/*
 * Override method: somsSocket
 */
#define IPXSockets_somsSocket(somSelf,ev,domain,type,protocol) \
	Sockets_somsSocket(somSelf,ev,domain,type,protocol)

/*
 * Override method: somsSoclose
 */
#define IPXSockets_somsSoclose(somSelf,ev,s) \
	Sockets_somsSoclose(somSelf,ev,s)

/*
 * Override method: somsWritev
 */
#define IPXSockets_somsWritev(somSelf,ev,s,iov,iovcnt) \
	Sockets_somsWritev(somSelf,ev,s,iov,iovcnt)

/*
 * Override method: somInit
 */
#define IPXSockets_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: _set_serrno
 */
#define IPXSockets__set_serrno(somSelf,ev,serrno) \
	Sockets__set_serrno(somSelf,ev,serrno)

/*
 * Override method: _get_serrno
 */
#define IPXSockets__get_serrno(somSelf,ev) \
	Sockets__get_serrno(somSelf,ev)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define IPXSockets_somDefaultInit SOMObject_somDefaultInit
#define IPXSockets_somDestruct SOMObject_somDestruct
#define IPXSockets_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define IPXSockets_somDefaultAssign SOMObject_somDefaultAssign
#define IPXSockets_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define IPXSockets_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define IPXSockets_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define IPXSockets_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define IPXSockets_somDefaultVAssign SOMObject_somDefaultVAssign
#define IPXSockets_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define IPXSockets_somFree SOMObject_somFree
#define IPXSockets_somUninit SOMObject_somUninit
#define IPXSockets_somGetClass SOMObject_somGetClass
#define IPXSockets_somGetClassName SOMObject_somGetClassName
#define IPXSockets_somGetSize SOMObject_somGetSize
#define IPXSockets_somIsA SOMObject_somIsA
#define IPXSockets_somIsInstanceOf SOMObject_somIsInstanceOf
#define IPXSockets_somRespondsTo SOMObject_somRespondsTo
#define IPXSockets_somDispatch SOMObject_somDispatch
#define IPXSockets_somClassDispatch SOMObject_somClassDispatch
#define IPXSockets_somCastObj SOMObject_somCastObj
#define IPXSockets_somResetObj SOMObject_somResetObj
#define IPXSockets_somDispatchV SOMObject_somDispatchV
#define IPXSockets_somDispatchL SOMObject_somDispatchL
#define IPXSockets_somDispatchA SOMObject_somDispatchA
#define IPXSockets_somDispatchD SOMObject_somDispatchD
#define IPXSockets_somPrintSelf SOMObject_somPrintSelf
#define IPXSockets_somDumpSelf SOMObject_somDumpSelf
#define IPXSockets_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_IPXSockets_h */
