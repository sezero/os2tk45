
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpserial.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPSERIAL
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPDevSerial_h
#define SOM_WPDevSerial_h


/*
 * Passthru lines: File: "C.h", "before"
 */



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
#ifndef WPDevSerial
#define WPDevSerial SOMObject
#endif
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef WPFolder
    #define WPFolder SOMObject
#endif /* WPFolder */
#ifndef M_WPObject
    #define M_WPObject SOMObject
#endif /* M_WPObject */
#ifndef WPObject
    #define WPObject SOMObject
#endif /* WPObject */
#ifndef WPImageFile
    #define WPImageFile SOMObject
#endif /* WPImageFile */
#ifndef M_WPTransient
    #define M_WPTransient SOMObject
#endif /* M_WPTransient */
#ifndef M_WPDevice
    #define M_WPDevice SOMObject
#endif /* M_WPDevice */
#ifndef M_WPDevSerial
    #define M_WPDevSerial SOMObject
#endif /* M_WPDevSerial */

/*
 * End of bindings for IDL types.
 */

#define WPDevSerial_MajorVersion 1
#define WPDevSerial_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPDevSerialNewClass wpserialc
#pragma linkage(wpserialc, system)
#define WPDevSerialClassData wpseriald
#define WPDevSerialCClassData wpserialx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpserial.h>
/*--------------Migration------------*/
#define WPDevSerial_classObj WPDevSerialClassData.classObject
#define _WPDevSerial WPDevSerial_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPDevSerialNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPDevSerialNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPDevSerialClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPDevSerialClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPDevSerialCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPDevSerialCClassData;

/*
 * New and Renew macros for WPDevSerial
 */
#define WPDevSerialNew() \
   ( _WPDevSerial ? \
	_somNew(_WPDevSerial) \
	: ( WPDevSerialNewClass(\
		WPDevSerial_MajorVersion, \
		WPDevSerial_MinorVersion),\
	   _somNew(_WPDevSerial)))
