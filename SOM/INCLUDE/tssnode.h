
/*
 * This file was generated by the SOM Compiler.
 * FileName: tssnode.h.
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
 * CLASS_NAME: somf_TSortedSequenceNode
 * 
 * DESCRIPTION: A TSortedSequenceNode is a node in a tree containing
 *              MOrderableCollectible elements.  It contains a key
 *              (the MOrderableCollectible) and a link to a left child and
 *              a right child.
 * 
 */


#ifndef SOM_somf_TSortedSequenceNode_h
#define SOM_somf_TSortedSequenceNode_h


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
#ifndef somf_TSortedSequenceNode
#define somf_TSortedSequenceNode SOMObject
#endif
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef somf_MOrderableCollectible
    #define somf_MOrderableCollectible SOMObject
#endif /* somf_MOrderableCollectible */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */

#include <morder.h>

#define somf_TSortedSequenceNode_MajorVersion 2
#define somf_TSortedSequenceNode_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define somf_TSortedSequenceNodeNewClass c
#pragma linkage(c, system)
#define somf_TSortedSequenceNodeClassData d
#define somf_TSortedSequenceNodeCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define somf_TSortedSequenceNode_classObj somf_TSortedSequenceNodeClassData.classObject
#define _somf_TSortedSequenceNode somf_TSortedSequenceNode_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK somf_TSortedSequenceNodeNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(somf_TSortedSequenceNodeNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct somf_TSortedSequenceNodeClassDataStructure {
	SOMClass *classObject;
	somMToken somfGetLeftChild;
	somMToken somfGetRightChild;
	somMToken somfGetParent;
	somMToken somfGetKey;
	somMToken somfGetRed;
	somMToken somfSetParent;
	somMToken somfSetLeftChild;
	somMToken somfSetRightChild;
	somMToken somfSetKey;
	somMToken somfSetRed;
	somMToken somfSetRedOn;
	somMToken somfTSortedSequenceNodeInitTMT;
	somMToken somfTSortedSequenceNodeInitTM;
	somMToken somfTSortedSequenceNodeInitT;
} SOMDLINK somf_TSortedSequenceNodeClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct somf_TSortedSequenceNodeCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK somf_TSortedSequenceNodeCClassData;

/*
 * New and Renew macros for somf_TSortedSequenceNode
 */
#define somf_TSortedSequenceNodeNew() \
   ( _somf_TSortedSequenceNode ? \
	_somNew(_somf_TSortedSequenceNode) \
	: ( somf_TSortedSequenceNodeNewClass(\
		somf_TSortedSequenceNode_MajorVersion, \
		somf_TSortedSequenceNode_MinorVersion),\
	   _somNew(_somf_TSortedSequenceNode)))
#define somf_TSortedSequenceNodeRenew(buf) \
   ( _somf_TSortedSequenceNode ? \
	_somRenew(_somf_TSortedSequenceNode, buf) \
	: ( somf_TSortedSequenceNodeNewClass(\
		somf_TSortedSequenceNode_MajorVersion, \
		somf_TSortedSequenceNode_MinorVersion),\
	   _somRenew(_somf_TSortedSequenceNode, buf)))

/*
 * Override method: somInit
 */
#define somf_TSortedSequenceNode_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * New Method: somfTSortedSequenceNodeInitTMT
 */
typedef somf_TSortedSequenceNode*   SOMLINK somTP_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTMT(somf_TSortedSequenceNode *somSelf, Environment *ev, 
		somf_TSortedSequenceNode* n1, 
		somf_MOrderableCollectible* obj, 
		somf_TSortedSequenceNode* n2);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTMT, system)
typedef somTP_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTMT *somTD_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTMT;
/*
 *  Initialize the new TSortedSequenceNode
 */
#define somMD_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTMT "::somf_TSortedSequenceNode::somfTSortedSequenceNodeInitTMT"
#define somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTMT(somSelf,ev,n1,obj,n2) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfTSortedSequenceNodeInitTMT) \
	(somSelf,ev,n1,obj,n2))
#ifndef SOMGD_somfTSortedSequenceNodeInitTMT
    #if (defined(_somfTSortedSequenceNodeInitTMT) || defined(__somfTSortedSequenceNodeInitTMT))
        #undef _somfTSortedSequenceNodeInitTMT
        #undef __somfTSortedSequenceNodeInitTMT
        #define SOMGD_somfTSortedSequenceNodeInitTMT 1
    #else
        #define _somfTSortedSequenceNodeInitTMT somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTMT
    #endif /* _somfTSortedSequenceNodeInitTMT */
