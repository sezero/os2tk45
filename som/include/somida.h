
/*
 * This file was generated by the SOM Compiler.
 * FileName: somida.h.
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
 *    10H9767, 10H9769  (C) COPYRIGHT International Business Machines Corp. 1992,1994
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_SOMUTId_h
#define SOM_SOMUTId_h


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
#ifndef SOMUTId
#define SOMUTId SOMObject
#endif
/*
 *  This is the abstract base class for an ID. Only the interface is
 *  defined. Refer to derived classes for details.
 * 
 *  Instances of classes derived from this one should represent a
 *  value which can be used to identify something... such as an object,
 *  a file, a network node, etc, etc...
 * 
 */
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define SOMUTId_MajorVersion 2
#define SOMUTId_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMUTIdNewClass c
#pragma linkage(c, system)
#define SOMUTIdClassData d
#define SOMUTIdCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMUTId_classObj SOMUTIdClassData.classObject
#define _SOMUTId SOMUTId_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMUTIdNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMUTIdNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMUTIdClassDataStructure {
	SOMClass *classObject;
	somMToken somutSetIdId;
	somMToken somutEqualsId;
	somMToken somutCompareId;
	somMToken somutHashId;
} SOMDLINK SOMUTIdClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMUTIdCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMUTIdCClassData;

/*
 * New and Renew macros for SOMUTId
 */
#define SOMUTIdNew() \
   ( _SOMUTId ? \
	_somNew(_SOMUTId) \
	: ( SOMUTIdNewClass(\
		SOMUTId_MajorVersion, \
		SOMUTId_MinorVersion),\
	   _somNew(_SOMUTId)))
#define SOMUTIdRenew(buf) \
   ( _SOMUTId ? \
	_somRenew(_SOMUTId, buf) \
	: ( SOMUTIdNewClass(\
		SOMUTId_MajorVersion, \
		SOMUTId_MinorVersion),\
	   _somRenew(_SOMUTId, buf)))

/*
 * New Method: somutSetIdId
 */
typedef void   SOMLINK somTP_SOMUTId_somutSetIdId(SOMUTId *somSelf, Environment *ev, 
		SOMUTId* otherId);
#pragma linkage(somTP_SOMUTId_somutSetIdId, system)
typedef somTP_SOMUTId_somutSetIdId *somTD_SOMUTId_somutSetIdId;
/*
 *  Sets the ID equal to ID of the given ID.
 */
#define somMD_SOMUTId_somutSetIdId "::SOMUTId::somutSetIdId"
#define SOMUTId_somutSetIdId(somSelf,ev,otherId) \
    (SOM_Resolve(somSelf, SOMUTId, somutSetIdId) \
	(somSelf,ev,otherId))
#ifndef SOMGD_somutSetIdId
    #if (defined(_somutSetIdId) || defined(__somutSetIdId))
        #undef _somutSetIdId
        #undef __somutSetIdId
        #define SOMGD_somutSetIdId 1
    #else
        #define _somutSetIdId SOMUTId_somutSetIdId
    #endif /* _somutSetIdId */
#endif /* SOMGD_somutSetIdId */

/*
 * New Method: somutEqualsId
 */
typedef boolean   SOMLINK somTP_SOMUTId_somutEqualsId(SOMUTId *somSelf, Environment *ev, 
		SOMUTId* otherId);
#pragma linkage(somTP_SOMUTId_somutEqualsId, system)
typedef somTP_SOMUTId_somutEqualsId *somTD_SOMUTId_somutEqualsId;
/*
 *  Checks to see if this object's ID is equivalent to the given ID.
 *  Returns TRUE if the ID's are equivalent, FALSE otherwise.
 */
#define somMD_SOMUTId_somutEqualsId "::SOMUTId::somutEqualsId"
#define SOMUTId_somutEqualsId(somSelf,ev,otherId) \
    (SOM_Resolve(somSelf, SOMUTId, somutEqualsId) \
	(somSelf,ev,otherId))