#define WPDevSerialRenew(buf) \
   ( _WPDevSerial ? \
	_somRenew(_WPDevSerial, buf) \
	: ( WPDevSerialNewClass(\
		WPDevSerial_MajorVersion, \
		WPDevSerial_MinorVersion),\
	   _somRenew(_WPDevSerial, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPDevSerial_wpAddDeviceDevice1Page WPDevice_wpAddDeviceDevice1Page
#define WPDevSerial_wpAddDeviceDevice2Page WPDevice_wpAddDeviceDevice2Page
#define WPDevSerial_wpAddDeviceDMA1Page WPDevice_wpAddDeviceDMA1Page
#define WPDevSerial_wpAddDeviceIRQ1Page WPDevice_wpAddDeviceIRQ1Page
#define WPDevSerial_wpAddDeviceMemory1Page WPDevice_wpAddDeviceMemory1Page
#define WPDevSerial_wpAddDeviceIO1Page WPDevice_wpAddDeviceIO1Page
#define WPDevSerial_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPDevSerial_wpInitData WPObject_wpInitData
#define WPDevSerial_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPDevSerial_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPDevSerial_wpRestoreState WPObject_wpRestoreState
#define WPDevSerial_wpSaveState WPObject_wpSaveState
#define WPDevSerial_wpSetup WPObject_wpSetup
#define WPDevSerial_wpUnInitData WPObject_wpUnInitData
#define WPDevSerial_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPDevSerial_wpQueryHandle WPObject_wpQueryHandle
#define WPDevSerial_wpCopyObject WPObject_wpCopyObject
#define WPDevSerial_somDefaultInit SOMObject_somDefaultInit
#define WPDevSerial_somDestruct SOMObject_somDestruct
#define WPDevSerial_wpQueryIcon WPObject_wpQueryIcon
#define WPDevSerial_wpSaveImmediate WPObject_wpSaveImmediate
#define WPDevSerial_wpIdentify WPObject_wpIdentify
#define WPDevSerial_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPDevSerial_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPDevSerial_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPDevSerial_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPDevSerial_wpAllocMem WPObject_wpAllocMem
#define WPDevSerial_wpAppendObject WPObject_wpAppendObject
#define WPDevSerial_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPDevSerial_wpClose WPObject_wpClose
#define WPDevSerial_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPDevSerial_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPDevSerial_wpConfirmDelete WPObject_wpConfirmDelete
#define WPDevSerial_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPDevSerial_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPDevSerial_wpCreateAnother WPObject_wpCreateAnother
#define WPDevSerial_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPDevSerial_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPDevSerial_wpDelete WPObject_wpDelete
#define WPDevSerial_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPDevSerial_wpDisplayHelp WPObject_wpDisplayHelp
#define WPDevSerial_wpDisplayMenu WPObject_wpDisplayMenu
#define WPDevSerial_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPDevSerial_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPDevSerial_wpDragOver WPObject_wpDragOver
#define WPDevSerial_wpDrop WPObject_wpDrop
#define WPDevSerial_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPDevSerial_wpEndConversation WPObject_wpEndConversation
#define WPDevSerial_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPDevSerial_wpFilterMenu WPObject_wpFilterMenu
#define WPDevSerial_wpFindUseItem WPObject_wpFindUseItem
#define WPDevSerial_wpFormatDragItem WPObject_wpFormatDragItem
#define WPDevSerial_wpFree WPObject_wpFree
#define WPDevSerial_wpFreeMem WPObject_wpFreeMem
#define WPDevSerial_wpHide WPObject_wpHide
#define WPDevSerial_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPDevSerial_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPDevSerial_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPDevSerial_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPDevSerial_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPDevSerial_wpModifyMenu WPObject_wpModifyMenu
#define WPDevSerial_wpMoveObject WPObject_wpMoveObject
#define WPDevSerial_wpOpen WPObject_wpOpen
#define WPDevSerial_wpPrintObject WPObject_wpPrintObject
#define WPDevSerial_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPDevSerial_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPDevSerial_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPDevSerial_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPDevSerial_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPDevSerial_wpQueryError WPObject_wpQueryError
#define WPDevSerial_wpSetFolder WPObject_wpSetFolder
#define WPDevSerial_wpQueryFolder WPObject_wpQueryFolder
#define WPDevSerial_wpQueryIconData WPObject_wpQueryIconData
#define WPDevSerial_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPDevSerial_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPDevSerial_wpQueryStyle WPObject_wpQueryStyle
#define WPDevSerial_wpSetTaskRec WPObject_wpSetTaskRec
#define WPDevSerial_wpFindTaskRec WPObject_wpFindTaskRec
#define WPDevSerial_wpQueryTitle WPObject_wpQueryTitle
#define WPDevSerial_wpRegisterView WPObject_wpRegisterView
#define WPDevSerial_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPDevSerial_wpRender WPObject_wpRender
#define WPDevSerial_wpRenderComplete WPObject_wpRenderComplete
#define WPDevSerial_wpReplaceObject WPObject_wpReplaceObject
#define WPDevSerial_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPDevSerial_wpRestore WPObject_wpRestore
#define WPDevSerial_wpRestoreData WPObject_wpRestoreData
#define WPDevSerial_wpRestoreLong WPObject_wpRestoreLong
#define WPDevSerial_wpRestoreString WPObject_wpRestoreString
#define WPDevSerial_wpSaveData WPObject_wpSaveData
#define WPDevSerial_wpSaveDeferred WPObject_wpSaveDeferred
#define WPDevSerial_wpSaveLong WPObject_wpSaveLong
#define WPDevSerial_wpSaveString WPObject_wpSaveString
#define WPDevSerial_wpScanSetupString WPObject_wpScanSetupString
#define WPDevSerial_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPDevSerial_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPDevSerial_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPDevSerial_wpSetDefaultView WPObject_wpSetDefaultView
#define WPDevSerial_wpSetError WPObject_wpSetError
#define WPDevSerial_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPDevSerial_wpSetupOnce WPObject_wpSetupOnce
#define WPDevSerial_wpSetIcon WPObject_wpSetIcon
#define WPDevSerial_wpSetIconData WPObject_wpSetIconData
#define WPDevSerial_wpSetMinWindow WPObject_wpSetMinWindow
#define WPDevSerial_wpModifyStyle WPObject_wpModifyStyle
#define WPDevSerial_wpSetTitle WPObject_wpSetTitle
#define WPDevSerial_wpSwitchTo WPObject_wpSwitchTo
#define WPDevSerial_wpViewObject WPObject_wpViewObject
#define WPDevSerial_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPDevSerial_wpUnlockObject WPObject_wpUnlockObject
#define WPDevSerial_wpObjectReady WPObject_wpObjectReady
#define WPDevSerial_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPDevSerial_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPDevSerial_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPDevSerial_wpIsDeleteable WPObject_wpIsDeleteable
#define WPDevSerial_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPDevSerial_wpSetObjectID WPObject_wpSetObjectID
#define WPDevSerial_wpQueryObjectID WPObject_wpQueryObjectID
#define WPDevSerial_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPDevSerial_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPDevSerial_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPDevSerial_wpFindViewItem WPObject_wpFindViewItem
#define WPDevSerial_wpLockObject WPObject_wpLockObject
#define WPDevSerial_wpIsLocked WPObject_wpIsLocked
#define WPDevSerial_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPDevSerial_wpWaitForClose WPObject_wpWaitForClose
#define WPDevSerial_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPDevSerial_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPDevSerial_wpSetStyle WPObject_wpSetStyle
#define WPDevSerial_somInit SOMObject_somInit
#define WPDevSerial_somUninit SOMObject_somUninit
#define WPDevSerial_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPDevSerial_somDefaultAssign SOMObject_somDefaultAssign
#define WPDevSerial_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPDevSerial_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPDevSerial_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPDevSerial_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPDevSerial_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPDevSerial_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPDevSerial_somFree SOMObject_somFree
#define WPDevSerial_somGetClass SOMObject_somGetClass
#define WPDevSerial_somGetClassName SOMObject_somGetClassName
#define WPDevSerial_somGetSize SOMObject_somGetSize
#define WPDevSerial_somIsA SOMObject_somIsA
#define WPDevSerial_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPDevSerial_somRespondsTo SOMObject_somRespondsTo
#define WPDevSerial_somDispatch SOMObject_somDispatch
#define WPDevSerial_somClassDispatch SOMObject_somClassDispatch
#define WPDevSerial_somCastObj SOMObject_somCastObj
#define WPDevSerial_somResetObj SOMObject_somResetObj
#define WPDevSerial_somDispatchV SOMObject_somDispatchV
#define WPDevSerial_somDispatchL SOMObject_somDispatchL
#define WPDevSerial_somDispatchA SOMObject_somDispatchA
#define WPDevSerial_somDispatchD SOMObject_somDispatchD
#define WPDevSerial_somPrintSelf SOMObject_somPrintSelf
#define WPDevSerial_somDumpSelf SOMObject_somDumpSelf
#define WPDevSerial_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPDevSerial_h */

#ifndef SOM_M_WPDevSerial_h
#define SOM_M_WPDevSerial_h


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
#ifndef M_WPDevSerial
#define M_WPDevSerial SOMObject
#endif
/*
 *  New class methods section
 */
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPDevSerial_MajorVersion 1
#define M_WPDevSerial_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPDevSerialNewClass wpserialc
#pragma linkage(wpserialc, system)
#define M_WPDevSerialClassData wpseriald
#define M_WPDevSerialCClassData wpserialx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPDevSerial_classObj M_WPDevSerialClassData.classObject
#define _M_WPDevSerial M_WPDevSerial_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPDevSerialNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPDevSerialNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPDevSerialClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPDevSerialClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPDevSerialCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPDevSerialCClassData;

/*
 * New and Renew macros for M_WPDevSerial
 */
#define M_WPDevSerialNew() \
   ( _M_WPDevSerial ? \
	_somNew(_M_WPDevSerial) \
	: ( M_WPDevSerialNewClass(\
		M_WPDevSerial_MajorVersion, \
		M_WPDevSerial_MinorVersion),\
	   _somNew(_M_WPDevSerial)))
#define M_WPDevSerialRenew(buf) \
   ( _M_WPDevSerial ? \
	_somRenew(_M_WPDevSerial, buf) \
	: ( M_WPDevSerialNewClass(\
		M_WPDevSerial_MajorVersion, \
		M_WPDevSerial_MinorVersion),\
	   _somRenew(_M_WPDevSerial, buf)))

/*
 * Override method: wpclsInitData
 */
#define M_WPDevSerial_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPDevSerial_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPDevSerial_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsUnInitData
 */
#define M_WPDevSerial_wpclsUnInitData(somSelf) \
	M_WPObject_wpclsUnInitData(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPDevSerial_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPDevSerial_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPDevSerial_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPDevSerial_wpclsQueryStyle M_WPObject_wpclsQueryStyle
#define M_WPDevSerial_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPDevSerial_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPDevSerial_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPDevSerial_wpclsNew M_WPObject_wpclsNew
#define M_WPDevSerial_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPDevSerial_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPDevSerial_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPDevSerial_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPDevSerial_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPDevSerial_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPDevSerial_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPDevSerial_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPDevSerial_wpclsSetError M_WPObject_wpclsSetError
#define M_WPDevSerial_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPDevSerial_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPDevSerial_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPDevSerial_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPDevSerial_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPDevSerial_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPDevSerial_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPDevSerial_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPDevSerial_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPDevSerial_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPDevSerial_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPDevSerial_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPDevSerial_somUninit SOMObject_somUninit
#define M_WPDevSerial_somClassReady SOMClass_somClassReady
#define M_WPDevSerial_somNew SOMClass_somNew
#define M_WPDevSerial_somRenew SOMClass_somRenew
#define M_WPDevSerial__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPDevSerial__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPDevSerial__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPDevSerial__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPDevSerial_somNewNoInit SOMClass_somNewNoInit
#define M_WPDevSerial_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPDevSerial_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPDevSerial_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPDevSerial_somAllocate SOMClass_somAllocate
#define M_WPDevSerial_somDeallocate SOMClass_somDeallocate
#define M_WPDevSerial__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPDevSerial__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPDevSerial_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPDevSerial_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPDevSerial_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPDevSerial_somInitClass SOMClass_somInitClass
#define M_WPDevSerial_somInitMIClass SOMClass_somInitMIClass
#define M_WPDevSerial_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPDevSerial_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPDevSerial_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPDevSerial_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPDevSerial_somGetClassData SOMClass_somGetClassData
#define M_WPDevSerial_somSetClassData SOMClass_somSetClassData
#define M_WPDevSerial_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPDevSerial_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPDevSerial_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPDevSerial_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPDevSerial_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPDevSerial_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPDevSerial_somGetMethodData SOMClass_somGetMethodData
#define M_WPDevSerial_somGetRdStub SOMClass_somGetRdStub
#define M_WPDevSerial_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPDevSerial_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPDevSerial_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPDevSerial_somGetName SOMClass_somGetName
#define M_WPDevSerial_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPDevSerial_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPDevSerial_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPDevSerial_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPDevSerial_somGetParent SOMClass_somGetParent
#define M_WPDevSerial_somGetParents SOMClass_somGetParents
#define M_WPDevSerial_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPDevSerial_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPDevSerial_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPDevSerial_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPDevSerial_somFindMethod SOMClass_somFindMethod
#define M_WPDevSerial_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPDevSerial_somFindSMethod SOMClass_somFindSMethod
#define M_WPDevSerial_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPDevSerial_somLookupMethod SOMClass_somLookupMethod
#define M_WPDevSerial_somCheckVersion SOMClass_somCheckVersion
#define M_WPDevSerial_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPDevSerial_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPDevSerial_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPDevSerial_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPDevSerial_somDefaultInit SOMObject_somDefaultInit
#define M_WPDevSerial_somDestruct SOMObject_somDestruct
#define M_WPDevSerial_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPDevSerial_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPDevSerial_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPDevSerial_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPDevSerial_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPDevSerial_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPDevSerial_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPDevSerial_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPDevSerial_somInit SOMObject_somInit
#define M_WPDevSerial_somFree SOMObject_somFree
#define M_WPDevSerial_somGetClass SOMObject_somGetClass
#define M_WPDevSerial_somGetClassName SOMObject_somGetClassName
#define M_WPDevSerial_somGetSize SOMObject_somGetSize
#define M_WPDevSerial_somIsA SOMObject_somIsA
#define M_WPDevSerial_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPDevSerial_somRespondsTo SOMObject_somRespondsTo
#define M_WPDevSerial_somDispatch SOMObject_somDispatch
#define M_WPDevSerial_somClassDispatch SOMObject_somClassDispatch
#define M_WPDevSerial_somCastObj SOMObject_somCastObj
#define M_WPDevSerial_somResetObj SOMObject_somResetObj
#define M_WPDevSerial_somDispatchV SOMObject_somDispatchV
#define M_WPDevSerial_somDispatchL SOMObject_somDispatchL
#define M_WPDevSerial_somDispatchA SOMObject_somDispatchA
#define M_WPDevSerial_somDispatchD SOMObject_somDispatchD
#define M_WPDevSerial_somPrintSelf SOMObject_somPrintSelf
#define M_WPDevSerial_somDumpSelf SOMObject_somDumpSelf
#define M_WPDevSerial_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPDevSerial_h */
