
/*
 * This file was generated by the SOM Compiler.
 * FileName: scentry.h.
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


#ifndef SOM_SOMTEntryC_h
#define SOM_SOMTEntryC_h


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
#ifndef SOMTEntryC
#define SOMTEntryC SOMObject
#endif
/*
 *  A SOM class interface definition is compiled to produce a graph
 *  structure whose nodes are instances of <SOMTEntry> or its
 *  sub-classes.  Each entry is derived from some syntactic element of
 *  the definition source. The attributes defined in <SOMTEntryC>
 *  refer to this syntactic element in a fairly obvious way.
 * 
 */
#include <somobj.h>

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

/*
 * Passthru lines: File: "C.h", "after"
 */
#include <sctypes.h>
#include <scemit.h>
#include <sctmplt.h>

#define SOMTEntryC_MajorVersion 2
#define SOMTEntryC_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMTEntryCNewClass c
#pragma linkage(c, system)
#define SOMTEntryCClassData d
#define SOMTEntryCCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMTEntryC_classObj SOMTEntryCClassData.classObject
#define _SOMTEntryC SOMTEntryC_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMTEntryCNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMTEntryCNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMTEntryCClassDataStructure {
	SOMClass *classObject;
	somMToken _get_somtEntryName;
	somMToken _set_somtEntryName;
	somMToken _get_somtElementType;
	somMToken _set_somtElementType;
	somMToken _get_somtEntryComment;
	somMToken _get_somtSourceLineNumber;
	somMToken _get_somtTypeCode;
	somMToken _get_somtIsReference;
	somMToken somtGetModifierValue;
	somMToken somtGetFirstModifier;
	somMToken somtGetNextModifier;
	somMToken somtFormatModifier;
	somMToken somtGetModifierList;
	somMToken somtSetSymbolsOnEntry;
	somMToken somtSetEntryStruct;
	somMToken _get_somtEntryStruct;
	somMToken somtShowAssocEntry;
	somMToken _get_somtCScopedName;
	somMToken _get_somtIDLScopedName;
	somMToken _get_somtElementTypeName;
} SOMDLINK SOMTEntryCClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMTEntryCCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMTEntryCCClassData;

/*
 * New and Renew macros for SOMTEntryC
 */
#define SOMTEntryCNew() \
   ( _SOMTEntryC ? \
	_somNew(_SOMTEntryC) \
	: ( SOMTEntryCNewClass(\
		SOMTEntryC_MajorVersion, \
		SOMTEntryC_MinorVersion),\
	   _somNew(_SOMTEntryC)))
#define SOMTEntryCRenew(buf) \
   ( _SOMTEntryC ? \
	_somRenew(_SOMTEntryC, buf) \
	: ( SOMTEntryCNewClass(\
		SOMTEntryC_MajorVersion, \
		SOMTEntryC_MinorVersion),\
	   _somRenew(_SOMTEntryC, buf)))

/*
 * Override method: somInit
 */
#define SOMTEntryC_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: somUninit
 */
#define SOMTEntryC_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * Override method: somPrintSelf
 */
#define SOMTEntryC_somPrintSelf(somSelf) \
	SOMObject_somPrintSelf(somSelf)

/*
 * Override method: somDumpSelfInt
 */
#define SOMTEntryC_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * Override method: somDumpSelf
 */
#define SOMTEntryC_somDumpSelf(somSelf,level) \
	SOMObject_somDumpSelf(somSelf,level)

/*
 * New Method: _get_somtEntryName
 */
typedef string   SOMLINK somTP_SOMTEntryC__get_somtEntryName(SOMTEntryC *somSelf);
#pragma linkage(somTP_SOMTEntryC__get_somtEntryName, system)
typedef somTP_SOMTEntryC__get_somtEntryName *somTD_SOMTEntryC__get_somtEntryName;
/*
 *  The name associated with this entry.  Eg, the name of
 *  the data item, the class, the method, the type, etc.
 */
#define somMD_SOMTEntryC__get_somtEntryName "::SOMTEntryC::_get_somtEntryName"
#define SOMTEntryC__get_somtEntryName(somSelf) \
    (SOM_Resolve(somSelf, SOMTEntryC, _get_somtEntryName) \
	(somSelf))