#endif /* SOMGD_somfTSortedSequenceNodeInitTMT */

/*
 * New Method: somfTSortedSequenceNodeInitTM
 */
typedef somf_TSortedSequenceNode*   SOMLINK somTP_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTM(somf_TSortedSequenceNode *somSelf, Environment *ev, 
		somf_TSortedSequenceNode* n1, 
		somf_MOrderableCollectible* obj);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTM, system)
typedef somTP_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTM *somTD_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTM;
/*
 *  Initialize the new TSortedSequenceNode
 */
#define somMD_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTM "::somf_TSortedSequenceNode::somfTSortedSequenceNodeInitTM"
#define somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTM(somSelf,ev,n1,obj) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfTSortedSequenceNodeInitTM) \
	(somSelf,ev,n1,obj))
#ifndef SOMGD_somfTSortedSequenceNodeInitTM
    #if (defined(_somfTSortedSequenceNodeInitTM) || defined(__somfTSortedSequenceNodeInitTM))
        #undef _somfTSortedSequenceNodeInitTM
        #undef __somfTSortedSequenceNodeInitTM
        #define SOMGD_somfTSortedSequenceNodeInitTM 1
    #else
        #define _somfTSortedSequenceNodeInitTM somf_TSortedSequenceNode_somfTSortedSequenceNodeInitTM
    #endif /* _somfTSortedSequenceNodeInitTM */
#endif /* SOMGD_somfTSortedSequenceNodeInitTM */

/*
 * New Method: somfTSortedSequenceNodeInitT
 */
typedef somf_TSortedSequenceNode*   SOMLINK somTP_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitT(somf_TSortedSequenceNode *somSelf, Environment *ev, 
		somf_TSortedSequenceNode* n1);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitT, system)
typedef somTP_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitT *somTD_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitT;
/*
 *  Initialize the new TSortedSequenceNode
 */
#define somMD_somf_TSortedSequenceNode_somfTSortedSequenceNodeInitT "::somf_TSortedSequenceNode::somfTSortedSequenceNodeInitT"
#define somf_TSortedSequenceNode_somfTSortedSequenceNodeInitT(somSelf,ev,n1) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfTSortedSequenceNodeInitT) \
	(somSelf,ev,n1))
#ifndef SOMGD_somfTSortedSequenceNodeInitT
    #if (defined(_somfTSortedSequenceNodeInitT) || defined(__somfTSortedSequenceNodeInitT))
        #undef _somfTSortedSequenceNodeInitT
        #undef __somfTSortedSequenceNodeInitT
        #define SOMGD_somfTSortedSequenceNodeInitT 1
    #else
        #define _somfTSortedSequenceNodeInitT somf_TSortedSequenceNode_somfTSortedSequenceNodeInitT
    #endif /* _somfTSortedSequenceNodeInitT */
#endif /* SOMGD_somfTSortedSequenceNodeInitT */

/*
 * New Method: somfGetLeftChild
 */
typedef somf_TSortedSequenceNode*   SOMLINK somTP_somf_TSortedSequenceNode_somfGetLeftChild(somf_TSortedSequenceNode *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfGetLeftChild, system)
typedef somTP_somf_TSortedSequenceNode_somfGetLeftChild *somTD_somf_TSortedSequenceNode_somfGetLeftChild;
/*
 *  Determine the left child of the node.
 */
#define somMD_somf_TSortedSequenceNode_somfGetLeftChild "::somf_TSortedSequenceNode::somfGetLeftChild"
#define somf_TSortedSequenceNode_somfGetLeftChild(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfGetLeftChild) \
	(somSelf,ev))
#ifndef SOMGD_somfGetLeftChild
    #if (defined(_somfGetLeftChild) || defined(__somfGetLeftChild))
        #undef _somfGetLeftChild
        #undef __somfGetLeftChild
        #define SOMGD_somfGetLeftChild 1
    #else
        #define _somfGetLeftChild somf_TSortedSequenceNode_somfGetLeftChild
    #endif /* _somfGetLeftChild */
#endif /* SOMGD_somfGetLeftChild */

/*
 * New Method: somfGetRightChild
 */
