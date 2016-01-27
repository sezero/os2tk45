
/*
 * This file was generated by the SOM Compiler.
 * FileName: sctmplt.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: some
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


#ifndef SOM_SOMTTemplateOutputC_h
#define SOM_SOMTTemplateOutputC_h


/*
 * Passthru lines: File: "C.h", "before"
 */
#include <stdio.h>
typedef enum somtCommentStyleT { somtDashesE, somtCPPE, somtCSimpleE, somtCBlockE } somtCommentStyleT;

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
#ifndef SOMTTemplateOutputC
#define SOMTTemplateOutputC SOMObject
#endif
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef SOMStringTableC
    #define SOMStringTableC SOMObject
#endif /* SOMStringTableC */
#define SOMTTemplateOutputC_MAX_INPUT_LINE_LENGTH 1024 /* 1024 */
#define SOMTTemplateOutputC_MAX_OUTPUT_LINE_LENGTH 4096 /* 4096 */

#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_MAX_INPUT_LINE_LENGTH
    #ifdef MAX_INPUT_LINE_LENGTH
        #undef MAX_INPUT_LINE_LENGTH
        #define SOMTGD_MAX_INPUT_LINE_LENGTH 1
    #else
        #define MAX_INPUT_LINE_LENGTH SOMTTemplateOutputC_MAX_INPUT_LINE_LENGTH
    #endif /* MAX_INPUT_LINE_LENGTH */
#endif /* SOMTGD_MAX_INPUT_LINE_LENGTH */
#ifndef SOMTGD_MAX_OUTPUT_LINE_LENGTH
    #ifdef MAX_OUTPUT_LINE_LENGTH
        #undef MAX_OUTPUT_LINE_LENGTH
        #define SOMTGD_MAX_OUTPUT_LINE_LENGTH 1
    #else
        #define MAX_OUTPUT_LINE_LENGTH SOMTTemplateOutputC_MAX_OUTPUT_LINE_LENGTH
    #endif /* MAX_OUTPUT_LINE_LENGTH */
#endif /* SOMTGD_MAX_OUTPUT_LINE_LENGTH */
#endif /* SOM_DONT_USE_SHORT_NAMES */

/*
 * End of bindings for IDL types.
 */

#define SOMTTemplateOutputC_MajorVersion 2
#define SOMTTemplateOutputC_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMTTemplateOutputCNewClass c
#pragma linkage(c, system)
#define SOMTTemplateOutputCClassData d
#define SOMTTemplateOutputCCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMTTemplateOutputC_classObj SOMTTemplateOutputCClassData.classObject
#define _SOMTTemplateOutputC SOMTTemplateOutputC_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMTTemplateOutputCNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMTTemplateOutputCNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMTTemplateOutputCClassDataStructure {
	SOMClass *classObject;
	somMToken _get_somtCommentStyle;
	somMToken _set_somtCommentStyle;
	somMToken _get_somtLineLength;
	somMToken _set_somtLineLength;
	somMToken _set_somtCommentNewline;
	somMToken _get_somtCommentNewline;
	somMToken somtGetSymbol;
	somMToken somtSetSymbol;
	somMToken somtSetSymbolCopyName;
	somMToken somtSetSymbolCopyValue;
	somMToken somtSetSymbolCopyBoth;
	somMToken somtCheckSymbol;
	somMToken somtSetOutputFile;
	somMToken somto;
	somMToken somtOutputComment;
	somMToken somtOutputSection;
	somMToken somtAddSectionDefinitions;
	somMToken somtReadSectionDefinitions;
	somMToken somtExpandSymbol;
} SOMDLINK SOMTTemplateOutputCClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMTTemplateOutputCCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMTTemplateOutputCCClassData;

/*
 * New and Renew macros for SOMTTemplateOutputC
 */
#define SOMTTemplateOutputCNew() \
   ( _SOMTTemplateOutputC ? \
	_somNew(_SOMTTemplateOutputC) \
	: ( SOMTTemplateOutputCNewClass(\
		SOMTTemplateOutputC_MajorVersion, \
		SOMTTemplateOutputC_MinorVersion),\
	   _somNew(_SOMTTemplateOutputC)))