#ifndef SOMGD_get_somtEntryName
    #if (defined(_get_somtEntryName) || defined(__get_somtEntryName))
        #undef _get_somtEntryName
        #undef __get_somtEntryName
        #define SOMGD_get_somtEntryName 1
    #else
        #define __get_somtEntryName SOMTEntryC__get_somtEntryName
    #endif /* __get_somtEntryName */
#endif /* SOMGD_get_somtEntryName */

/*
 * New Method: _set_somtEntryName
 */
typedef void   SOMLINK somTP_SOMTEntryC__set_somtEntryName(SOMTEntryC *somSelf, 
		string somtEntryName);
#pragma linkage(somTP_SOMTEntryC__set_somtEntryName, system)
typedef somTP_SOMTEntryC__set_somtEntryName *somTD_SOMTEntryC__set_somtEntryName;
/*
 *  The name associated with this entry.  Eg, the name of
 *  the data item, the class, the method, the type, etc.
 */
#define somMD_SOMTEntryC__set_somtEntryName "::SOMTEntryC::_set_somtEntryName"
#define SOMTEntryC__set_somtEntryName(somSelf,somtEntryName) \
    (SOM_Resolve(somSelf, SOMTEntryC, _set_somtEntryName) \
	(somSelf,somtEntryName))
#ifndef SOMGD_set_somtEntryName
    #if (defined(_set_somtEntryName) || defined(__set_somtEntryName))
        #undef _set_somtEntryName
        #undef __set_somtEntryName
        #define SOMGD_set_somtEntryName 1
    #else
        #define __set_somtEntryName SOMTEntryC__set_somtEntryName
    #endif /* __set_somtEntryName */
#endif /* SOMGD_set_somtEntryName */

/*
 * New Method: _get_somtElementType
 */
typedef SOMTTypes   SOMLINK somTP_SOMTEntryC__get_somtElementType(SOMTEntryC *somSelf);
#pragma linkage(somTP_SOMTEntryC__get_somtElementType, system)
typedef somTP_SOMTEntryC__get_somtElementType *somTD_SOMTEntryC__get_somtElementType;
/*
 *  Returns the type of this entry.
 *  This is not datatype, but entry type (method, class,
 *  passthru, etc.). The value is defined by SOMTTypes.
 */
#define somMD_SOMTEntryC__get_somtElementType "::SOMTEntryC::_get_somtElementType"
#define SOMTEntryC__get_somtElementType(somSelf) \
    (SOM_Resolve(somSelf, SOMTEntryC, _get_somtElementType) \
	(somSelf))
#ifndef SOMGD_get_somtElementType
    #if (defined(_get_somtElementType) || defined(__get_somtElementType))
        #undef _get_somtElementType
        #undef __get_somtElementType
        #define SOMGD_get_somtElementType 1
    #else
        #define __get_somtElementType SOMTEntryC__get_somtElementType
    #endif /* __get_somtElementType */
#endif /* SOMGD_get_somtElementType */

/*
 * New Method: _set_somtElementType
 */
typedef void   SOMLINK somTP_SOMTEntryC__set_somtElementType(SOMTEntryC *somSelf, 
		SOMTTypes somtElementType);
#pragma linkage(somTP_SOMTEntryC__set_somtElementType, system)
typedef somTP_SOMTEntryC__set_somtElementType *somTD_SOMTEntryC__set_somtElementType;
/*
 *  Returns the type of this entry.
 *  This is not datatype, but entry type (method, class,
 *  passthru, etc.). The value is defined by SOMTTypes.
 */
#define somMD_SOMTEntryC__set_somtElementType "::SOMTEntryC::_set_somtElementType"
#define SOMTEntryC__set_somtElementType(somSelf,somtElementType) \
    (SOM_Resolve(somSelf, SOMTEntryC, _set_somtElementType) \
	(somSelf,somtElementType))
#ifndef SOMGD_set_somtElementType
    #if (defined(_set_somtElementType) || defined(__set_somtElementType))
        #undef _set_somtElementType
        #undef __set_somtElementType
        #define SOMGD_set_somtElementType 1
    #else
        #define __set_somtElementType SOMTEntryC__set_somtElementType
    #endif /* __set_somtElementType */