typedef somf_TSortedSequenceNode*   SOMLINK somTP_somf_TSortedSequenceNode_somfGetRightChild(somf_TSortedSequenceNode *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfGetRightChild, system)
typedef somTP_somf_TSortedSequenceNode_somfGetRightChild *somTD_somf_TSortedSequenceNode_somfGetRightChild;
/*
 *  Determine the right child of the node.
 */
#define somMD_somf_TSortedSequenceNode_somfGetRightChild "::somf_TSortedSequenceNode::somfGetRightChild"
#define somf_TSortedSequenceNode_somfGetRightChild(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfGetRightChild) \
	(somSelf,ev))
#ifndef SOMGD_somfGetRightChild
    #if (defined(_somfGetRightChild) || defined(__somfGetRightChild))
        #undef _somfGetRightChild
        #undef __somfGetRightChild
        #define SOMGD_somfGetRightChild 1
    #else
        #define _somfGetRightChild somf_TSortedSequenceNode_somfGetRightChild
    #endif /* _somfGetRightChild */
#endif /* SOMGD_somfGetRightChild */

/*
 * New Method: somfGetParent
 */
typedef somf_TSortedSequenceNode*   SOMLINK somTP_somf_TSortedSequenceNode_somfGetParent(somf_TSortedSequenceNode *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfGetParent, system)
typedef somTP_somf_TSortedSequenceNode_somfGetParent *somTD_somf_TSortedSequenceNode_somfGetParent;
/*
 *  Determine the parent of the node.
 */
#define somMD_somf_TSortedSequenceNode_somfGetParent "::somf_TSortedSequenceNode::somfGetParent"
#define somf_TSortedSequenceNode_somfGetParent(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfGetParent) \
	(somSelf,ev))
#ifndef SOMGD_somfGetParent
    #if (defined(_somfGetParent) || defined(__somfGetParent))
        #undef _somfGetParent
        #undef __somfGetParent
        #define SOMGD_somfGetParent 1
    #else
        #define _somfGetParent somf_TSortedSequenceNode_somfGetParent
    #endif /* _somfGetParent */
#endif /* SOMGD_somfGetParent */

/*
 * New Method: somfGetKey
 */
typedef somf_MOrderableCollectible*   SOMLINK somTP_somf_TSortedSequenceNode_somfGetKey(somf_TSortedSequenceNode *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfGetKey, system)
typedef somTP_somf_TSortedSequenceNode_somfGetKey *somTD_somf_TSortedSequenceNode_somfGetKey;
/*
 *  Determine the key to the node.
 */
#define somMD_somf_TSortedSequenceNode_somfGetKey "::somf_TSortedSequenceNode::somfGetKey"
#define somf_TSortedSequenceNode_somfGetKey(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfGetKey) \
	(somSelf,ev))
#ifndef SOMGD_somfGetKey
    #if (defined(_somfGetKey) || defined(__somfGetKey))
        #undef _somfGetKey
        #undef __somfGetKey
        #define SOMGD_somfGetKey 1
    #else
        #define _somfGetKey somf_TSortedSequenceNode_somfGetKey
    #endif /* _somfGetKey */
#endif /* SOMGD_somfGetKey */

/*
 * New Method: somfGetRed
 */
typedef boolean   SOMLINK somTP_somf_TSortedSequenceNode_somfGetRed(somf_TSortedSequenceNode *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfGetRed, system)
typedef somTP_somf_TSortedSequenceNode_somfGetRed *somTD_somf_TSortedSequenceNode_somfGetRed;
/*
 *  Determine if the node is red or black.
 */
#define somMD_somf_TSortedSequenceNode_somfGetRed "::somf_TSortedSequenceNode::somfGetRed"
#define somf_TSortedSequenceNode_somfGetRed(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfGetRed) \
	(somSelf,ev))
#ifndef SOMGD_somfGetRed
    #if (defined(_somfGetRed) || defined(__somfGetRed))
        #undef _somfGetRed
        #undef __somfGetRed
        #define SOMGD_somfGetRed 1
    #else
        #define _somfGetRed somf_TSortedSequenceNode_somfGetRed
    #endif /* _somfGetRed */
#endif /* SOMGD_somfGetRed */

/*
 * New Method: somfSetParent
 */
typedef void   SOMLINK somTP_somf_TSortedSequenceNode_somfSetParent(somf_TSortedSequenceNode *somSelf, Environment *ev, 
		somf_TSortedSequenceNode* n);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfSetParent, system)
typedef somTP_somf_TSortedSequenceNode_somfSetParent *somTD_somf_TSortedSequenceNode_somfSetParent;
/*
 *  Set the parent of the node.
 */