#define SOMTTemplateOutputCRenew(buf) \
   ( _SOMTTemplateOutputC ? \
	_somRenew(_SOMTTemplateOutputC, buf) \
	: ( SOMTTemplateOutputCNewClass(\
		SOMTTemplateOutputC_MajorVersion, \
		SOMTTemplateOutputC_MinorVersion),\
	   _somRenew(_SOMTTemplateOutputC, buf)))

/*
 * Override method: somInit
 */
#define SOMTTemplateOutputC_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: somUninit
 */
#define SOMTTemplateOutputC_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * Override method: somPrintSelf
 */
#define SOMTTemplateOutputC_somPrintSelf(somSelf) \
	SOMObject_somPrintSelf(somSelf)

/*
 * Override method: somDumpSelfInt
 */
#define SOMTTemplateOutputC_somDumpSelfInt(somSelf,level) \
	SOMObject_somDumpSelfInt(somSelf,level)

/*
 * New Method: _get_somtCommentStyle
 */
typedef somtCommentStyleT   SOMLINK somTP_SOMTTemplateOutputC__get_somtCommentStyle(SOMTTemplateOutputC *somSelf);
#pragma linkage(somTP_SOMTTemplateOutputC__get_somtCommentStyle, system)
typedef somTP_SOMTTemplateOutputC__get_somtCommentStyle *somTD_SOMTTemplateOutputC__get_somtCommentStyle;
/*
 *  Controls the style in which comments are wrtten as follows:
 *    somtDashesE: "--" at the start of each line
 *    somtCPPE: C++ style, "//" at the start of each line
 *    somtCSimpleE: simple C style, each line wrapped in / * and * /
 *    somtCBlockE: block C style, block style, ie leading / * then a * on each
 *               line and then a final * /
 */
#define somMD_SOMTTemplateOutputC__get_somtCommentStyle "::SOMTTemplateOutputC::_get_somtCommentStyle"
#define SOMTTemplateOutputC__get_somtCommentStyle(somSelf) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, _get_somtCommentStyle) \
	(somSelf))
#ifndef SOMGD_get_somtCommentStyle
    #if (defined(_get_somtCommentStyle) || defined(__get_somtCommentStyle))
        #undef _get_somtCommentStyle
        #undef __get_somtCommentStyle
        #define SOMGD_get_somtCommentStyle 1
    #else
        #define __get_somtCommentStyle SOMTTemplateOutputC__get_somtCommentStyle
    #endif /* __get_somtCommentStyle */
#endif /* SOMGD_get_somtCommentStyle */

/*
 * New Method: _set_somtCommentStyle
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC__set_somtCommentStyle(SOMTTemplateOutputC *somSelf, 
		somtCommentStyleT somtCommentStyle);
#pragma linkage(somTP_SOMTTemplateOutputC__set_somtCommentStyle, system)
typedef somTP_SOMTTemplateOutputC__set_somtCommentStyle *somTD_SOMTTemplateOutputC__set_somtCommentStyle;
/*
 *  Controls the style in which comments are wrtten as follows:
 *    somtDashesE: "--" at the start of each line
 *    somtCPPE: C++ style, "//" at the start of each line
 *    somtCSimpleE: simple C style, each line wrapped in / * and * /
 *    somtCBlockE: block C style, block style, ie leading / * then a * on each
 *               line and then a final * /
 */
#define somMD_SOMTTemplateOutputC__set_somtCommentStyle "::SOMTTemplateOutputC::_set_somtCommentStyle"
#define SOMTTemplateOutputC__set_somtCommentStyle(somSelf,somtCommentStyle) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, _set_somtCommentStyle) \
	(somSelf,somtCommentStyle))
#ifndef SOMGD_set_somtCommentStyle
    #if (defined(_set_somtCommentStyle) || defined(__set_somtCommentStyle))
        #undef _set_somtCommentStyle
        #undef __set_somtCommentStyle
        #define SOMGD_set_somtCommentStyle 1
    #else
        #define __set_somtCommentStyle SOMTTemplateOutputC__set_somtCommentStyle
    #endif /* __set_somtCommentStyle */
#endif /* SOMGD_set_somtCommentStyle */

/*
 * New Method: _get_somtLineLength
 */
typedef long   SOMLINK somTP_SOMTTemplateOutputC__get_somtLineLength(SOMTTemplateOutputC *somSelf);
#pragma linkage(somTP_SOMTTemplateOutputC__get_somtLineLength, system)
typedef somTP_SOMTTemplateOutputC__get_somtLineLength *somTD_SOMTTemplateOutputC__get_somtLineLength;
/*
 *  Controls list output only.  Default is 72.
 *  At least one list item will be output on each line, so making
 *  this value very short will cause list items to be placed on
 *  separate lines.
 */
#define somMD_SOMTTemplateOutputC__get_somtLineLength "::SOMTTemplateOutputC::_get_somtLineLength"
#define SOMTTemplateOutputC__get_somtLineLength(somSelf) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, _get_somtLineLength) \
	(somSelf))
#ifndef SOMGD_get_somtLineLength
    #if (defined(_get_somtLineLength) || defined(__get_somtLineLength))
        #undef _get_somtLineLength
        #undef __get_somtLineLength
        #define SOMGD_get_somtLineLength 1
    #else
        #define __get_somtLineLength SOMTTemplateOutputC__get_somtLineLength
    #endif /* __get_somtLineLength */
#endif /* SOMGD_get_somtLineLength */

/*
 * New Method: _set_somtLineLength
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC__set_somtLineLength(SOMTTemplateOutputC *somSelf, 
		long somtLineLength);
#pragma linkage(somTP_SOMTTemplateOutputC__set_somtLineLength, system)
typedef somTP_SOMTTemplateOutputC__set_somtLineLength *somTD_SOMTTemplateOutputC__set_somtLineLength;
/*
 *  Controls list output only.  Default is 72.
 *  At least one list item will be output on each line, so making
 *  this value very short will cause list items to be placed on
 *  separate lines.
 */
#define somMD_SOMTTemplateOutputC__set_somtLineLength "::SOMTTemplateOutputC::_set_somtLineLength"
#define SOMTTemplateOutputC__set_somtLineLength(somSelf,somtLineLength) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, _set_somtLineLength) \
	(somSelf,somtLineLength))
#ifndef SOMGD_set_somtLineLength
    #if (defined(_set_somtLineLength) || defined(__set_somtLineLength))
        #undef _set_somtLineLength
        #undef __set_somtLineLength
        #define SOMGD_set_somtLineLength 1
    #else
        #define __set_somtLineLength SOMTTemplateOutputC__set_somtLineLength
    #endif /* __set_somtLineLength */
#endif /* SOMGD_set_somtLineLength */

/*
 * New Method: _get_somtCommentNewline
 */
typedef boolean   SOMLINK somTP_SOMTTemplateOutputC__get_somtCommentNewline(SOMTTemplateOutputC *somSelf);
#pragma linkage(somTP_SOMTTemplateOutputC__get_somtCommentNewline, system)
typedef somTP_SOMTTemplateOutputC__get_somtCommentNewline *somTD_SOMTTemplateOutputC__get_somtCommentNewline;
/*
 * Method from the IDL attribute statement:
 * "attribute boolean somtCommentNewline"
 */
#define somMD_SOMTTemplateOutputC__get_somtCommentNewline "::SOMTTemplateOutputC::_get_somtCommentNewline"
#define SOMTTemplateOutputC__get_somtCommentNewline(somSelf) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, _get_somtCommentNewline) \
	(somSelf))
#ifndef SOMGD_get_somtCommentNewline
    #if (defined(_get_somtCommentNewline) || defined(__get_somtCommentNewline))
        #undef _get_somtCommentNewline
        #undef __get_somtCommentNewline
        #define SOMGD_get_somtCommentNewline 1
    #else
        #define __get_somtCommentNewline SOMTTemplateOutputC__get_somtCommentNewline
    #endif /* __get_somtCommentNewline */
#endif /* SOMGD_get_somtCommentNewline */

/*
 * New Method: _set_somtCommentNewline
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC__set_somtCommentNewline(SOMTTemplateOutputC *somSelf, 
		boolean somtCommentNewline);
#pragma linkage(somTP_SOMTTemplateOutputC__set_somtCommentNewline, system)
typedef somTP_SOMTTemplateOutputC__set_somtCommentNewline *somTD_SOMTTemplateOutputC__set_somtCommentNewline;
/*
 * Method from the IDL attribute statement:
 * "attribute boolean somtCommentNewline"
 */
#define somMD_SOMTTemplateOutputC__set_somtCommentNewline "::SOMTTemplateOutputC::_set_somtCommentNewline"
#define SOMTTemplateOutputC__set_somtCommentNewline(somSelf,somtCommentNewline) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, _set_somtCommentNewline) \
	(somSelf,somtCommentNewline))