#ifndef SOMGD_somutEqualsId
    #if (defined(_somutEqualsId) || defined(__somutEqualsId))
        #undef _somutEqualsId
        #undef __somutEqualsId
        #define SOMGD_somutEqualsId 1
    #else
        #define _somutEqualsId SOMUTId_somutEqualsId
    #endif /* _somutEqualsId */
#endif /* SOMGD_somutEqualsId */

/*
 * New Method: somutCompareId
 */
typedef short   SOMLINK somTP_SOMUTId_somutCompareId(SOMUTId *somSelf, Environment *ev, 
		SOMUTId* otherId);
#pragma linkage(somTP_SOMUTId_somutCompareId, system)
typedef somTP_SOMUTId_somutCompareId *somTD_SOMUTId_somutCompareId;
/*
 *  Performs an ordered comparison with another Id.
 *  If this ID < otherId  -1 is returned.
 *  If this ID = otherId   0 is returned.
 *  If this ID > otherId   1 is returned.
 */
#define somMD_SOMUTId_somutCompareId "::SOMUTId::somutCompareId"
#define SOMUTId_somutCompareId(somSelf,ev,otherId) \
    (SOM_Resolve(somSelf, SOMUTId, somutCompareId) \
	(somSelf,ev,otherId))
#ifndef SOMGD_somutCompareId
    #if (defined(_somutCompareId) || defined(__somutCompareId))
        #undef _somutCompareId
        #undef __somutCompareId
        #define SOMGD_somutCompareId 1
    #else
        #define _somutCompareId SOMUTId_somutCompareId
    #endif /* _somutCompareId */
#endif /* SOMGD_somutCompareId */

/*
 * New Method: somutHashId
 */
typedef unsigned long   SOMLINK somTP_SOMUTId_somutHashId(SOMUTId *somSelf, Environment *ev);
#pragma linkage(somTP_SOMUTId_somutHashId, system)
typedef somTP_SOMUTId_somutHashId *somTD_SOMUTId_somutHashId;
/*
 *  Returns an unsigned integer hash value based on the ID.
 */
#define somMD_SOMUTId_somutHashId "::SOMUTId::somutHashId"
#define SOMUTId_somutHashId(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMUTId, somutHashId) \
	(somSelf,ev))
#ifndef SOMGD_somutHashId
    #if (defined(_somutHashId) || defined(__somutHashId))
        #undef _somutHashId
        #undef __somutHashId
        #define SOMGD_somutHashId 1
    #else
        #define _somutHashId SOMUTId_somutHashId
    #endif /* _somutHashId */
#endif /* SOMGD_somutHashId */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMUTId_somDefaultInit SOMObject_somDefaultInit
#define SOMUTId_somDestruct SOMObject_somDestruct
#define SOMUTId_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMUTId_somDefaultAssign SOMObject_somDefaultAssign
#define SOMUTId_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMUTId_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMUTId_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMUTId_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMUTId_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMUTId_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMUTId_somInit SOMObject_somInit
#define SOMUTId_somFree SOMObject_somFree
#define SOMUTId_somUninit SOMObject_somUninit
#define SOMUTId_somGetClass SOMObject_somGetClass
#define SOMUTId_somGetClassName SOMObject_somGetClassName
#define SOMUTId_somGetSize SOMObject_somGetSize
#define SOMUTId_somIsA SOMObject_somIsA
#define SOMUTId_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMUTId_somRespondsTo SOMObject_somRespondsTo
#define SOMUTId_somDispatch SOMObject_somDispatch
#define SOMUTId_somClassDispatch SOMObject_somClassDispatch
#define SOMUTId_somCastObj SOMObject_somCastObj
#define SOMUTId_somResetObj SOMObject_somResetObj
#define SOMUTId_somDispatchV SOMObject_somDispatchV
#define SOMUTId_somDispatchL SOMObject_somDispatchL
#define SOMUTId_somDispatchA SOMObject_somDispatchA
#define SOMUTId_somDispatchD SOMObject_somDispatchD
#define SOMUTId_somPrintSelf SOMObject_somPrintSelf
#define SOMUTId_somDumpSelf SOMObject_somDumpSelf
#define SOMUTId_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMUTId_h */
