
/*
 * This file was generated by the SOM Compiler.
 * FileName: somtrcls.h.
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


#ifndef SOM_SOMMTraced_h
#define SOM_SOMMTraced_h


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
#ifndef SOMMTraced
#define SOMMTraced SOMObject
#endif
#include <sombacls.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define SOMMTraced_MajorVersion 2
#define SOMMTraced_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMMTracedNewClass c
#pragma linkage(c, system)
#define SOMMTracedClassData d
#define SOMMTracedCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMMTraced_classObj SOMMTracedClassData.classObject
#define _SOMMTraced SOMMTraced_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMMTracedNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMMTracedNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMMTracedClassDataStructure {
	SOMClass *classObject;
	somMToken _set_sommTraceIsOn;
	somMToken _get_sommTraceIsOn;
} SOMDLINK SOMMTracedClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMMTracedCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMMTracedCClassData;

/*
 * New and Renew macros for SOMMTraced
 */
#define SOMMTracedNew() \
   ( _SOMMTraced ? \
	_somNew(_SOMMTraced) \
	: ( SOMMTracedNewClass(\
		SOMMTraced_MajorVersion, \
		SOMMTraced_MinorVersion),\
	   _somNew(_SOMMTraced)))
#define SOMMTracedRenew(buf) \
   ( _SOMMTraced ? \
	_somRenew(_SOMMTraced, buf) \
	: ( SOMMTracedNewClass(\
		SOMMTraced_MajorVersion, \
		SOMMTraced_MinorVersion),\
	   _somRenew(_SOMMTraced, buf)))

/*
 * Override method: somInitMIClass
 */
#define SOMMTraced_somInitMIClass(somSelf,inherit_vars,className,parentClasses,dataSize,dataAlignment,maxStaticMethods,majorVersion,minorVersion) \
	SOMClass_somInitMIClass(somSelf,inherit_vars,className,parentClasses,dataSize,dataAlignment,maxStaticMethods,majorVersion,minorVersion)

/*
 * Override method: sommBeforeMethod
 */
#define SOMMTraced_sommBeforeMethod(somSelf,ev,object,methodId,ap) \
	SOMMBeforeAfter_sommBeforeMethod(somSelf,ev,object,methodId,ap)

/*
 * Override method: sommAfterMethod
 */
#define SOMMTraced_sommAfterMethod(somSelf,ev,object,methodId,returnedvalue,ap) \
	SOMMBeforeAfter_sommAfterMethod(somSelf,ev,object,methodId,returnedvalue,ap)

/*
 * New Method: _get_sommTraceIsOn
 */
typedef boolean   SOMLINK somTP_SOMMTraced__get_sommTraceIsOn(SOMMTraced *somSelf, Environment *ev);
#pragma linkage(somTP_SOMMTraced__get_sommTraceIsOn, system)
typedef somTP_SOMMTraced__get_sommTraceIsOn *somTD_SOMMTraced__get_sommTraceIsOn;
/*
 * Method from the IDL attribute statement:
 * "attribute boolean sommTraceIsOn"
 */
#define somMD_SOMMTraced__get_sommTraceIsOn "::SOMMTraced::_get_sommTraceIsOn"
#define SOMMTraced__get_sommTraceIsOn(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMMTraced, _get_sommTraceIsOn) \
	(somSelf,ev))
#ifndef SOMGD_get_sommTraceIsOn
    #if (defined(_get_sommTraceIsOn) || defined(__get_sommTraceIsOn))
        #undef _get_sommTraceIsOn
        #undef __get_sommTraceIsOn
        #define SOMGD_get_sommTraceIsOn 1
    #else
        #define __get_sommTraceIsOn SOMMTraced__get_sommTraceIsOn
    #endif /* __get_sommTraceIsOn */
#endif /* SOMGD_get_sommTraceIsOn */

/*
 * New Method: _set_sommTraceIsOn
 */
typedef void   SOMLINK somTP_SOMMTraced__set_sommTraceIsOn(SOMMTraced *somSelf, Environment *ev, 
		boolean sommTraceIsOn);
#pragma linkage(somTP_SOMMTraced__set_sommTraceIsOn, system)
typedef somTP_SOMMTraced__set_sommTraceIsOn *somTD_SOMMTraced__set_sommTraceIsOn;
/*
 * Method from the IDL attribute statement:
 * "attribute boolean sommTraceIsOn"
 */
#define somMD_SOMMTraced__set_sommTraceIsOn "::SOMMTraced::_set_sommTraceIsOn"
#define SOMMTraced__set_sommTraceIsOn(somSelf,ev,sommTraceIsOn) \
    (SOM_Resolve(somSelf, SOMMTraced, _set_sommTraceIsOn) \
	(somSelf,ev,sommTraceIsOn))
#ifndef SOMGD_set_sommTraceIsOn
    #if (defined(_set_sommTraceIsOn) || defined(__set_sommTraceIsOn))
        #undef _set_sommTraceIsOn
        #undef __set_sommTraceIsOn
        #define SOMGD_set_sommTraceIsOn 1
    #else
        #define __set_sommTraceIsOn SOMMTraced__set_sommTraceIsOn
    #endif /* __set_sommTraceIsOn */