#ifndef SOMGD_set_somtCommentNewline
    #if (defined(_set_somtCommentNewline) || defined(__set_somtCommentNewline))
        #undef _set_somtCommentNewline
        #undef __set_somtCommentNewline
        #define SOMGD_set_somtCommentNewline 1
    #else
        #define __set_somtCommentNewline SOMTTemplateOutputC__set_somtCommentNewline
    #endif /* __set_somtCommentNewline */
#endif /* SOMGD_set_somtCommentNewline */

/*
 * New Method: somtGetSymbol
 */
typedef string   SOMLINK somTP_SOMTTemplateOutputC_somtGetSymbol(SOMTTemplateOutputC *somSelf, 
		string name);
#pragma linkage(somTP_SOMTTemplateOutputC_somtGetSymbol, system)
typedef somTP_SOMTTemplateOutputC_somtGetSymbol *somTD_SOMTTemplateOutputC_somtGetSymbol;
/*
 *  Returns the value associated with <name>.  If no value is
 *  associated with <name> then NULL is returned
 */
#define somMD_SOMTTemplateOutputC_somtGetSymbol "::SOMTTemplateOutputC::somtGetSymbol"
#define SOMTTemplateOutputC_somtGetSymbol(somSelf,name) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtGetSymbol) \
	(somSelf,name))
#ifndef SOMGD_somtGetSymbol
    #if (defined(_somtGetSymbol) || defined(__somtGetSymbol))
        #undef _somtGetSymbol
        #undef __somtGetSymbol
        #define SOMGD_somtGetSymbol 1
    #else
        #define _somtGetSymbol SOMTTemplateOutputC_somtGetSymbol
    #endif /* _somtGetSymbol */
#endif /* SOMGD_somtGetSymbol */

/*
 * New Method: somtSetSymbol
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somtSetSymbol(SOMTTemplateOutputC *somSelf, 
		string name, 
		string value);
#pragma linkage(somTP_SOMTTemplateOutputC_somtSetSymbol, system)
typedef somTP_SOMTTemplateOutputC_somtSetSymbol *somTD_SOMTTemplateOutputC_somtSetSymbol;
/*
 *  Makes the symbol with name <name> have value <value>.  This will
 *  overwrite any previous value the symbol had, and add the symbol
 *  if necessary.
 *  Takes over ownership of both name and value.
 */
#define somMD_SOMTTemplateOutputC_somtSetSymbol "::SOMTTemplateOutputC::somtSetSymbol"
#define SOMTTemplateOutputC_somtSetSymbol(somSelf,name,value) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtSetSymbol) \
	(somSelf,name,value))
#ifndef SOMGD_somtSetSymbol
    #if (defined(_somtSetSymbol) || defined(__somtSetSymbol))
        #undef _somtSetSymbol
        #undef __somtSetSymbol
        #define SOMGD_somtSetSymbol 1
    #else
        #define _somtSetSymbol SOMTTemplateOutputC_somtSetSymbol
    #endif /* _somtSetSymbol */
#endif /* SOMGD_somtSetSymbol */

/*
 * New Method: somtSetSymbolCopyName
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somtSetSymbolCopyName(SOMTTemplateOutputC *somSelf, 
		string name, 
		string value);
#pragma linkage(somTP_SOMTTemplateOutputC_somtSetSymbolCopyName, system)
typedef somTP_SOMTTemplateOutputC_somtSetSymbolCopyName *somTD_SOMTTemplateOutputC_somtSetSymbolCopyName;
/*
 *  See somtSetSymbol
 *  Only takes over ownership of value.
 */
#define somMD_SOMTTemplateOutputC_somtSetSymbolCopyName "::SOMTTemplateOutputC::somtSetSymbolCopyName"
#define SOMTTemplateOutputC_somtSetSymbolCopyName(somSelf,name,value) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtSetSymbolCopyName) \
	(somSelf,name,value))
#ifndef SOMGD_somtSetSymbolCopyName
    #if (defined(_somtSetSymbolCopyName) || defined(__somtSetSymbolCopyName))
        #undef _somtSetSymbolCopyName
        #undef __somtSetSymbolCopyName
        #define SOMGD_somtSetSymbolCopyName 1
    #else
        #define _somtSetSymbolCopyName SOMTTemplateOutputC_somtSetSymbolCopyName
    #endif /* _somtSetSymbolCopyName */
#endif /* SOMGD_somtSetSymbolCopyName */

/*
 * New Method: somtSetSymbolCopyValue
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somtSetSymbolCopyValue(SOMTTemplateOutputC *somSelf, 
		string name, 
		string value);
#pragma linkage(somTP_SOMTTemplateOutputC_somtSetSymbolCopyValue, system)
typedef somTP_SOMTTemplateOutputC_somtSetSymbolCopyValue *somTD_SOMTTemplateOutputC_somtSetSymbolCopyValue;
/*
 *  See somtSetSymbol
 *  Only takes over ownership of name.
 */
#define somMD_SOMTTemplateOutputC_somtSetSymbolCopyValue "::SOMTTemplateOutputC::somtSetSymbolCopyValue"
#define SOMTTemplateOutputC_somtSetSymbolCopyValue(somSelf,name,value) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtSetSymbolCopyValue) \
	(somSelf,name,value))
#ifndef SOMGD_somtSetSymbolCopyValue
    #if (defined(_somtSetSymbolCopyValue) || defined(__somtSetSymbolCopyValue))
        #undef _somtSetSymbolCopyValue
        #undef __somtSetSymbolCopyValue
        #define SOMGD_somtSetSymbolCopyValue 1
    #else
        #define _somtSetSymbolCopyValue SOMTTemplateOutputC_somtSetSymbolCopyValue
    #endif /* _somtSetSymbolCopyValue */
#endif /* SOMGD_somtSetSymbolCopyValue */

/*
 * New Method: somtSetSymbolCopyBoth
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somtSetSymbolCopyBoth(SOMTTemplateOutputC *somSelf, 
		string name, 
		string value);
#pragma linkage(somTP_SOMTTemplateOutputC_somtSetSymbolCopyBoth, system)
typedef somTP_SOMTTemplateOutputC_somtSetSymbolCopyBoth *somTD_SOMTTemplateOutputC_somtSetSymbolCopyBoth;
/*
 *  See somtSetSymbol
 *  Does not take over ownership of either <name> or <value>
 */
#define somMD_SOMTTemplateOutputC_somtSetSymbolCopyBoth "::SOMTTemplateOutputC::somtSetSymbolCopyBoth"
#define SOMTTemplateOutputC_somtSetSymbolCopyBoth(somSelf,name,value) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtSetSymbolCopyBoth) \
	(somSelf,name,value))
#ifndef SOMGD_somtSetSymbolCopyBoth
    #if (defined(_somtSetSymbolCopyBoth) || defined(__somtSetSymbolCopyBoth))
        #undef _somtSetSymbolCopyBoth
        #undef __somtSetSymbolCopyBoth
        #define SOMGD_somtSetSymbolCopyBoth 1
    #else
        #define _somtSetSymbolCopyBoth SOMTTemplateOutputC_somtSetSymbolCopyBoth
    #endif /* _somtSetSymbolCopyBoth */
#endif /* SOMGD_somtSetSymbolCopyBoth */

/*
 * New Method: somtCheckSymbol
 */
typedef boolean   SOMLINK somTP_SOMTTemplateOutputC_somtCheckSymbol(SOMTTemplateOutputC *somSelf, 
		string name);
#pragma linkage(somTP_SOMTTemplateOutputC_somtCheckSymbol, system)
typedef somTP_SOMTTemplateOutputC_somtCheckSymbol *somTD_SOMTTemplateOutputC_somtCheckSymbol;
/*
 *  Returns 1 (true) if the indicated symbol has non-null, non-zero
 *  length value, and 0 (false) otherwise.
 */
#define somMD_SOMTTemplateOutputC_somtCheckSymbol "::SOMTTemplateOutputC::somtCheckSymbol"
#define SOMTTemplateOutputC_somtCheckSymbol(somSelf,name) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtCheckSymbol) \
	(somSelf,name))
#ifndef SOMGD_somtCheckSymbol
    #if (defined(_somtCheckSymbol) || defined(__somtCheckSymbol))
        #undef _somtCheckSymbol
        #undef __somtCheckSymbol
        #define SOMGD_somtCheckSymbol 1
    #else
        #define _somtCheckSymbol SOMTTemplateOutputC_somtCheckSymbol
    #endif /* _somtCheckSymbol */
#endif /* SOMGD_somtCheckSymbol */