#endif /* SOMGD_set_somtElementType */

/*
 * New Method: _get_somtElementTypeName
 */
typedef string   SOMLINK somTP_SOMTEntryC__get_somtElementTypeName(SOMTEntryC *somSelf);
#pragma linkage(somTP_SOMTEntryC__get_somtElementTypeName, system)
typedef somTP_SOMTEntryC__get_somtElementTypeName *somTD_SOMTEntryC__get_somtElementTypeName;
/*
 *  String version of somtElementType.
 */
#define somMD_SOMTEntryC__get_somtElementTypeName "::SOMTEntryC::_get_somtElementTypeName"
#define SOMTEntryC__get_somtElementTypeName(somSelf) \
    (SOM_Resolve(somSelf, SOMTEntryC, _get_somtElementTypeName) \
	(somSelf))
#ifndef SOMGD_get_somtElementTypeName
    #if (defined(_get_somtElementTypeName) || defined(__get_somtElementTypeName))
        #undef _get_somtElementTypeName
        #undef __get_somtElementTypeName
        #define SOMGD_get_somtElementTypeName 1
    #else
        #define __get_somtElementTypeName SOMTEntryC__get_somtElementTypeName
    #endif /* __get_somtElementTypeName */
#endif /* SOMGD_get_somtElementTypeName */

/*
 * New Method: _get_somtEntryComment
 */
typedef string   SOMLINK somTP_SOMTEntryC__get_somtEntryComment(SOMTEntryC *somSelf);
#pragma linkage(somTP_SOMTEntryC__get_somtEntryComment, system)
typedef somTP_SOMTEntryC__get_somtEntryComment *somTD_SOMTEntryC__get_somtEntryComment;
/*
 *  Returns the comment associated with this entry, or NULL is this
 *  entry has no associated comment.  Comments will have comment
 *  delimitors removed, but will retain newline characters as
 *  specified in the source file. (use smLookupComment)
 */
#define somMD_SOMTEntryC__get_somtEntryComment "::SOMTEntryC::_get_somtEntryComment"
#define SOMTEntryC__get_somtEntryComment(somSelf) \
    (SOM_Resolve(somSelf, SOMTEntryC, _get_somtEntryComment) \
	(somSelf))
#ifndef SOMGD_get_somtEntryComment
    #if (defined(_get_somtEntryComment) || defined(__get_somtEntryComment))
        #undef _get_somtEntryComment
        #undef __get_somtEntryComment
        #define SOMGD_get_somtEntryComment 1
    #else
        #define __get_somtEntryComment SOMTEntryC__get_somtEntryComment
    #endif /* __get_somtEntryComment */
#endif /* SOMGD_get_somtEntryComment */

/*
 * New Method: _get_somtSourceLineNumber
 */
typedef unsigned long   SOMLINK somTP_SOMTEntryC__get_somtSourceLineNumber(SOMTEntryC *somSelf);
#pragma linkage(somTP_SOMTEntryC__get_somtSourceLineNumber, system)
typedef somTP_SOMTEntryC__get_somtSourceLineNumber *somTD_SOMTEntryC__get_somtSourceLineNumber;
/*
 *  Returns the line number in the source file where this entry's
 *  syntactic form ended.
 */
#define somMD_SOMTEntryC__get_somtSourceLineNumber "::SOMTEntryC::_get_somtSourceLineNumber"
#define SOMTEntryC__get_somtSourceLineNumber(somSelf) \
    (SOM_Resolve(somSelf, SOMTEntryC, _get_somtSourceLineNumber) \
	(somSelf))
#ifndef SOMGD_get_somtSourceLineNumber
    #if (defined(_get_somtSourceLineNumber) || defined(__get_somtSourceLineNumber))
        #undef _get_somtSourceLineNumber
        #undef __get_somtSourceLineNumber
        #define SOMGD_get_somtSourceLineNumber 1
    #else
        #define __get_somtSourceLineNumber SOMTEntryC__get_somtSourceLineNumber
    #endif /* __get_somtSourceLineNumber */
#endif /* SOMGD_get_somtSourceLineNumber */

/*
 * New Method: _get_somtTypeCode
 */
typedef TypeCode   SOMLINK somTP_SOMTEntryC__get_somtTypeCode(SOMTEntryC *somSelf);
#pragma linkage(somTP_SOMTEntryC__get_somtTypeCode, system)
typedef somTP_SOMTEntryC__get_somtTypeCode *somTD_SOMTEntryC__get_somtTypeCode;
/*
 *  The typecode, if appropriate, or NULL.
 */
#define somMD_SOMTEntryC__get_somtTypeCode "::SOMTEntryC::_get_somtTypeCode"
#define SOMTEntryC__get_somtTypeCode(somSelf) \
    (SOM_Resolve(somSelf, SOMTEntryC, _get_somtTypeCode) \
	(somSelf))
#ifndef SOMGD_get_somtTypeCode
    #if (defined(_get_somtTypeCode) || defined(__get_somtTypeCode))
        #undef _get_somtTypeCode
        #undef __get_somtTypeCode
        #define SOMGD_get_somtTypeCode 1
    #else
        #define __get_somtTypeCode SOMTEntryC__get_somtTypeCode
    #endif /* __get_somtTypeCode */
#endif /* SOMGD_get_somtTypeCode */

/*
 * New Method: _get_somtIsReference
 */
typedef boolean   SOMLINK somTP_SOMTEntryC__get_somtIsReference(SOMTEntryC *somSelf);
#pragma linkage(somTP_SOMTEntryC__get_somtIsReference, system)
typedef somTP_SOMTEntryC__get_somtIsReference *somTD_SOMTEntryC__get_somtIsReference;
/*
 *  Whether the entry is just a reference to the real type (TRUE)
 *  rather than a declaration of it (FALSE).
 */
#define somMD_SOMTEntryC__get_somtIsReference "::SOMTEntryC::_get_somtIsReference"
#define SOMTEntryC__get_somtIsReference(somSelf) \
    (SOM_Resolve(somSelf, SOMTEntryC, _get_somtIsReference) \
	(somSelf))
#ifndef SOMGD_get_somtIsReference
    #if (defined(_get_somtIsReference) || defined(__get_somtIsReference))
        #undef _get_somtIsReference
        #undef __get_somtIsReference
        #define SOMGD_get_somtIsReference 1
    #else
        #define __get_somtIsReference SOMTEntryC__get_somtIsReference
    #endif /* __get_somtIsReference */
#endif /* SOMGD_get_somtIsReference */

/*
 * New Method: _get_somtIDLScopedName
 */
typedef string   SOMLINK somTP_SOMTEntryC__get_somtIDLScopedName(SOMTEntryC *somSelf);
#pragma linkage(somTP_SOMTEntryC__get_somtIDLScopedName, system)
typedef somTP_SOMTEntryC__get_somtIDLScopedName *somTD_SOMTEntryC__get_somtIDLScopedName;
/*
 *  The IDL scoped name of the entry (using double colon as delimiter).
 */
#define somMD_SOMTEntryC__get_somtIDLScopedName "::SOMTEntryC::_get_somtIDLScopedName"
#define SOMTEntryC__get_somtIDLScopedName(somSelf) \
    (SOM_Resolve(somSelf, SOMTEntryC, _get_somtIDLScopedName) \
	(somSelf))
#ifndef SOMGD_get_somtIDLScopedName
    #if (defined(_get_somtIDLScopedName) || defined(__get_somtIDLScopedName))
        #undef _get_somtIDLScopedName
        #undef __get_somtIDLScopedName
        #define SOMGD_get_somtIDLScopedName 1
    #else
        #define __get_somtIDLScopedName SOMTEntryC__get_somtIDLScopedName
    #endif /* __get_somtIDLScopedName */
#endif /* SOMGD_get_somtIDLScopedName */

/*
 * New Method: _get_somtCScopedName
 */
typedef string   SOMLINK somTP_SOMTEntryC__get_somtCScopedName(SOMTEntryC *somSelf);
#pragma linkage(somTP_SOMTEntryC__get_somtCScopedName, system)
typedef somTP_SOMTEntryC__get_somtCScopedName *somTD_SOMTEntryC__get_somtCScopedName;
/*
 *  The C scoped name of the entry (using underscore as delimiter).
 */
#define somMD_SOMTEntryC__get_somtCScopedName "::SOMTEntryC::_get_somtCScopedName"
#define SOMTEntryC__get_somtCScopedName(somSelf) \
    (SOM_Resolve(somSelf, SOMTEntryC, _get_somtCScopedName) \
	(somSelf))
#ifndef SOMGD_get_somtCScopedName
    #if (defined(_get_somtCScopedName) || defined(__get_somtCScopedName))
        #undef _get_somtCScopedName
        #undef __get_somtCScopedName
        #define SOMGD_get_somtCScopedName 1
    #else
        #define __get_somtCScopedName SOMTEntryC__get_somtCScopedName
    #endif /* __get_somtCScopedName */
#endif /* SOMGD_get_somtCScopedName */

/*
 * New Method: somtGetModifierValue
 */
typedef string   SOMLINK somTP_SOMTEntryC_somtGetModifierValue(SOMTEntryC *somSelf, 
		string modifierName);
#pragma linkage(somTP_SOMTEntryC_somtGetModifierValue, system)
typedef somTP_SOMTEntryC_somtGetModifierValue *somTD_SOMTEntryC_somtGetModifierValue;
/*
 *  Returns the value of the named modifier if this entry has the
 *  named modifier and NULL otherwise. Note: if the modifier is
 *  present but does not have a value then a value of <'\1'> is
 *  returned.
 */
#define somMD_SOMTEntryC_somtGetModifierValue "::SOMTEntryC::somtGetModifierValue"
#define SOMTEntryC_somtGetModifierValue(somSelf,modifierName) \
    (SOM_Resolve(somSelf, SOMTEntryC, somtGetModifierValue) \
	(somSelf,modifierName))
#ifndef SOMGD_somtGetModifierValue
    #if (defined(_somtGetModifierValue) || defined(__somtGetModifierValue))
        #undef _somtGetModifierValue
        #undef __somtGetModifierValue
        #define SOMGD_somtGetModifierValue 1
    #else
        #define _somtGetModifierValue SOMTEntryC_somtGetModifierValue
    #endif /* _somtGetModifierValue */
#endif /* SOMGD_somtGetModifierValue */

/*
 * New Method: somtGetFirstModifier
 */
typedef boolean   SOMLINK somTP_SOMTEntryC_somtGetFirstModifier(SOMTEntryC *somSelf, 
		string* modifierName, 
		string* modifierValue);
#pragma linkage(somTP_SOMTEntryC_somtGetFirstModifier, system)
typedef somTP_SOMTEntryC_somtGetFirstModifier *somTD_SOMTEntryC_somtGetFirstModifier;
/*
 *  Returns the first modifier associated with this entry.  1 (true)
 *  is returned if the entry has at least one modifier and 0 (false)
 *  otherwise.
 */
#define somMD_SOMTEntryC_somtGetFirstModifier "::SOMTEntryC::somtGetFirstModifier"
#define SOMTEntryC_somtGetFirstModifier(somSelf,modifierName,modifierValue) \
    (SOM_Resolve(somSelf, SOMTEntryC, somtGetFirstModifier) \
	(somSelf,modifierName,modifierValue))
#ifndef SOMGD_somtGetFirstModifier
    #if (defined(_somtGetFirstModifier) || defined(__somtGetFirstModifier))
        #undef _somtGetFirstModifier
        #undef __somtGetFirstModifier
        #define SOMGD_somtGetFirstModifier 1
    #else
        #define _somtGetFirstModifier SOMTEntryC_somtGetFirstModifier
    #endif /* _somtGetFirstModifier */
#endif /* SOMGD_somtGetFirstModifier */

/*
 * New Method: somtGetNextModifier
 */
typedef boolean   SOMLINK somTP_SOMTEntryC_somtGetNextModifier(SOMTEntryC *somSelf, 
		string* modifierName, 
		string* modifierValue);
#pragma linkage(somTP_SOMTEntryC_somtGetNextModifier, system)
typedef somTP_SOMTEntryC_somtGetNextModifier *somTD_SOMTEntryC_somtGetNextModifier;
/*
 *  Returns the next modifier (with respect to the last call to
 *  <somtGetNextModifier> or <somtGetFirstModifier>)
 *  associated with this entry.  1 (true) is returned if the entry
 *  had another modifier and 0 (false) otherwise.
 */
#define somMD_SOMTEntryC_somtGetNextModifier "::SOMTEntryC::somtGetNextModifier"
#define SOMTEntryC_somtGetNextModifier(somSelf,modifierName,modifierValue) \
    (SOM_Resolve(somSelf, SOMTEntryC, somtGetNextModifier) \
	(somSelf,modifierName,modifierValue))
#ifndef SOMGD_somtGetNextModifier
    #if (defined(_somtGetNextModifier) || defined(__somtGetNextModifier))
        #undef _somtGetNextModifier
        #undef __somtGetNextModifier
        #define SOMGD_somtGetNextModifier 1
    #else
        #define _somtGetNextModifier SOMTEntryC_somtGetNextModifier
    #endif /* _somtGetNextModifier */
#endif /* SOMGD_somtGetNextModifier */

/*
 * New Method: somtFormatModifier
 */
typedef long   SOMLINK somTP_SOMTEntryC_somtFormatModifier(SOMTEntryC *somSelf, 
		string buffer, 
		string name, 
		string value);
#pragma linkage(somTP_SOMTEntryC_somtFormatModifier, system)
typedef somTP_SOMTEntryC_somtFormatModifier *somTD_SOMTEntryC_somtFormatModifier;
/*
 *  Formats the indicated name/value pair into buffer.  Buffer must
 *  be big enough to hold all the formatted pair, no checks are made.
 *  The number of characters added to buffer are returned (not
 *  including the trailing null character).
 *  Note: value may be null
 *  You will probably never call this method, it is provided so that
 *  you can override it to control the format returned in
 *  <somtGetModifierList>.
 */
#define somMD_SOMTEntryC_somtFormatModifier "::SOMTEntryC::somtFormatModifier"
#define SOMTEntryC_somtFormatModifier(somSelf,buffer,name,value) \
    (SOM_Resolve(somSelf, SOMTEntryC, somtFormatModifier) \
	(somSelf,buffer,name,value))
#ifndef SOMGD_somtFormatModifier
    #if (defined(_somtFormatModifier) || defined(__somtFormatModifier))
        #undef _somtFormatModifier
        #undef __somtFormatModifier
        #define SOMGD_somtFormatModifier 1
    #else
        #define _somtFormatModifier SOMTEntryC_somtFormatModifier
    #endif /* _somtFormatModifier */
#endif /* SOMGD_somtFormatModifier */

/*
 * New Method: somtGetModifierList
 */
typedef long   SOMLINK somTP_SOMTEntryC_somtGetModifierList(SOMTEntryC *somSelf, 
		string buffer);
#pragma linkage(somTP_SOMTEntryC_somtGetModifierList, system)
typedef somTP_SOMTEntryC_somtGetModifierList *somTD_SOMTEntryC_somtGetModifierList;
/*
 *  The modifiers for this entry are placed in <buffer> in template
 *  list form (newline separated).  Buffer must be big enough to
 *  hold all the modifiers, no checks are made. The number of
 *  modifiers is returned.
 */
#define somMD_SOMTEntryC_somtGetModifierList "::SOMTEntryC::somtGetModifierList"
#define SOMTEntryC_somtGetModifierList(somSelf,buffer) \
    (SOM_Resolve(somSelf, SOMTEntryC, somtGetModifierList) \
	(somSelf,buffer))
#ifndef SOMGD_somtGetModifierList
    #if (defined(_somtGetModifierList) || defined(__somtGetModifierList))
        #undef _somtGetModifierList
        #undef __somtGetModifierList
        #define SOMGD_somtGetModifierList 1
    #else
        #define _somtGetModifierList SOMTEntryC_somtGetModifierList
    #endif /* _somtGetModifierList */
#endif /* SOMGD_somtGetModifierList */

/*
 * New Method: somtSetSymbolsOnEntry
 */
typedef long   SOMLINK somTP_SOMTEntryC_somtSetSymbolsOnEntry(SOMTEntryC *somSelf, 
		SOMTEmitC* emitter, 
		string prefix);
#pragma linkage(somTP_SOMTEntryC_somtSetSymbolsOnEntry, system)
typedef somTP_SOMTEntryC_somtSetSymbolsOnEntry *somTD_SOMTEntryC_somtSetSymbolsOnEntry;
/*
 *  Places a number of symbol/value pairs in <t>.  All the symbols
 *  will begin with <prefix>.
 */
#define somMD_SOMTEntryC_somtSetSymbolsOnEntry "::SOMTEntryC::somtSetSymbolsOnEntry"
#define SOMTEntryC_somtSetSymbolsOnEntry(somSelf,emitter,prefix) \
    (SOM_Resolve(somSelf, SOMTEntryC, somtSetSymbolsOnEntry) \
	(somSelf,emitter,prefix))
#ifndef SOMGD_somtSetSymbolsOnEntry
    #if (defined(_somtSetSymbolsOnEntry) || defined(__somtSetSymbolsOnEntry))
        #undef _somtSetSymbolsOnEntry
        #undef __somtSetSymbolsOnEntry
        #define SOMGD_somtSetSymbolsOnEntry 1
    #else
        #define _somtSetSymbolsOnEntry SOMTEntryC_somtSetSymbolsOnEntry
    #endif /* _somtSetSymbolsOnEntry */
#endif /* SOMGD_somtSetSymbolsOnEntry */

/*
 * New Method: somtSetEntryStruct
 */
typedef void   SOMLINK somTP_SOMTEntryC_somtSetEntryStruct(SOMTEntryC *somSelf, 
		Entry* es);
#pragma linkage(somTP_SOMTEntryC_somtSetEntryStruct, system)
typedef somTP_SOMTEntryC_somtSetEntryStruct *somTD_SOMTEntryC_somtSetEntryStruct;
/*
 *  Sets the entry struct data member.
 *  Note, when overridding this method, it is important to call the
 *  parent version of the method first and then do your processing.
 */
#define somMD_SOMTEntryC_somtSetEntryStruct "::SOMTEntryC::somtSetEntryStruct"
#define SOMTEntryC_somtSetEntryStruct(somSelf,es) \
    (SOM_Resolve(somSelf, SOMTEntryC, somtSetEntryStruct) \
	(somSelf,es))
#ifndef SOMGD_somtSetEntryStruct
    #if (defined(_somtSetEntryStruct) || defined(__somtSetEntryStruct))
        #undef _somtSetEntryStruct
        #undef __somtSetEntryStruct
        #define SOMGD_somtSetEntryStruct 1
    #else
        #define _somtSetEntryStruct SOMTEntryC_somtSetEntryStruct
    #endif /* _somtSetEntryStruct */
#endif /* SOMGD_somtSetEntryStruct */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMTEntryC_somDefaultInit SOMObject_somDefaultInit
#define SOMTEntryC_somDestruct SOMObject_somDestruct
#define SOMTEntryC_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMTEntryC_somDefaultAssign SOMObject_somDefaultAssign
#define SOMTEntryC_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMTEntryC_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMTEntryC_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMTEntryC_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMTEntryC_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMTEntryC_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMTEntryC_somFree SOMObject_somFree
#define SOMTEntryC_somGetClass SOMObject_somGetClass
#define SOMTEntryC_somGetClassName SOMObject_somGetClassName
#define SOMTEntryC_somGetSize SOMObject_somGetSize
#define SOMTEntryC_somIsA SOMObject_somIsA
#define SOMTEntryC_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMTEntryC_somRespondsTo SOMObject_somRespondsTo
#define SOMTEntryC_somDispatch SOMObject_somDispatch
#define SOMTEntryC_somClassDispatch SOMObject_somClassDispatch
#define SOMTEntryC_somCastObj SOMObject_somCastObj
#define SOMTEntryC_somResetObj SOMObject_somResetObj
#define SOMTEntryC_somDispatchV SOMObject_somDispatchV
#define SOMTEntryC_somDispatchL SOMObject_somDispatchL
#define SOMTEntryC_somDispatchA SOMObject_somDispatchA
#define SOMTEntryC_somDispatchD SOMObject_somDispatchD
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMTEntryC_h */
