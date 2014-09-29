
/*
 * This file was generated by the SOM Compiler.
 * FileName: scpass.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *   COMPONENT_NAME: some
 * 
 *   ORIGINS: 27
 * 
 * 
 *    25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1994,1996
 *   All Rights Reserved
 *   Licensed Materials - Property of IBM
 *   US Government Users Restricted Rights - Use, duplication or
 *   disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 *  @(#) somc/sctypes.h 2.7 12/26/95 16:26:17 [7/30/96 14:46:04]
 * 
 */


#ifndef SOM_SOMTPassthruEntryC_h
#define SOM_SOMTPassthruEntryC_h


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
#ifndef SOMTPassthruEntryC
#define SOMTPassthruEntryC SOMObject
#endif
#include <scentry.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef SOMTEntryC
    #define SOMTEntryC SOMObject
#endif /* SOMTEntryC */
#ifndef SOMTEmitC
    #define SOMTEmitC SOMObject
#endif /* SOMTEmitC */
#ifndef SOMTMetaClassEntryC
    #define SOMTMetaClassEntryC SOMObject
#endif /* SOMTMetaClassEntryC */
#ifndef SOMTAttributeEntryC
    #define SOMTAttributeEntryC SOMObject
#endif /* SOMTAttributeEntryC */
#ifndef SOMTTypedefEntryC
    #define SOMTTypedefEntryC SOMObject
#endif /* SOMTTypedefEntryC */
#ifndef SOMTBaseClassEntryC
    #define SOMTBaseClassEntryC SOMObject
#endif /* SOMTBaseClassEntryC */
#ifndef SOMTPassthruEntryC
    #define SOMTPassthruEntryC SOMObject
#endif /* SOMTPassthruEntryC */
#ifndef SOMTDataEntryC
    #define SOMTDataEntryC SOMObject
#endif /* SOMTDataEntryC */
#ifndef SOMTMethodEntryC
    #define SOMTMethodEntryC SOMObject
#endif /* SOMTMethodEntryC */
#ifndef SOMTClassEntryC
    #define SOMTClassEntryC SOMObject
#endif /* SOMTClassEntryC */
#ifndef SOMTModuleEntryC
    #define SOMTModuleEntryC SOMObject
#endif /* SOMTModuleEntryC */
#ifndef SOMTParameterEntryC
    #define SOMTParameterEntryC SOMObject
#endif /* SOMTParameterEntryC */
#ifndef SOMTStructEntryC
    #define SOMTStructEntryC SOMObject
#endif /* SOMTStructEntryC */
#ifndef SOMTUnionEntryC
    #define SOMTUnionEntryC SOMObject
#endif /* SOMTUnionEntryC */
#ifndef SOMTEnumEntryC
    #define SOMTEnumEntryC SOMObject
#endif /* SOMTEnumEntryC */
#ifndef SOMTConstEntryC
    #define SOMTConstEntryC SOMObject
#endif /* SOMTConstEntryC */
#ifndef SOMTSequenceEntryC
    #define SOMTSequenceEntryC SOMObject
#endif /* SOMTSequenceEntryC */
#ifndef SOMTStringEntryC
    #define SOMTStringEntryC SOMObject
#endif /* SOMTStringEntryC */
#ifndef SOMTEnumNameEntryC
    #define SOMTEnumNameEntryC SOMObject
#endif /* SOMTEnumNameEntryC */
#ifndef SOMTCommonEntryC
    #define SOMTCommonEntryC SOMObject
#endif /* SOMTCommonEntryC */
#ifndef SOMTUserDefinedTypeEntryC
    #define SOMTUserDefinedTypeEntryC SOMObject
#endif /* SOMTUserDefinedTypeEntryC */

/*
 * End of bindings for IDL types.
 */

#define SOMTPassthruEntryC_MajorVersion 2
#define SOMTPassthruEntryC_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMTPassthruEntryCNewClass c
#pragma linkage(c, system)
#define SOMTPassthruEntryCClassData d
#define SOMTPassthruEntryCCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMTPassthruEntryC_classObj SOMTPassthruEntryCClassData.classObject
#define _SOMTPassthruEntryC SOMTPassthruEntryC_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMTPassthruEntryCNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMTPassthruEntryCNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMTPassthruEntryCClassDataStructure {
	SOMClass *classObject;
	somMToken _get_somtPassthruBody;
	somMToken _get_somtPassthruTarget;
	somMToken _get_somtPassthruLanguage;
	somMToken somtIsBeforePassthru;
} SOMDLINK SOMTPassthruEntryCClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMTPassthruEntryCCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMTPassthruEntryCCClassData;

/*
 * New and Renew macros for SOMTPassthruEntryC
 */
#define SOMTPassthruEntryCNew() \
   ( _SOMTPassthruEntryC ? \
	_somNew(_SOMTPassthruEntryC) \
	: ( SOMTPassthruEntryCNewClass(\
		SOMTPassthruEntryC_MajorVersion, \
		SOMTPassthruEntryC_MinorVersion),\
	   _somNew(_SOMTPassthruEntryC)))
#define SOMTPassthruEntryCRenew(buf) \
   ( _SOMTPassthruEntryC ? \
	_somRenew(_SOMTPassthruEntryC, buf) \
	: ( SOMTPassthruEntryCNewClass(\
		SOMTPassthruEntryC_MajorVersion, \
		SOMTPassthruEntryC_MinorVersion),\
	   _somRenew(_SOMTPassthruEntryC, buf)))

/*
 * Override method: somtSetSymbolsOnEntry
 */
#define SOMTPassthruEntryC_somtSetSymbolsOnEntry(somSelf,emitter,prefix) \
	SOMTEntryC_somtSetSymbolsOnEntry(somSelf,emitter,prefix)

/*
 * Override method: somDumpSelfInt
 */
#define SOMTPassthruEntryC_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * New Method: _get_somtPassthruBody
 */
typedef string   SOMLINK somTP_SOMTPassthruEntryC__get_somtPassthruBody(SOMTPassthruEntryC *somSelf);
#pragma linkage(somTP_SOMTPassthruEntryC__get_somtPassthruBody, system)
typedef somTP_SOMTPassthruEntryC__get_somtPassthruBody *somTD_SOMTPassthruEntryC__get_somtPassthruBody;
/*
 *  The source content text of this passthru entry without
 *  any modification. Newlines that were present in the source will
 *  still be present.
 */
#define somMD_SOMTPassthruEntryC__get_somtPassthruBody "::SOMTPassthruEntryC::_get_somtPassthruBody"
#define SOMTPassthruEntryC__get_somtPassthruBody(somSelf) \
    (SOM_Resolve(somSelf, SOMTPassthruEntryC, _get_somtPassthruBody) \
	(somSelf))
#ifndef SOMGD_get_somtPassthruBody
    #if (defined(_get_somtPassthruBody) || defined(__get_somtPassthruBody))
        #undef _get_somtPassthruBody
        #undef __get_somtPassthruBody
        #define SOMGD_get_somtPassthruBody 1
    #else
        #define __get_somtPassthruBody SOMTPassthruEntryC__get_somtPassthruBody
    #endif /* __get_somtPassthruBody */
#endif /* SOMGD_get_somtPassthruBody */

/*
 * New Method: _get_somtPassthruLanguage
 */
typedef string   SOMLINK somTP_SOMTPassthruEntryC__get_somtPassthruLanguage(SOMTPassthruEntryC *somSelf);
#pragma linkage(somTP_SOMTPassthruEntryC__get_somtPassthruLanguage, system)
typedef somTP_SOMTPassthruEntryC__get_somtPassthruLanguage *somTD_SOMTPassthruEntryC__get_somtPassthruLanguage;
/*
 *  Returns the name of the language for which this passthru entry
 *  is intended. Language names are always all upper case.
 */