/*
 * New Method: somtSetOutputFile
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somtSetOutputFile(SOMTTemplateOutputC *somSelf, 
		FILE* fp);
#pragma linkage(somTP_SOMTTemplateOutputC_somtSetOutputFile, system)
typedef somTP_SOMTTemplateOutputC_somtSetOutputFile *somTD_SOMTTemplateOutputC_somtSetOutputFile;
/*
 *  All template output will be directed to <fp>. Default is <stdout>.
 */
#define somMD_SOMTTemplateOutputC_somtSetOutputFile "::SOMTTemplateOutputC::somtSetOutputFile"
#define SOMTTemplateOutputC_somtSetOutputFile(somSelf,fp) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtSetOutputFile) \
	(somSelf,fp))
#ifndef SOMGD_somtSetOutputFile
    #if (defined(_somtSetOutputFile) || defined(__somtSetOutputFile))
        #undef _somtSetOutputFile
        #undef __somtSetOutputFile
        #define SOMGD_somtSetOutputFile 1
    #else
        #define _somtSetOutputFile SOMTTemplateOutputC_somtSetOutputFile
    #endif /* _somtSetOutputFile */
#endif /* SOMGD_somtSetOutputFile */

/*
 * New Method: somto
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somto(SOMTTemplateOutputC *somSelf, 
		string tmplt);
#pragma linkage(somTP_SOMTTemplateOutputC_somto, system)
typedef somTP_SOMTTemplateOutputC_somto *somTD_SOMTTemplateOutputC_somto;
/*
 *  Outputs a template, <tmplt>, after substitution for any symbols
 *  that occur in it.  Five substitutions are supported: simple,
 *  list, comment, tab, and conditional.
 *  Substitutable items in the template are bracketed with angle
 *  brackets. (Backslash can be used to escape an angle bracket.)
 *  Simple substitutions just replace a symbol with its value. If
 *  the symbol has no value in this template object then the symbol
 *  is replaced error string but no error is raised.
 *  List substitution assumes that the symbol has a value in output
 *  template list form. This is a newline separated string of
 *  values. The list substitution specification consists of four
 *  parts, a prefix, a symbol, a separator, and a list indicator.
 *  prefixes and separators can only be composed of blanks, comma,
 *  colons, and semi-colons.  The list indicator is "..." (three
 *  periods).  For example, the list substitution
 *  specification "<, name, ...> has a prefix of ", ", a symbol of
 *  "name" and a separator of ", ".  The prefix will be used
 *  whenever there is at least one item in the list and the separator
 *  will be used between any two list items.  After the first items
 *  of a list is placed each additional item is evaluated to see if
 *  it would begin after the line length limit (set by
 *  _set_somtLineLength), if it would then a new line is begun and the
 *  value is placed directly under the first item.
 *  Comment substitution assumes that the symbol has a value in
 *  output template list form.  A comment specification consists of
 *  a comment indicator followed by a symbol name. The comment
 *  indicator is "--".  Eg, <-- classComment> is a valid comment
 *  substitution specification.  The lines of the comment are output
 *  according to the current comment style (see <somtCommentStyle>)
 *  and alined with the starting column of the comment
 *  specification.
 *  Tab substitution is specified by <@dd> where "dd" is a valid
 *  positive integer. Blanks will be inserted into the output stream
 *  if necessary to position the next character of output at the
 *  column indicated by "dd".
 *  Conditional substitution is specified by puting a question mark,
 *  "?", in column one of the template line.  The line will not be
 *  output at all unless at least one valid, non-blank,  symbol
 *  substitution  occurs on the line.
 */
#define somMD_SOMTTemplateOutputC_somto "::SOMTTemplateOutputC::somto"
#define SOMTTemplateOutputC_somto(somSelf,tmplt) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somto) \
	(somSelf,tmplt))
#ifndef SOMGD_somto
    #if (defined(_somto) || defined(__somto))
        #undef _somto
        #undef __somto
        #define SOMGD_somto 1
    #else
        #define _somto SOMTTemplateOutputC_somto
    #endif /* _somto */
#endif /* SOMGD_somto */