#endif /* SOMGD_set_sommTraceIsOn */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMMTraced_somDefaultInit SOMObject_somDefaultInit
#define SOMMTraced__get_somDataAlignment SOMClass__get_somDataAlignment
#define SOMMTraced__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define SOMMTraced__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define SOMMTraced_somNew SOMClass_somNew
#define SOMMTraced_somNewNoInit SOMClass_somNewNoInit
#define SOMMTraced_somRenew SOMClass_somRenew
#define SOMMTraced_somRenewNoInit SOMClass_somRenewNoInit
#define SOMMTraced_somRenewNoZero SOMClass_somRenewNoZero
#define SOMMTraced_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define SOMMTraced_somAllocate SOMClass_somAllocate
#define SOMMTraced_somDeallocate SOMClass_somDeallocate
#define SOMMTraced_somInitClass SOMClass_somInitClass
#define SOMMTraced_somAddStaticMethod SOMClass_somAddStaticMethod
#define SOMMTraced_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define SOMMTraced_somOverrideSMethod SOMClass_somOverrideSMethod
#define SOMMTraced_somClassReady SOMClass_somClassReady
#define SOMMTraced_somGetApplyStub SOMClass_somGetApplyStub
#define SOMMTraced_somGetClassData SOMClass_somGetClassData
#define SOMMTraced_somSetClassData SOMClass_somSetClassData
#define SOMMTraced_somGetClassMtab SOMClass_somGetClassMtab
#define SOMMTraced_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define SOMMTraced_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define SOMMTraced_somGetInstanceSize SOMClass_somGetInstanceSize
#define SOMMTraced_somGetInstanceToken SOMClass_somGetInstanceToken
#define SOMMTraced_somGetMemberToken SOMClass_somGetMemberToken
#define SOMMTraced_somGetMethodData SOMClass_somGetMethodData
#define SOMMTraced_somGetRdStub SOMClass_somGetRdStub
#define SOMMTraced_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define SOMMTraced_somGetMethodIndex SOMClass_somGetMethodIndex
#define SOMMTraced_somGetMethodToken SOMClass_somGetMethodToken
#define SOMMTraced_somGetName SOMClass_somGetName
#define SOMMTraced_somGetNthMethodData SOMClass_somGetNthMethodData
#define SOMMTraced_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define SOMMTraced_somGetNumMethods SOMClass_somGetNumMethods
#define SOMMTraced_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define SOMMTraced_somGetParent SOMClass_somGetParent
#define SOMMTraced_somGetParents SOMClass_somGetParents
#define SOMMTraced_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define SOMMTraced_somFindMethod SOMClass_somFindMethod
#define SOMMTraced_somFindMethodOk SOMClass_somFindMethodOk
#define SOMMTraced_somFindSMethod SOMClass_somFindSMethod
#define SOMMTraced_somFindSMethodOk SOMClass_somFindSMethodOk
#define SOMMTraced_somLookupMethod SOMClass_somLookupMethod
#define SOMMTraced_somCheckVersion SOMClass_somCheckVersion
#define SOMMTraced_somDescendedFrom SOMClass_somDescendedFrom
#define SOMMTraced_somSupportsMethod SOMClass_somSupportsMethod
#define SOMMTraced_somDefinedMethod SOMClass_somDefinedMethod
#define SOMMTraced_somOverrideMtab SOMClass_somOverrideMtab
#define SOMMTraced_somDestruct SOMObject_somDestruct
#define SOMMTraced_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMMTraced_somDefaultAssign SOMObject_somDefaultAssign
#define SOMMTraced_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMMTraced_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMMTraced_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMMTraced_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMMTraced_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMMTraced_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMMTraced_somInit SOMObject_somInit
#define SOMMTraced_somFree SOMObject_somFree
#define SOMMTraced_somUninit SOMObject_somUninit
#define SOMMTraced_somGetClass SOMObject_somGetClass
#define SOMMTraced_somGetClassName SOMObject_somGetClassName
#define SOMMTraced_somGetSize SOMObject_somGetSize
#define SOMMTraced_somIsA SOMObject_somIsA
#define SOMMTraced_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMMTraced_somRespondsTo SOMObject_somRespondsTo
#define SOMMTraced_somDispatch SOMObject_somDispatch
#define SOMMTraced_somClassDispatch SOMObject_somClassDispatch
#define SOMMTraced_somCastObj SOMObject_somCastObj
#define SOMMTraced_somResetObj SOMObject_somResetObj
#define SOMMTraced_somDispatchV SOMObject_somDispatchV
#define SOMMTraced_somDispatchL SOMObject_somDispatchL
#define SOMMTraced_somDispatchA SOMObject_somDispatchA
#define SOMMTraced_somDispatchD SOMObject_somDispatchD
#define SOMMTraced_somPrintSelf SOMObject_somPrintSelf
#define SOMMTraced_somDumpSelf SOMObject_somDumpSelf
#define SOMMTraced_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMMTraced_h */