#define somMD_SOMTPassthruEntryC__get_somtPassthruLanguage "::SOMTPassthruEntryC::_get_somtPassthruLanguage"
#define SOMTPassthruEntryC__get_somtPassthruLanguage(somSelf) \
    (SOM_Resolve(somSelf, SOMTPassthruEntryC, _get_somtPassthruLanguage) \
	(somSelf))
#ifndef SOMGD_get_somtPassthruLanguage
    #if (defined(_get_somtPassthruLanguage) || defined(__get_somtPassthruLanguage))
        #undef _get_somtPassthruLanguage
        #undef __get_somtPassthruLanguage
        #define SOMGD_get_somtPassthruLanguage 1
    #else
        #define __get_somtPassthruLanguage SOMTPassthruEntryC__get_somtPassthruLanguage
    #endif /* __get_somtPassthruLanguage */
#endif /* SOMGD_get_somtPassthruLanguage */

/*
 * New Method: _get_somtPassthruTarget
 */
typedef string   SOMLINK somTP_SOMTPassthruEntryC__get_somtPassthruTarget(SOMTPassthruEntryC *somSelf);
#pragma linkage(somTP_SOMTPassthruEntryC__get_somtPassthruTarget, system)
typedef somTP_SOMTPassthruEntryC__get_somtPassthruTarget *somTD_SOMTPassthruEntryC__get_somtPassthruTarget;
/*
 *  Returns the target for this passthru entry.
 */
#define somMD_SOMTPassthruEntryC__get_somtPassthruTarget "::SOMTPassthruEntryC::_get_somtPassthruTarget"
#define SOMTPassthruEntryC__get_somtPassthruTarget(somSelf) \
    (SOM_Resolve(somSelf, SOMTPassthruEntryC, _get_somtPassthruTarget) \
	(somSelf))
#ifndef SOMGD_get_somtPassthruTarget
    #if (defined(_get_somtPassthruTarget) || defined(__get_somtPassthruTarget))
        #undef _get_somtPassthruTarget
        #undef __get_somtPassthruTarget
        #define SOMGD_get_somtPassthruTarget 1
    #else
        #define __get_somtPassthruTarget SOMTPassthruEntryC__get_somtPassthruTarget
    #endif /* __get_somtPassthruTarget */
#endif /* SOMGD_get_somtPassthruTarget */

/*
 * New Method: somtIsBeforePassthru
 */
typedef boolean   SOMLINK somTP_SOMTPassthruEntryC_somtIsBeforePassthru(SOMTPassthruEntryC *somSelf);
#pragma linkage(somTP_SOMTPassthruEntryC_somtIsBeforePassthru, system)
typedef somTP_SOMTPassthruEntryC_somtIsBeforePassthru *somTD_SOMTPassthruEntryC_somtIsBeforePassthru;
/*
 *  Returns 1 (true) if this passthru entry is to be put at the
 *  beginning of the file or 0 (false) if this passthru entry is to
 *  go later in the file.
 */
#define somMD_SOMTPassthruEntryC_somtIsBeforePassthru "::SOMTPassthruEntryC::somtIsBeforePassthru"
#define SOMTPassthruEntryC_somtIsBeforePassthru(somSelf) \
    (SOM_Resolve(somSelf, SOMTPassthruEntryC, somtIsBeforePassthru) \
	(somSelf))
#ifndef SOMGD_somtIsBeforePassthru
    #if (defined(_somtIsBeforePassthru) || defined(__somtIsBeforePassthru))
        #undef _somtIsBeforePassthru
        #undef __somtIsBeforePassthru
        #define SOMGD_somtIsBeforePassthru 1
    #else
        #define _somtIsBeforePassthru SOMTPassthruEntryC_somtIsBeforePassthru
    #endif /* _somtIsBeforePassthru */