/*
 * New Method: somtOutputComment
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somtOutputComment(SOMTTemplateOutputC *somSelf, 
		string comment);
#pragma linkage(somTP_SOMTTemplateOutputC_somtOutputComment, system)
typedef somTP_SOMTTemplateOutputC_somtOutputComment *somTD_SOMTTemplateOutputC_somtOutputComment;
/*
 *  Inserts a comment into the output stream.  <comment> must be a
 *  string containing the comment with lines in the comment
 *  seperated by newlines.
 *  The style of output is controlled by <somtCommentStyle>
 */
#define somMD_SOMTTemplateOutputC_somtOutputComment "::SOMTTemplateOutputC::somtOutputComment"
#define SOMTTemplateOutputC_somtOutputComment(somSelf,comment) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtOutputComment) \
	(somSelf,comment))
#ifndef SOMGD_somtOutputComment
    #if (defined(_somtOutputComment) || defined(__somtOutputComment))
        #undef _somtOutputComment
        #undef __somtOutputComment
        #define SOMGD_somtOutputComment 1
    #else
        #define _somtOutputComment SOMTTemplateOutputC_somtOutputComment
    #endif /* _somtOutputComment */
#endif /* SOMGD_somtOutputComment */

/*
 * New Method: somtOutputSection
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somtOutputSection(SOMTTemplateOutputC *somSelf, 
		string sectionName);
#pragma linkage(somTP_SOMTTemplateOutputC_somtOutputSection, system)
typedef somTP_SOMTTemplateOutputC_somtOutputSection *somTD_SOMTTemplateOutputC_somtOutputSection;
/*
 *  Just like <somto> above, except <sectionName> must be a symbol
 *  whose value will be used as the template.
 */
#define somMD_SOMTTemplateOutputC_somtOutputSection "::SOMTTemplateOutputC::somtOutputSection"
#define SOMTTemplateOutputC_somtOutputSection(somSelf,sectionName) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtOutputSection) \
	(somSelf,sectionName))
#ifndef SOMGD_somtOutputSection
    #if (defined(_somtOutputSection) || defined(__somtOutputSection))
        #undef _somtOutputSection
        #undef __somtOutputSection
        #define SOMGD_somtOutputSection 1
    #else
        #define _somtOutputSection SOMTTemplateOutputC_somtOutputSection
    #endif /* _somtOutputSection */
#endif /* SOMGD_somtOutputSection */

/*
 * New Method: somtAddSectionDefinitions
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somtAddSectionDefinitions(SOMTTemplateOutputC *somSelf, 
		string defString);
#pragma linkage(somTP_SOMTTemplateOutputC_somtAddSectionDefinitions, system)
typedef somTP_SOMTTemplateOutputC_somtAddSectionDefinitions *somTD_SOMTTemplateOutputC_somtAddSectionDefinitions;
/*
 *  <defString> must be a string of the form:
 *  :section1
 *  value 1 line 1
 *  value 1 line 2
 *  :section2
 *  value 2 line 1
 *  :section3
 *  value 3 line 1
 *  Where the lines that contain a ":" in column 1 immediately followed
 *  by a single name are used to intro the start of a new section.
 *  The section is named by the name on the colon line.  A backslash
 *  can be used to escape a colon in column one that is not supposed
 *  to start a new section.
 *  Adds the indicated section definitions to this template.
 */
#define somMD_SOMTTemplateOutputC_somtAddSectionDefinitions "::SOMTTemplateOutputC::somtAddSectionDefinitions"
#define SOMTTemplateOutputC_somtAddSectionDefinitions(somSelf,defString) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtAddSectionDefinitions) \
	(somSelf,defString))
#ifndef SOMGD_somtAddSectionDefinitions
    #if (defined(_somtAddSectionDefinitions) || defined(__somtAddSectionDefinitions))
        #undef _somtAddSectionDefinitions
        #undef __somtAddSectionDefinitions
        #define SOMGD_somtAddSectionDefinitions 1
    #else
        #define _somtAddSectionDefinitions SOMTTemplateOutputC_somtAddSectionDefinitions
    #endif /* _somtAddSectionDefinitions */
#endif /* SOMGD_somtAddSectionDefinitions */

/*
 * New Method: somtReadSectionDefinitions
 */
typedef void   SOMLINK somTP_SOMTTemplateOutputC_somtReadSectionDefinitions(SOMTTemplateOutputC *somSelf, 
		FILE* fp);
