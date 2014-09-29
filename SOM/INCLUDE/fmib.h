
/*
 * This file was generated by the SOM Compiler.
 * FileName: fmib.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somp
 * 
 *    ORIGINS: 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1994,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_SOMPBinaryFileMedia_h
#define SOM_SOMPBinaryFileMedia_h


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
#ifndef SOMPBinaryFileMedia
#define SOMPBinaryFileMedia SOMObject
#endif
/*
 *  The SOMPBinaryFileMedia class provides an interface to the file
 *  system which writes numbers in binary.
 */
#include <fmi.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define SOMPBinaryFileMedia_MajorVersion 2
#define SOMPBinaryFileMedia_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMPBinaryFileMediaNewClass c
#pragma linkage(c, system)
#define SOMPBinaryFileMediaClassData d
#define SOMPBinaryFileMediaCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMPBinaryFileMedia_classObj SOMPBinaryFileMediaClassData.classObject
#define _SOMPBinaryFileMedia SOMPBinaryFileMedia_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMPBinaryFileMediaNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMPBinaryFileMediaNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMPBinaryFileMediaClassDataStructure {
	SOMClass *classObject;
} SOMDLINK SOMPBinaryFileMediaClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMPBinaryFileMediaCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMPBinaryFileMediaCClassData;

/*
 * New and Renew macros for SOMPBinaryFileMedia
 */
#define SOMPBinaryFileMediaNew() \
   ( _SOMPBinaryFileMedia ? \
	_somNew(_SOMPBinaryFileMedia) \
	: ( SOMPBinaryFileMediaNewClass(\
		SOMPBinaryFileMedia_MajorVersion, \
		SOMPBinaryFileMedia_MinorVersion),\
	   _somNew(_SOMPBinaryFileMedia)))
#define SOMPBinaryFileMediaRenew(buf) \
   ( _SOMPBinaryFileMedia ? \
	_somRenew(_SOMPBinaryFileMedia, buf) \
	: ( SOMPBinaryFileMediaNewClass(\
		SOMPBinaryFileMedia_MajorVersion, \
		SOMPBinaryFileMedia_MinorVersion),\
	   _somRenew(_SOMPBinaryFileMedia, buf)))

/*
 * Override method: sompWriteOctet
 */
#define SOMPBinaryFileMedia_sompWriteOctet(somSelf,ev,i1) \
	SOMPFileMediaAbstract_sompWriteOctet(somSelf,ev,i1)

/*
 * Override method: sompWriteShort
 */
#define SOMPBinaryFileMedia_sompWriteShort(somSelf,ev,i2) \
	SOMPFileMediaAbstract_sompWriteShort(somSelf,ev,i2)

/*
 * Override method: sompWriteUnsignedShort
 */
#define SOMPBinaryFileMedia_sompWriteUnsignedShort(somSelf,ev,u2) \
	SOMPFileMediaAbstract_sompWriteUnsignedShort(somSelf,ev,u2)

/*
 * Override method: sompWriteLong
 */
#define SOMPBinaryFileMedia_sompWriteLong(somSelf,ev,i4) \
	SOMPFileMediaAbstract_sompWriteLong(somSelf,ev,i4)

/*
 * Override method: sompWriteUnsignedLong
 */
#define SOMPBinaryFileMedia_sompWriteUnsignedLong(somSelf,ev,u4) \
	SOMPFileMediaAbstract_sompWriteUnsignedLong(somSelf,ev,u4)

/*
 * Override method: sompWriteDouble
 */
#define SOMPBinaryFileMedia_sompWriteDouble(somSelf,ev,f8) \
	SOMPFileMediaAbstract_sompWriteDouble(somSelf,ev,f8)

/*
 * Override method: sompWriteFloat
 */
#define SOMPBinaryFileMedia_sompWriteFloat(somSelf,ev,f4) \
	SOMPFileMediaAbstract_sompWriteFloat(somSelf,ev,f4)

/*
 * Override method: sompWriteString
 */
#define SOMPBinaryFileMedia_sompWriteString(somSelf,ev,wstring) \
	SOMPFileMediaAbstract_sompWriteString(somSelf,ev,wstring)

/*
 * Override method: sompReadOctet
 */
#define SOMPBinaryFileMedia_sompReadOctet(somSelf,ev,i1) \
	SOMPFileMediaAbstract_sompReadOctet(somSelf,ev,i1)

/*
 * Override method: sompReadShort
 */
#define SOMPBinaryFileMedia_sompReadShort(somSelf,ev,i2) \
	SOMPFileMediaAbstract_sompReadShort(somSelf,ev,i2)

/*
 * Override method: sompReadUnsignedShort
 */
#define SOMPBinaryFileMedia_sompReadUnsignedShort(somSelf,ev,u2) \
	SOMPFileMediaAbstract_sompReadUnsignedShort(somSelf,ev,u2)

/*
 * Override method: sompReadLong
 */
#define SOMPBinaryFileMedia_sompReadLong(somSelf,ev,i4) \
	SOMPFileMediaAbstract_sompReadLong(somSelf,ev,i4)

/*
 * Override method: sompReadUnsignedLong
 */
#define SOMPBinaryFileMedia_sompReadUnsignedLong(somSelf,ev,i4) \
	SOMPFileMediaAbstract_sompReadUnsignedLong(somSelf,ev,i4)

/*
 * Override method: sompReadDouble
 */