#endif /* SOMGD_somtIsBeforePassthru */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMTPassthruEntryC__get_somtEntryName SOMTEntryC__get_somtEntryName
#define SOMTPassthruEntryC__set_somtEntryName SOMTEntryC__set_somtEntryName
#define SOMTPassthruEntryC__get_somtElementType SOMTEntryC__get_somtElementType
#define SOMTPassthruEntryC__set_somtElementType SOMTEntryC__set_somtElementType
#define SOMTPassthruEntryC__get_somtElementTypeName SOMTEntryC__get_somtElementTypeName
#define SOMTPassthruEntryC__get_somtEntryComment SOMTEntryC__get_somtEntryComment
#define SOMTPassthruEntryC__get_somtSourceLineNumber SOMTEntryC__get_somtSourceLineNumber
#define SOMTPassthruEntryC__get_somtTypeCode SOMTEntryC__get_somtTypeCode
#define SOMTPassthruEntryC__get_somtIsReference SOMTEntryC__get_somtIsReference
#define SOMTPassthruEntryC__get_somtIDLScopedName SOMTEntryC__get_somtIDLScopedName
#define SOMTPassthruEntryC__get_somtCScopedName SOMTEntryC__get_somtCScopedName
#define SOMTPassthruEntryC_somtGetModifierValue SOMTEntryC_somtGetModifierValue
#define SOMTPassthruEntryC_somtGetFirstModifier SOMTEntryC_somtGetFirstModifier
#define SOMTPassthruEntryC_somtGetNextModifier SOMTEntryC_somtGetNextModifier
#define SOMTPassthruEntryC_somtFormatModifier SOMTEntryC_somtFormatModifier
#define SOMTPassthruEntryC_somtGetModifierList SOMTEntryC_somtGetModifierList
#define SOMTPassthruEntryC_somtSetEntryStruct SOMTEntryC_somtSetEntryStruct
#define SOMTPassthruEntryC_somInit SOMObject_somInit
#define SOMTPassthruEntryC_somUninit SOMObject_somUninit
#define SOMTPassthruEntryC_somPrintSelf SOMObject_somPrintSelf
#define SOMTPassthruEntryC_somDumpSelf SOMObject_somDumpSelf
#define SOMTPassthruEntryC_somDefaultInit SOMObject_somDefaultInit
#define SOMTPassthruEntryC_somDestruct SOMObject_somDestruct
#define SOMTPassthruEntryC_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMTPassthruEntryC_somDefaultAssign SOMObject_somDefaultAssign
#define SOMTPassthruEntryC_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMTPassthruEntryC_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMTPassthruEntryC_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMTPassthruEntryC_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMTPassthruEntryC_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMTPassthruEntryC_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMTPassthruEntryC_somFree SOMObject_somFree
#define SOMTPassthruEntryC_somGetClass SOMObject_somGetClass
#define SOMTPassthruEntryC_somGetClassName SOMObject_somGetClassName
#define SOMTPassthruEntryC_somGetSize SOMObject_somGetSize
#define SOMTPassthruEntryC_somIsA SOMObject_somIsA
#define SOMTPassthruEntryC_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMTPassthruEntryC_somRespondsTo SOMObject_somRespondsTo
#define SOMTPassthruEntryC_somDispatch SOMObject_somDispatch
#define SOMTPassthruEntryC_somClassDispatch SOMObject_somClassDispatch
#define SOMTPassthruEntryC_somCastObj SOMObject_somCastObj
#define SOMTPassthruEntryC_somResetObj SOMObject_somResetObj
#define SOMTPassthruEntryC_somDispatchV SOMObject_somDispatchV
#define SOMTPassthruEntryC_somDispatchL SOMObject_somDispatchL
#define SOMTPassthruEntryC_somDispatchA SOMObject_somDispatchA
#define SOMTPassthruEntryC_somDispatchD SOMObject_somDispatchD
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMTPassthruEntryC_h */