#pragma linkage(somTP_SOMTTemplateOutputC_somtReadSectionDefinitions, system)
typedef somTP_SOMTTemplateOutputC_somtReadSectionDefinitions *somTD_SOMTTemplateOutputC_somtReadSectionDefinitions;
/*
 *  Reads section definitions from the indicated file.  The section
 *  definitions must be in the form defined above in
 *  <somtAddSectionDefinitions>.
 */
#define somMD_SOMTTemplateOutputC_somtReadSectionDefinitions "::SOMTTemplateOutputC::somtReadSectionDefinitions"
#define SOMTTemplateOutputC_somtReadSectionDefinitions(somSelf,fp) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtReadSectionDefinitions) \
	(somSelf,fp))
#ifndef SOMGD_somtReadSectionDefinitions
    #if (defined(_somtReadSectionDefinitions) || defined(__somtReadSectionDefinitions))
        #undef _somtReadSectionDefinitions
        #undef __somtReadSectionDefinitions
        #define SOMGD_somtReadSectionDefinitions 1
    #else
        #define _somtReadSectionDefinitions SOMTTemplateOutputC_somtReadSectionDefinitions
    #endif /* _somtReadSectionDefinitions */
#endif /* SOMGD_somtReadSectionDefinitions */

/*
 * New Method: somtExpandSymbol
 */
typedef string   SOMLINK somTP_SOMTTemplateOutputC_somtExpandSymbol(SOMTTemplateOutputC *somSelf, 
		string s, 
		string buf);
#pragma linkage(somTP_SOMTTemplateOutputC_somtExpandSymbol, system)
typedef somTP_SOMTTemplateOutputC_somtExpandSymbol *somTD_SOMTTemplateOutputC_somtExpandSymbol;
/*
 *  Expands simple symbols in an already expanded string.  Thus if you
 *  have a symbol which is itself a Section in a template file, and this
 *  section could have other sections in it then you should call this
 *  method.
 */
#define somMD_SOMTTemplateOutputC_somtExpandSymbol "::SOMTTemplateOutputC::somtExpandSymbol"
#define SOMTTemplateOutputC_somtExpandSymbol(somSelf,s,buf) \
    (SOM_Resolve(somSelf, SOMTTemplateOutputC, somtExpandSymbol) \
	(somSelf,s,buf))
#ifndef SOMGD_somtExpandSymbol
    #if (defined(_somtExpandSymbol) || defined(__somtExpandSymbol))
        #undef _somtExpandSymbol
        #undef __somtExpandSymbol
        #define SOMGD_somtExpandSymbol 1
    #else
        #define _somtExpandSymbol SOMTTemplateOutputC_somtExpandSymbol
    #endif /* _somtExpandSymbol */
#endif /* SOMGD_somtExpandSymbol */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMTTemplateOutputC_somDefaultInit SOMObject_somDefaultInit
#define SOMTTemplateOutputC_somDestruct SOMObject_somDestruct
#define SOMTTemplateOutputC_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMTTemplateOutputC_somDefaultAssign SOMObject_somDefaultAssign
#define SOMTTemplateOutputC_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMTTemplateOutputC_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMTTemplateOutputC_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMTTemplateOutputC_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMTTemplateOutputC_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMTTemplateOutputC_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMTTemplateOutputC_somFree SOMObject_somFree
#define SOMTTemplateOutputC_somGetClass SOMObject_somGetClass
#define SOMTTemplateOutputC_somGetClassName SOMObject_somGetClassName
#define SOMTTemplateOutputC_somGetSize SOMObject_somGetSize
#define SOMTTemplateOutputC_somIsA SOMObject_somIsA
#define SOMTTemplateOutputC_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMTTemplateOutputC_somRespondsTo SOMObject_somRespondsTo
#define SOMTTemplateOutputC_somDispatch SOMObject_somDispatch
#define SOMTTemplateOutputC_somClassDispatch SOMObject_somClassDispatch
#define SOMTTemplateOutputC_somCastObj SOMObject_somCastObj
#define SOMTTemplateOutputC_somResetObj SOMObject_somResetObj
#define SOMTTemplateOutputC_somDispatchV SOMObject_somDispatchV
#define SOMTTemplateOutputC_somDispatchL SOMObject_somDispatchL
#define SOMTTemplateOutputC_somDispatchA SOMObject_somDispatchA
#define SOMTTemplateOutputC_somDispatchD SOMObject_somDispatchD
#define SOMTTemplateOutputC_somDumpSelf SOMObject_somDumpSelf
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMTTemplateOutputC_h */