#define SOMPBinaryFileMedia_sompReadDouble(somSelf,ev,f8) \
	SOMPFileMediaAbstract_sompReadDouble(somSelf,ev,f8)

/*
 * Override method: sompReadFloat
 */
#define SOMPBinaryFileMedia_sompReadFloat(somSelf,ev,f4) \
	SOMPFileMediaAbstract_sompReadFloat(somSelf,ev,f4)

/*
 * Override method: sompReadString
 */
#define SOMPBinaryFileMedia_sompReadString(somSelf,ev,rstring) \
	SOMPFileMediaAbstract_sompReadString(somSelf,ev,rstring)

/*
 * Override method: sompReadStringToBuffer
 */
#define SOMPBinaryFileMedia_sompReadStringToBuffer(somSelf,ev,buffer,bufsize) \
	SOMPFileMediaAbstract_sompReadStringToBuffer(somSelf,ev,buffer,bufsize)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMPBinaryFileMedia_sompInitSpecific SOMPAsciiMediaInterface_sompInitSpecific
#define SOMPBinaryFileMedia_sompStat SOMPAsciiMediaInterface_sompStat
#define SOMPBinaryFileMedia_sompQueryBlockSize SOMPAsciiMediaInterface_sompQueryBlockSize
#define SOMPBinaryFileMedia_sompGetMediaName SOMPAsciiMediaInterface_sompGetMediaName
#define SOMPBinaryFileMedia_sompInitReadWrite SOMPFileMediaAbstract_sompInitReadWrite
#define SOMPBinaryFileMedia_sompInitReadOnly SOMPFileMediaAbstract_sompInitReadOnly
#define SOMPBinaryFileMedia_sompOpen SOMPMediaInterfaceAbstract_sompOpen
#define SOMPBinaryFileMedia_sompClose SOMPMediaInterfaceAbstract_sompClose
#define SOMPBinaryFileMedia_sompSeekPosition SOMPFileMediaAbstract_sompSeekPosition
#define SOMPBinaryFileMedia_sompSeekPositionRel SOMPFileMediaAbstract_sompSeekPositionRel
#define SOMPBinaryFileMedia_sompGetOffset SOMPFileMediaAbstract_sompGetOffset
#define SOMPBinaryFileMedia_sompReadBytes SOMPFileMediaAbstract_sompReadBytes
#define SOMPBinaryFileMedia_sompWriteBytes SOMPFileMediaAbstract_sompWriteBytes
#define SOMPBinaryFileMedia_somInit SOMObject_somInit
#define SOMPBinaryFileMedia_somUninit SOMObject_somUninit
#define SOMPBinaryFileMedia_sompWriteCharacter SOMPFileMediaAbstract_sompWriteCharacter
#define SOMPBinaryFileMedia_sompWriteSomobject SOMPFileMediaAbstract_sompWriteSomobject
#define SOMPBinaryFileMedia_sompReadCharacter SOMPFileMediaAbstract_sompReadCharacter
#define SOMPBinaryFileMedia_sompReadSomobject SOMPFileMediaAbstract_sompReadSomobject
#define SOMPBinaryFileMedia_sompWriteLine SOMPFileMediaAbstract_sompWriteLine
#define SOMPBinaryFileMedia_sompReadLine SOMPFileMediaAbstract_sompReadLine
#define SOMPBinaryFileMedia_sompWriteTypeCode SOMPFileMediaAbstract_sompWriteTypeCode
#define SOMPBinaryFileMedia_sompReadTypeCode SOMPFileMediaAbstract_sompReadTypeCode
#define SOMPBinaryFileMedia_somDefaultInit SOMObject_somDefaultInit
#define SOMPBinaryFileMedia_somDestruct SOMObject_somDestruct
#define SOMPBinaryFileMedia_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMPBinaryFileMedia_somDefaultAssign SOMObject_somDefaultAssign
#define SOMPBinaryFileMedia_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMPBinaryFileMedia_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMPBinaryFileMedia_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMPBinaryFileMedia_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMPBinaryFileMedia_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMPBinaryFileMedia_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMPBinaryFileMedia_somFree SOMObject_somFree
#define SOMPBinaryFileMedia_somGetClass SOMObject_somGetClass
#define SOMPBinaryFileMedia_somGetClassName SOMObject_somGetClassName
#define SOMPBinaryFileMedia_somGetSize SOMObject_somGetSize
#define SOMPBinaryFileMedia_somIsA SOMObject_somIsA
#define SOMPBinaryFileMedia_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMPBinaryFileMedia_somRespondsTo SOMObject_somRespondsTo
#define SOMPBinaryFileMedia_somDispatch SOMObject_somDispatch
#define SOMPBinaryFileMedia_somClassDispatch SOMObject_somClassDispatch
#define SOMPBinaryFileMedia_somCastObj SOMObject_somCastObj
#define SOMPBinaryFileMedia_somResetObj SOMObject_somResetObj
#define SOMPBinaryFileMedia_somDispatchV SOMObject_somDispatchV
#define SOMPBinaryFileMedia_somDispatchL SOMObject_somDispatchL
#define SOMPBinaryFileMedia_somDispatchA SOMObject_somDispatchA
#define SOMPBinaryFileMedia_somDispatchD SOMObject_somDispatchD
#define SOMPBinaryFileMedia_somPrintSelf SOMObject_somPrintSelf
#define SOMPBinaryFileMedia_somDumpSelf SOMObject_somDumpSelf
#define SOMPBinaryFileMedia_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMPBinaryFileMedia_h */
