
/*
 * This file was generated by the SOM Compiler.
 * FileName: defedidl.h.
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


#ifndef SOM_SOMPAttrEncoderDecoder_h
#define SOM_SOMPAttrEncoderDecoder_h


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
#ifndef SOMPAttrEncoderDecoder
#define SOMPAttrEncoderDecoder SOMObject
#endif
/*
 *  This class is an EncoderDecoder which can save/restore the IDL
 *  attributes of a given persistent object.
 * 
 *  NOTE: This encoder/decoder assumes structure members have been
 *        aligned. This is the default for most compilers. See your
 *        compiler's documentation for discussion of aligned structures.
 *        The encoder/decoder will also handle structures
 *        which are naturally packed (e.g. a structure containing
 *        members which are all declared "long") however, some compilers
 *        allow options which will pack all structures. This encoder/
 *        decoder will not handle these structures.
 * 
 *  For example, suppose you have an IDL Interface definition with attributes:
 * 
 *   attribute string   name;
 *   attribute string   food;
 *   attribute long     weight;
 *   attribute short    height;
 * 
 *  You would make attributes "name" and "weight" persistent by specifying
 *  the following SOM modifiers in the SOM implementation section of the
 *  interface definition:
 * 
 *   name: persistent;
 *   weight: persistent;
 * 
 *  An encoder/decoder is an object which is paired with a persistent object
 *  and handles the reading/writing of that persistent object's
 *  data.
 * 
 *  A persistent object's encoder/decoder is instantiated by an
 *  IO Group Mgr at the moment that object is save/restored.
 *  typedef enum mytckind {tk_null, tk_long} TCKind;
 *  TCKind is a CORBA enumerated type. This type is definded by SOM
 *  however, not in IDL and therefore this declaration.
 */
#include <eda.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef SOMPMediaInterfaceAbstract
    #define SOMPMediaInterfaceAbstract SOMObject
#endif /* SOMPMediaInterfaceAbstract */
#ifndef SOMPPersistentObject
    #define SOMPPersistentObject SOMObject
#endif /* SOMPPersistentObject */
#ifndef Container
    #define Container SOMObject
#endif /* Container */
#ifndef Repository
    #define Repository SOMObject
#endif /* Repository */

/*
 * End of bindings for IDL types.
 */

#define SOMPAttrEncoderDecoder_MajorVersion 2
#define SOMPAttrEncoderDecoder_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMPAttrEncoderDecoderNewClass c
#pragma linkage(c, system)
#define SOMPAttrEncoderDecoderClassData d
#define SOMPAttrEncoderDecoderCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMPAttrEncoderDecoder_classObj SOMPAttrEncoderDecoderClassData.classObject
#define _SOMPAttrEncoderDecoder SOMPAttrEncoderDecoder_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMPAttrEncoderDecoderNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMPAttrEncoderDecoderNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMPAttrEncoderDecoderClassDataStructure {
	SOMClass *classObject;
	somMToken sompGetObjectAttributes;
	somMToken sompGetAttribute;
	somMToken sompSetObjectAttributes;
	somMToken sompSetAttribute;
	somMToken sompAttributeSize;
	somMToken sompStoreBuffer;
	somMToken sompRestoreBuffer;
	somMToken sompDispatchSet;
	somMToken sompPadSize;
	somMToken sompCallStyleIDL;
	somMToken sompLookupModifier;
} SOMDLINK SOMPAttrEncoderDecoderClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMPAttrEncoderDecoderCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMPAttrEncoderDecoderCClassData;

/*
 * New and Renew macros for SOMPAttrEncoderDecoder
 */
#define SOMPAttrEncoderDecoderNew() \
   ( _SOMPAttrEncoderDecoder ? \
	_somNew(_SOMPAttrEncoderDecoder) \
	: ( SOMPAttrEncoderDecoderNewClass(\
		SOMPAttrEncoderDecoder_MajorVersion, \
		SOMPAttrEncoderDecoder_MinorVersion),\
	   _somNew(_SOMPAttrEncoderDecoder)))
#define SOMPAttrEncoderDecoderRenew(buf) \
   ( _SOMPAttrEncoderDecoder ? \
	_somRenew(_SOMPAttrEncoderDecoder, buf) \
	: ( SOMPAttrEncoderDecoderNewClass(\
		SOMPAttrEncoderDecoder_MajorVersion, \
		SOMPAttrEncoderDecoder_MinorVersion),\
	   _somRenew(_SOMPAttrEncoderDecoder, buf)))

/*
 * Override method: somInit
 */
#define SOMPAttrEncoderDecoder_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: sompEDWrite
 */
#define SOMPAttrEncoderDecoder_sompEDWrite(somSelf,ev,thisMedia,thisObject) \
	SOMPEncoderDecoderAbstract_sompEDWrite(somSelf,ev,thisMedia,thisObject)

/*
 * Override method: sompEDRead
 */
#define SOMPAttrEncoderDecoder_sompEDRead(somSelf,ev,thisMedia,thisObject) \
	SOMPEncoderDecoderAbstract_sompEDRead(somSelf,ev,thisMedia,thisObject)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMPAttrEncoderDecoder_somDefaultInit SOMObject_somDefaultInit
#define SOMPAttrEncoderDecoder_somDestruct SOMObject_somDestruct
#define SOMPAttrEncoderDecoder_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMPAttrEncoderDecoder_somDefaultAssign SOMObject_somDefaultAssign
#define SOMPAttrEncoderDecoder_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMPAttrEncoderDecoder_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMPAttrEncoderDecoder_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMPAttrEncoderDecoder_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMPAttrEncoderDecoder_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMPAttrEncoderDecoder_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMPAttrEncoderDecoder_somFree SOMObject_somFree
#define SOMPAttrEncoderDecoder_somUninit SOMObject_somUninit
#define SOMPAttrEncoderDecoder_somGetClass SOMObject_somGetClass
#define SOMPAttrEncoderDecoder_somGetClassName SOMObject_somGetClassName
#define SOMPAttrEncoderDecoder_somGetSize SOMObject_somGetSize
#define SOMPAttrEncoderDecoder_somIsA SOMObject_somIsA
#define SOMPAttrEncoderDecoder_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMPAttrEncoderDecoder_somRespondsTo SOMObject_somRespondsTo
#define SOMPAttrEncoderDecoder_somDispatch SOMObject_somDispatch
#define SOMPAttrEncoderDecoder_somClassDispatch SOMObject_somClassDispatch
#define SOMPAttrEncoderDecoder_somCastObj SOMObject_somCastObj
#define SOMPAttrEncoderDecoder_somResetObj SOMObject_somResetObj
#define SOMPAttrEncoderDecoder_somDispatchV SOMObject_somDispatchV
#define SOMPAttrEncoderDecoder_somDispatchL SOMObject_somDispatchL
#define SOMPAttrEncoderDecoder_somDispatchA SOMObject_somDispatchA
#define SOMPAttrEncoderDecoder_somDispatchD SOMObject_somDispatchD
#define SOMPAttrEncoderDecoder_somPrintSelf SOMObject_somPrintSelf
#define SOMPAttrEncoderDecoder_somDumpSelf SOMObject_somDumpSelf
#define SOMPAttrEncoderDecoder_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMPAttrEncoderDecoder_h */
