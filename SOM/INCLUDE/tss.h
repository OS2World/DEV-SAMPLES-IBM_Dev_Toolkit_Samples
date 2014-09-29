
/*
 * This file was generated by the SOM Compiler.
 * FileName: tss.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somuc
 * 
 *    ORIGINS: 82, 81, 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1996,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 *    Copyright � 1988, 1989 Apple Computer, Inc. All rights reserved.
 * 
 * CLASS_NAME: somf_TSortedSequence
 * 
 * DESCRIPTION: A TSortedSequence is a TSequence.  It is ordered based on
 *              how the elements in the collections relate to each other.
 *              Any element in the TSortedSequence is Less Than or Equal to
 *              the element in front of it, and Greater Than or Equal to
 *              the element behind it.
 * 
 */


#ifndef SOM_somf_TSortedSequence_h
#define SOM_somf_TSortedSequence_h


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
#ifndef somf_TSortedSequence
#define somf_TSortedSequence SOMObject
#endif
#include <tseq.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef somf_TIterator
    #define somf_TIterator SOMObject
#endif /* somf_TIterator */
#ifndef somf_TSortedSequenceNode
    #define somf_TSortedSequenceNode SOMObject
#endif /* somf_TSortedSequenceNode */
#ifndef somf_TSequenceIterator
    #define somf_TSequenceIterator SOMObject
#endif /* somf_TSequenceIterator */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */

#include <mcollect.h>
#include <morder.h>
#include <tssnode.h>

#define somf_TSortedSequence_MajorVersion 2
#define somf_TSortedSequence_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define somf_TSortedSequenceNewClass c
#pragma linkage(c, system)
#define somf_TSortedSequenceClassData d
#define somf_TSortedSequenceCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define somf_TSortedSequence_classObj somf_TSortedSequenceClassData.classObject
#define _somf_TSortedSequence somf_TSortedSequence_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK somf_TSortedSequenceNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(somf_TSortedSequenceNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct somf_TSortedSequenceClassDataStructure {
	SOMClass *classObject;
	somMToken somfCreateSequenceIterator;
	somMToken somfGetSequencingFunction;
	somMToken somfSetSequencingFunction;
	somMToken somfCreateSortedSequenceNode;
	somMToken somfRotate;
	somMToken somfSplit;
	somMToken somfBalance;
	somMToken somfInternalRemoveAll;
	somMToken somfInternalDeleteAll;
	somMToken somfAssign;
	somMToken somfTSortedSequenceInitF;
	somMToken somfTSortedSequenceInitS;
} SOMDLINK somf_TSortedSequenceClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct somf_TSortedSequenceCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK somf_TSortedSequenceCClassData;

/*
 * New and Renew macros for somf_TSortedSequence
 */
#define somf_TSortedSequenceNew() \
   ( _somf_TSortedSequence ? \
	_somNew(_somf_TSortedSequence) \
	: ( somf_TSortedSequenceNewClass(\
		somf_TSortedSequence_MajorVersion, \
		somf_TSortedSequence_MinorVersion),\
	   _somNew(_somf_TSortedSequence)))
#define somf_TSortedSequenceRenew(buf) \
   ( _somf_TSortedSequence ? \
	_somRenew(_somf_TSortedSequence, buf) \
	: ( somf_TSortedSequenceNewClass(\
		somf_TSortedSequence_MajorVersion, \
		somf_TSortedSequence_MinorVersion),\
	   _somRenew(_somf_TSortedSequence, buf)))

/*
 * Override method: somInit
 */
#define somf_TSortedSequence_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: somUninit
 */
#define somf_TSortedSequence_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * Override method: somfAdd
 */
#define somf_TSortedSequence_somfAdd(somSelf,ev,obj) \
	somf_TCollection_somfAdd(somSelf,ev,obj)

/*
 * Override method: somfRemove
 */
#define somf_TSortedSequence_somfRemove(somSelf,ev,obj) \
	somf_TCollection_somfRemove(somSelf,ev,obj)

/*
 * Override method: somfDeleteAll
 */
#define somf_TSortedSequence_somfDeleteAll(somSelf,ev) \
	somf_TCollection_somfDeleteAll(somSelf,ev)

/*
 * Override method: somfRemoveAll
 */
#define somf_TSortedSequence_somfRemoveAll(somSelf,ev) \
	somf_TCollection_somfRemoveAll(somSelf,ev)

/*
 * Override method: somfCount
 */
#define somf_TSortedSequence_somfCount(somSelf,ev) \
	somf_TCollection_somfCount(somSelf,ev)

/*
 * Override method: somfAfter
 */
#define somf_TSortedSequence_somfAfter(somSelf,ev,obj) \
	somf_TSequence_somfAfter(somSelf,ev,obj)

/*
 * Override method: somfBefore
 */
#define somf_TSortedSequence_somfBefore(somSelf,ev,obj) \
	somf_TSequence_somfBefore(somSelf,ev,obj)

/*
 * Override method: somfLast
 */
#define somf_TSortedSequence_somfLast(somSelf,ev) \
	somf_TSequence_somfLast(somSelf,ev)

/*
 * Override method: somfFirst
 */
#define somf_TSortedSequence_somfFirst(somSelf,ev) \
	somf_TSequence_somfFirst(somSelf,ev)

/*
 * Override method: somfMember
 */
#define somf_TSortedSequence_somfMember(somSelf,ev,obj) \
	somf_TCollection_somfMember(somSelf,ev,obj)

/*
 * Override method: somfCreateIterator
 */
#define somf_TSortedSequence_somfCreateIterator(somSelf,ev) \
	somf_TCollection_somfCreateIterator(somSelf,ev)

/*
 * Override method: somfOccurrencesOf
 */
#define somf_TSortedSequence_somfOccurrencesOf(somSelf,ev,obj) \
	somf_TSequence_somfOccurrencesOf(somSelf,ev,obj)

/*
 * New Method: somfTSortedSequenceInitF
 */
typedef somf_TSortedSequence*   SOMLINK somTP_somf_TSortedSequence_somfTSortedSequenceInitF(somf_TSortedSequence *somSelf, Environment *ev, 
		somf_MOrderableCollectible_somf_MBetterOrderableCompareFn testfn);
#pragma linkage(somTP_somf_TSortedSequence_somfTSortedSequenceInitF, system)
typedef somTP_somf_TSortedSequence_somfTSortedSequenceInitF *somTD_somf_TSortedSequence_somfTSortedSequenceInitF;
/*
 *  Initialize the new TSortedSequence
 */
#define somMD_somf_TSortedSequence_somfTSortedSequenceInitF "::somf_TSortedSequence::somfTSortedSequenceInitF"
#define somf_TSortedSequence_somfTSortedSequenceInitF(somSelf,ev,testfn) \
    (SOM_Resolve(somSelf, somf_TSortedSequence, somfTSortedSequenceInitF) \
	(somSelf,ev,testfn))
#ifndef SOMGD_somfTSortedSequenceInitF
    #if (defined(_somfTSortedSequenceInitF) || defined(__somfTSortedSequenceInitF))
        #undef _somfTSortedSequenceInitF
        #undef __somfTSortedSequenceInitF
        #define SOMGD_somfTSortedSequenceInitF 1
    #else
        #define _somfTSortedSequenceInitF somf_TSortedSequence_somfTSortedSequenceInitF
    #endif /* _somfTSortedSequenceInitF */
#endif /* SOMGD_somfTSortedSequenceInitF */

/*
 * New Method: somfTSortedSequenceInitS
 */
typedef somf_TSortedSequence*   SOMLINK somTP_somf_TSortedSequence_somfTSortedSequenceInitS(somf_TSortedSequence *somSelf, Environment *ev, 
		somf_TSortedSequence* s);
#pragma linkage(somTP_somf_TSortedSequence_somfTSortedSequenceInitS, system)
typedef somTP_somf_TSortedSequence_somfTSortedSequenceInitS *somTD_somf_TSortedSequence_somfTSortedSequenceInitS;
/*
 *  Initialize the new TSortedSequence
 */
#define somMD_somf_TSortedSequence_somfTSortedSequenceInitS "::somf_TSortedSequence::somfTSortedSequenceInitS"
#define somf_TSortedSequence_somfTSortedSequenceInitS(somSelf,ev,s) \
    (SOM_Resolve(somSelf, somf_TSortedSequence, somfTSortedSequenceInitS) \
	(somSelf,ev,s))
#ifndef SOMGD_somfTSortedSequenceInitS
    #if (defined(_somfTSortedSequenceInitS) || defined(__somfTSortedSequenceInitS))
        #undef _somfTSortedSequenceInitS
        #undef __somfTSortedSequenceInitS
        #define SOMGD_somfTSortedSequenceInitS 1
    #else
        #define _somfTSortedSequenceInitS somf_TSortedSequence_somfTSortedSequenceInitS
    #endif /* _somfTSortedSequenceInitS */
#endif /* SOMGD_somfTSortedSequenceInitS */

/*
 * New Method: somfAssign
 */
typedef void   SOMLINK somTP_somf_TSortedSequence_somfAssign(somf_TSortedSequence *somSelf, Environment *ev, 
		somf_TSortedSequence* s);
#pragma linkage(somTP_somf_TSortedSequence_somfAssign, system)
typedef somTP_somf_TSortedSequence_somfAssign *somTD_somf_TSortedSequence_somfAssign;
/*
 *  Assign the instance of this equal to the instance of source.
 */
#define somMD_somf_TSortedSequence_somfAssign "::somf_TSortedSequence::somfAssign"
#define somf_TSortedSequence_somfAssign(somSelf,ev,s) \
    (SOM_Resolve(somSelf, somf_TSortedSequence, somfAssign) \
	(somSelf,ev,s))
#ifndef SOMGD_somfAssign
    #if (defined(_somfAssign) || defined(__somfAssign))
        #undef _somfAssign
        #undef __somfAssign
        #define SOMGD_somfAssign 1
    #else
        #define _somfAssign somf_TSortedSequence_somfAssign
    #endif /* _somfAssign */
#endif /* SOMGD_somfAssign */

/*
 * New Method: somfCreateSequenceIterator
 */
typedef somf_TSequenceIterator*   SOMLINK somTP_somf_TSortedSequence_somfCreateSequenceIterator(somf_TSortedSequence *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TSortedSequence_somfCreateSequenceIterator, system)
typedef somTP_somf_TSortedSequence_somfCreateSequenceIterator *somTD_somf_TSortedSequence_somfCreateSequenceIterator;
/*
 *  This method returns a new iterator which is suitable for use in iterating
 *  over the objects in this collection.
 */
#define somMD_somf_TSortedSequence_somfCreateSequenceIterator "::somf_TSortedSequence::somfCreateSequenceIterator"
#define somf_TSortedSequence_somfCreateSequenceIterator(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TSortedSequence, somfCreateSequenceIterator) \
	(somSelf,ev))
#ifndef SOMGD_somfCreateSequenceIterator
    #if (defined(_somfCreateSequenceIterator) || defined(__somfCreateSequenceIterator))
        #undef _somfCreateSequenceIterator
        #undef __somfCreateSequenceIterator
        #define SOMGD_somfCreateSequenceIterator 1
    #else
        #define _somfCreateSequenceIterator somf_TSortedSequence_somfCreateSequenceIterator
    #endif /* _somfCreateSequenceIterator */
#endif /* SOMGD_somfCreateSequenceIterator */

/*
 * New Method: somfGetSequencingFunction
 */
typedef somf_MOrderableCollectible_somf_MBetterOrderableCompareFn   SOMLINK somTP_somf_TSortedSequence_somfGetSequencingFunction(somf_TSortedSequence *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TSortedSequence_somfGetSequencingFunction, system)
typedef somTP_somf_TSortedSequence_somfGetSequencingFunction *somTD_somf_TSortedSequence_somfGetSequencingFunction;
/*
 *  Return a pointer to the function used to compare elements in the
 *  collection, and consequently determines the sequence of the collection.
 */
#define somMD_somf_TSortedSequence_somfGetSequencingFunction "::somf_TSortedSequence::somfGetSequencingFunction"
#define somf_TSortedSequence_somfGetSequencingFunction(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TSortedSequence, somfGetSequencingFunction) \
	(somSelf,ev))
#ifndef SOMGD_somfGetSequencingFunction
    #if (defined(_somfGetSequencingFunction) || defined(__somfGetSequencingFunction))
        #undef _somfGetSequencingFunction
        #undef __somfGetSequencingFunction
        #define SOMGD_somfGetSequencingFunction 1
    #else
        #define _somfGetSequencingFunction somf_TSortedSequence_somfGetSequencingFunction
    #endif /* _somfGetSequencingFunction */
#endif /* SOMGD_somfGetSequencingFunction */

/*
 * New Method: somfSetSequencingFunction
 */
typedef void   SOMLINK somTP_somf_TSortedSequence_somfSetSequencingFunction(somf_TSortedSequence *somSelf, Environment *ev, 
		somf_MOrderableCollectible_somf_MBetterOrderableCompareFn fn);
#pragma linkage(somTP_somf_TSortedSequence_somfSetSequencingFunction, system)
typedef somTP_somf_TSortedSequence_somfSetSequencingFunction *somTD_somf_TSortedSequence_somfSetSequencingFunction;
/*
 *  Sets the pointer to the function used to compare elements in the
 *  collection, and consequently determines the sequence of the collection.
 */
#define somMD_somf_TSortedSequence_somfSetSequencingFunction "::somf_TSortedSequence::somfSetSequencingFunction"
#define somf_TSortedSequence_somfSetSequencingFunction(somSelf,ev,fn) \
    (SOM_Resolve(somSelf, somf_TSortedSequence, somfSetSequencingFunction) \
	(somSelf,ev,fn))
#ifndef SOMGD_somfSetSequencingFunction
    #if (defined(_somfSetSequencingFunction) || defined(__somfSetSequencingFunction))
        #undef _somfSetSequencingFunction
        #undef __somfSetSequencingFunction
        #define SOMGD_somfSetSequencingFunction 1
    #else
        #define _somfSetSequencingFunction somf_TSortedSequence_somfSetSequencingFunction
    #endif /* _somfSetSequencingFunction */
#endif /* SOMGD_somfSetSequencingFunction */

/*
 * New Method: somfCreateSortedSequenceNode
 */
typedef somf_TSortedSequenceNode*   SOMLINK somTP_somf_TSortedSequence_somfCreateSortedSequenceNode(somf_TSortedSequence *somSelf, Environment *ev, 
		somf_TSortedSequenceNode* n1, 
		somf_MOrderableCollectible* obj, 
		somf_TSortedSequenceNode* n2);
#pragma linkage(somTP_somf_TSortedSequence_somfCreateSortedSequenceNode, system)
typedef somTP_somf_TSortedSequence_somfCreateSortedSequenceNode *somTD_somf_TSortedSequence_somfCreateSortedSequenceNode;
/*
 *  Create a new TSortedSequenceNode in the TSortedSequence.
 */
#define somMD_somf_TSortedSequence_somfCreateSortedSequenceNode "::somf_TSortedSequence::somfCreateSortedSequenceNode"
#define somf_TSortedSequence_somfCreateSortedSequenceNode(somSelf,ev,n1,obj,n2) \
    (SOM_Resolve(somSelf, somf_TSortedSequence, somfCreateSortedSequenceNode) \
	(somSelf,ev,n1,obj,n2))
#ifndef SOMGD_somfCreateSortedSequenceNode
    #if (defined(_somfCreateSortedSequenceNode) || defined(__somfCreateSortedSequenceNode))
        #undef _somfCreateSortedSequenceNode
        #undef __somfCreateSortedSequenceNode
        #define SOMGD_somfCreateSortedSequenceNode 1
    #else
        #define _somfCreateSortedSequenceNode somf_TSortedSequence_somfCreateSortedSequenceNode
    #endif /* _somfCreateSortedSequenceNode */
#endif /* SOMGD_somfCreateSortedSequenceNode */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define somf_TSortedSequence_somfTSequenceInit somf_TSequence_somfTSequenceInit
#define somf_TSortedSequence_somfAddAll somf_TCollection_somfAddAll
#define somf_TSortedSequence_somfTestFunction somf_TCollection_somfTestFunction
#define somf_TSortedSequence_somfSetTestFunction somf_TCollection_somfSetTestFunction
#define somf_TSortedSequence_somfTCollectionInit somf_TCollection_somfTCollectionInit
#define somf_TSortedSequence_somfIsEqual somf_MCollectible_somfIsEqual
#define somf_TSortedSequence_somfClone somf_MCollectible_somfClone
#define somf_TSortedSequence_somfClonePointer somf_MCollectible_somfClonePointer
#define somf_TSortedSequence_somfHash somf_MCollectible_somfHash
#define somf_TSortedSequence_somfIsSame somf_MCollectible_somfIsSame
#define somf_TSortedSequence_somfIsNotEqual somf_MCollectible_somfIsNotEqual
#define somf_TSortedSequence_somDefaultInit SOMObject_somDefaultInit
#define somf_TSortedSequence_somDestruct SOMObject_somDestruct
#define somf_TSortedSequence_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define somf_TSortedSequence_somDefaultAssign SOMObject_somDefaultAssign
#define somf_TSortedSequence_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define somf_TSortedSequence_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define somf_TSortedSequence_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define somf_TSortedSequence_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define somf_TSortedSequence_somDefaultVAssign SOMObject_somDefaultVAssign
#define somf_TSortedSequence_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define somf_TSortedSequence_somFree SOMObject_somFree
#define somf_TSortedSequence_somGetClass SOMObject_somGetClass
#define somf_TSortedSequence_somGetClassName SOMObject_somGetClassName
#define somf_TSortedSequence_somGetSize SOMObject_somGetSize
#define somf_TSortedSequence_somIsA SOMObject_somIsA
#define somf_TSortedSequence_somIsInstanceOf SOMObject_somIsInstanceOf
#define somf_TSortedSequence_somRespondsTo SOMObject_somRespondsTo
#define somf_TSortedSequence_somDispatch SOMObject_somDispatch
#define somf_TSortedSequence_somClassDispatch SOMObject_somClassDispatch
#define somf_TSortedSequence_somCastObj SOMObject_somCastObj
#define somf_TSortedSequence_somResetObj SOMObject_somResetObj
#define somf_TSortedSequence_somDispatchV SOMObject_somDispatchV
#define somf_TSortedSequence_somDispatchL SOMObject_somDispatchL
#define somf_TSortedSequence_somDispatchA SOMObject_somDispatchA
#define somf_TSortedSequence_somDispatchD SOMObject_somDispatchD
#define somf_TSortedSequence_somPrintSelf SOMObject_somPrintSelf
#define somf_TSortedSequence_somDumpSelf SOMObject_somDumpSelf
#define somf_TSortedSequence_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_somf_TSortedSequence_h */