#define somMD_somf_TSortedSequenceNode_somfSetParent "::somf_TSortedSequenceNode::somfSetParent"
#define somf_TSortedSequenceNode_somfSetParent(somSelf,ev,n) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfSetParent) \
	(somSelf,ev,n))
#ifndef SOMGD_somfSetParent
    #if (defined(_somfSetParent) || defined(__somfSetParent))
        #undef _somfSetParent
        #undef __somfSetParent
        #define SOMGD_somfSetParent 1
    #else
        #define _somfSetParent somf_TSortedSequenceNode_somfSetParent
    #endif /* _somfSetParent */
#endif /* SOMGD_somfSetParent */

/*
 * New Method: somfSetLeftChild
 */
typedef void   SOMLINK somTP_somf_TSortedSequenceNode_somfSetLeftChild(somf_TSortedSequenceNode *somSelf, Environment *ev, 
		somf_TSortedSequenceNode* n);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfSetLeftChild, system)
typedef somTP_somf_TSortedSequenceNode_somfSetLeftChild *somTD_somf_TSortedSequenceNode_somfSetLeftChild;
/*
 *  Set the left child of the node.
 */
#define somMD_somf_TSortedSequenceNode_somfSetLeftChild "::somf_TSortedSequenceNode::somfSetLeftChild"
#define somf_TSortedSequenceNode_somfSetLeftChild(somSelf,ev,n) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfSetLeftChild) \
	(somSelf,ev,n))
#ifndef SOMGD_somfSetLeftChild
    #if (defined(_somfSetLeftChild) || defined(__somfSetLeftChild))
        #undef _somfSetLeftChild
        #undef __somfSetLeftChild
        #define SOMGD_somfSetLeftChild 1
    #else
        #define _somfSetLeftChild somf_TSortedSequenceNode_somfSetLeftChild
    #endif /* _somfSetLeftChild */
#endif /* SOMGD_somfSetLeftChild */

/*
 * New Method: somfSetRightChild
 */
typedef void   SOMLINK somTP_somf_TSortedSequenceNode_somfSetRightChild(somf_TSortedSequenceNode *somSelf, Environment *ev, 
		somf_TSortedSequenceNode* n);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfSetRightChild, system)
typedef somTP_somf_TSortedSequenceNode_somfSetRightChild *somTD_somf_TSortedSequenceNode_somfSetRightChild;
/*
 *  Set the right child of the node.
 */
#define somMD_somf_TSortedSequenceNode_somfSetRightChild "::somf_TSortedSequenceNode::somfSetRightChild"
#define somf_TSortedSequenceNode_somfSetRightChild(somSelf,ev,n) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfSetRightChild) \
	(somSelf,ev,n))
#ifndef SOMGD_somfSetRightChild
    #if (defined(_somfSetRightChild) || defined(__somfSetRightChild))
        #undef _somfSetRightChild
        #undef __somfSetRightChild
        #define SOMGD_somfSetRightChild 1
    #else
        #define _somfSetRightChild somf_TSortedSequenceNode_somfSetRightChild
    #endif /* _somfSetRightChild */
#endif /* SOMGD_somfSetRightChild */

/*
 * New Method: somfSetKey
 */
typedef void   SOMLINK somTP_somf_TSortedSequenceNode_somfSetKey(somf_TSortedSequenceNode *somSelf, Environment *ev, 
		somf_MOrderableCollectible* k);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfSetKey, system)
typedef somTP_somf_TSortedSequenceNode_somfSetKey *somTD_somf_TSortedSequenceNode_somfSetKey;
/*
 *  Set the key to the node.
 */
#define somMD_somf_TSortedSequenceNode_somfSetKey "::somf_TSortedSequenceNode::somfSetKey"
#define somf_TSortedSequenceNode_somfSetKey(somSelf,ev,k) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfSetKey) \
	(somSelf,ev,k))
#ifndef SOMGD_somfSetKey
    #if (defined(_somfSetKey) || defined(__somfSetKey))
        #undef _somfSetKey
        #undef __somfSetKey
        #define SOMGD_somfSetKey 1
    #else
        #define _somfSetKey somf_TSortedSequenceNode_somfSetKey
    #endif /* _somfSetKey */
#endif /* SOMGD_somfSetKey */

/*
 * New Method: somfSetRed
 */
typedef void   SOMLINK somTP_somf_TSortedSequenceNode_somfSetRed(somf_TSortedSequenceNode *somSelf, Environment *ev, 
		boolean on);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfSetRed, system)
typedef somTP_somf_TSortedSequenceNode_somfSetRed *somTD_somf_TSortedSequenceNode_somfSetRed;
/*
 *  Set the node to red or black.
 */
#define somMD_somf_TSortedSequenceNode_somfSetRed "::somf_TSortedSequenceNode::somfSetRed"
#define somf_TSortedSequenceNode_somfSetRed(somSelf,ev,on) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfSetRed) \
	(somSelf,ev,on))
#ifndef SOMGD_somfSetRed
    #if (defined(_somfSetRed) || defined(__somfSetRed))
        #undef _somfSetRed
        #undef __somfSetRed
        #define SOMGD_somfSetRed 1
    #else
        #define _somfSetRed somf_TSortedSequenceNode_somfSetRed
    #endif /* _somfSetRed */
#endif /* SOMGD_somfSetRed */

/*
 * New Method: somfSetRedOn
 */
typedef void   SOMLINK somTP_somf_TSortedSequenceNode_somfSetRedOn(somf_TSortedSequenceNode *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TSortedSequenceNode_somfSetRedOn, system)
typedef somTP_somf_TSortedSequenceNode_somfSetRedOn *somTD_somf_TSortedSequenceNode_somfSetRedOn;
/*
 *  Set the node to red.
 */
#define somMD_somf_TSortedSequenceNode_somfSetRedOn "::somf_TSortedSequenceNode::somfSetRedOn"
#define somf_TSortedSequenceNode_somfSetRedOn(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TSortedSequenceNode, somfSetRedOn) \
	(somSelf,ev))
#ifndef SOMGD_somfSetRedOn
    #if (defined(_somfSetRedOn) || defined(__somfSetRedOn))
        #undef _somfSetRedOn
        #undef __somfSetRedOn
        #define SOMGD_somfSetRedOn 1
    #else
        #define _somfSetRedOn somf_TSortedSequenceNode_somfSetRedOn
    #endif /* _somfSetRedOn */
#endif /* SOMGD_somfSetRedOn */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define somf_TSortedSequenceNode_somDefaultInit SOMObject_somDefaultInit
#define somf_TSortedSequenceNode_somDestruct SOMObject_somDestruct
#define somf_TSortedSequenceNode_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define somf_TSortedSequenceNode_somDefaultAssign SOMObject_somDefaultAssign
#define somf_TSortedSequenceNode_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define somf_TSortedSequenceNode_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define somf_TSortedSequenceNode_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define somf_TSortedSequenceNode_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define somf_TSortedSequenceNode_somDefaultVAssign SOMObject_somDefaultVAssign
#define somf_TSortedSequenceNode_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define somf_TSortedSequenceNode_somFree SOMObject_somFree
#define somf_TSortedSequenceNode_somUninit SOMObject_somUninit
#define somf_TSortedSequenceNode_somGetClass SOMObject_somGetClass
#define somf_TSortedSequenceNode_somGetClassName SOMObject_somGetClassName
#define somf_TSortedSequenceNode_somGetSize SOMObject_somGetSize
#define somf_TSortedSequenceNode_somIsA SOMObject_somIsA
#define somf_TSortedSequenceNode_somIsInstanceOf SOMObject_somIsInstanceOf
#define somf_TSortedSequenceNode_somRespondsTo SOMObject_somRespondsTo
#define somf_TSortedSequenceNode_somDispatch SOMObject_somDispatch
#define somf_TSortedSequenceNode_somClassDispatch SOMObject_somClassDispatch
#define somf_TSortedSequenceNode_somCastObj SOMObject_somCastObj
#define somf_TSortedSequenceNode_somResetObj SOMObject_somResetObj
#define somf_TSortedSequenceNode_somDispatchV SOMObject_somDispatchV
#define somf_TSortedSequenceNode_somDispatchL SOMObject_somDispatchL
#define somf_TSortedSequenceNode_somDispatchA SOMObject_somDispatchA
#define somf_TSortedSequenceNode_somDispatchD SOMObject_somDispatchD
#define somf_TSortedSequenceNode_somPrintSelf SOMObject_somPrintSelf
#define somf_TSortedSequenceNode_somDumpSelf SOMObject_somDumpSelf
#define somf_TSortedSequenceNode_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_somf_TSortedSequenceNode_h */
