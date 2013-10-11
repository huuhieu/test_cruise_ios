#ifndef __ATTRDICT_H__
#define __ATTRDICT_H__

/* attrdict.h -- extended attribute information

   (c) 1998-2006 (W3C) MIT, ERCIM, Keio University
   See tidy.h for the copyright notice.

   $Id: attrdict.h,v 1.4 2006/09/12 15:14:44 arnaud02 Exp $
*/

#include "tidy.h"

typedef struct _AttrVersion
{
    TidyAttrId attribute;
    uint versions;
} AttrVersion;

extern const AttrVersion TY_(W3CAttrsFor_A)[];
extern const AttrVersion TY_(W3CAttrsFor_ABBR)[];
extern const AttrVersion TY_(W3CAttrsFor_ACRONYM)[];
extern const AttrVersion TY_(W3CAttrsFor_ADDRESS)[];
extern const AttrVersion TY_(W3CAttrsFor_APPLET)[];
extern const AttrVersion TY_(W3CAttrsFor_AREA)[];
extern const AttrVersion TY_(W3CAttrsFor_B)[];
extern const AttrVersion TY_(W3CAttrsFor_BASE)[];
extern const AttrVersion TY_(W3CAttrsFor_BASEFONT)[];
extern const AttrVersion TY_(W3CAttrsFor_BDO)[];
extern const AttrVersion TY_(W3CAttrsFor_BIG)[];
extern const AttrVersion TY_(W3CAttrsFor_BLOCKQUOTE)[];
extern const AttrVersion TY_(W3CAttrsFor_BODY)[];
extern const AttrVersion TY_(W3CAttrsFor_BR)[];
extern const AttrVersion TY_(W3CAttrsFor_BUTTON)[];
extern const AttrVersion TY_(W3CAttrsFor_CAPTION)[];
extern const AttrVersion TY_(W3CAttrsFor_CENTER)[];
extern const AttrVersion TY_(W3CAttrsFor_CITE)[];
extern const AttrVersion TY_(W3CAttrsFor_CODE)[];
extern const AttrVersion TY_(W3CAttrsFor_COL)[];
extern const AttrVersion TY_(W3CAttrsFor_COLGROUP)[];
extern const AttrVersion TY_(W3CAttrsFor_DD)[];
extern const AttrVersion TY_(W3CAttrsFor_DEL)[];
extern const AttrVersion TY_(W3CAttrsFor_DFN)[];
extern const AttrVersion TY_(W3CAttrsFor_DIR)[];
extern const AttrVersion TY_(W3CAttrsFor_DIV)[];
extern const AttrVersion TY_(W3CAttrsFor_DL)[];
extern const AttrVersion TY_(W3CAttrsFor_DT)[];
extern const AttrVersion TY_(W3CAttrsFor_EM)[];
extern const AttrVersion TY_(W3CAttrsFor_FIELDSET)[];
extern const AttrVersion TY_(W3CAttrsFor_FONT)[];
extern const AttrVersion TY_(W3CAttrsFor_FORM)[];
extern const AttrVersion TY_(W3CAttrsFor_FRAME)[];
extern const AttrVersion TY_(W3CAttrsFor_FRAMESET)[];
extern const AttrVersion TY_(W3CAttrsFor_H1)[];
extern const AttrVersion TY_(W3CAttrsFor_H2)[];
extern const AttrVersion TY_(W3CAttrsFor_H3)[];
extern const AttrVersion TY_(W3CAttrsFor_H4)[];
extern const AttrVersion TY_(W3CAttrsFor_H5)[];
extern const AttrVersion TY_(W3CAttrsFor_H6)[];
extern const AttrVersion TY_(W3CAttrsFor_HEAD)[];
extern const AttrVersion TY_(W3CAttrsFor_HR)[];
extern const AttrVersion TY_(W3CAttrsFor_HTML)[];
extern const AttrVersion TY_(W3CAttrsFor_I)[];
extern const AttrVersion TY_(W3CAttrsFor_IFRAME)[];
extern const AttrVersion TY_(W3CAttrsFor_IMG)[];
extern const AttrVersion TY_(W3CAttrsFor_INPUT)[];
extern const AttrVersion TY_(W3CAttrsFor_INS)[];
extern const AttrVersion TY_(W3CAttrsFor_ISINDEX)[];
extern const AttrVersion TY_(W3CAttrsFor_KBD)[];
extern const AttrVersion TY_(W3CAttrsFor_LABEL)[];
extern const AttrVersion TY_(W3CAttrsFor_LEGEND)[];
extern const AttrVersion TY_(W3CAttrsFor_LI)[];
extern const AttrVersion TY_(W3CAttrsFor_LINK)[];
extern const AttrVersion TY_(W3CAttrsFor_LISTING)[];
extern const AttrVersion TY_(W3CAttrsFor_MAP)[];
extern const AttrVersion TY_(W3CAttrsFor_MENU)[];
extern const AttrVersion TY_(W3CAttrsFor_META)[];
extern const AttrVersion TY_(W3CAttrsFor_NEXTID)[];
extern const AttrVersion TY_(W3CAttrsFor_NOFRAMES)[];
extern const AttrVersion TY_(W3CAttrsFor_NOSCRIPT)[];
extern const AttrVersion TY_(W3CAttrsFor_OBJECT)[];
extern const AttrVersion TY_(W3CAttrsFor_OL)[];
extern const AttrVersion TY_(W3CAttrsFor_OPTGROUP)[];
extern const AttrVersion TY_(W3CAttrsFor_OPTION)[];
extern const AttrVersion TY_(W3CAttrsFor_P)[];
extern const AttrVersion TY_(W3CAttrsFor_PARAM)[];
extern const AttrVersion TY_(W3CAttrsFor_PLAINTEXT)[];
extern const AttrVersion TY_(W3CAttrsFor_PRE)[];
extern const AttrVersion TY_(W3CAttrsFor_Q)[];
extern const AttrVersion TY_(W3CAttrsFor_RB)[];
extern const AttrVersion TY_(W3CAttrsFor_RBC)[];
extern const AttrVersion TY_(W3CAttrsFor_RP)[];
extern const AttrVersion TY_(W3CAttrsFor_RT)[];
extern const AttrVersion TY_(W3CAttrsFor_RTC)[];
extern const AttrVersion TY_(W3CAttrsFor_RUBY)[];
extern const AttrVersion TY_(W3CAttrsFor_S)[];
extern const AttrVersion TY_(W3CAttrsFor_SAMP)[];
extern const AttrVersion TY_(W3CAttrsFor_SCRIPT)[];
extern const AttrVersion TY_(W3CAttrsFor_SELECT)[];
extern const AttrVersion TY_(W3CAttrsFor_SMALL)[];
extern const AttrVersion TY_(W3CAttrsFor_SPAN)[];
extern const AttrVersion TY_(W3CAttrsFor_STRIKE)[];
extern const AttrVersion TY_(W3CAttrsFor_STRONG)[];
extern const AttrVersion TY_(W3CAttrsFor_STYLE)[];
extern const AttrVersion TY_(W3CAttrsFor_SUB)[];
extern const AttrVersion TY_(W3CAttrsFor_SUP)[];
extern const AttrVersion TY_(W3CAttrsFor_TABLE)[];
extern const AttrVersion TY_(W3CAttrsFor_TBODY)[];
extern const AttrVersion TY_(W3CAttrsFor_TD)[];
extern const AttrVersion TY_(W3CAttrsFor_TEXTAREA)[];
extern const AttrVersion TY_(W3CAttrsFor_TFOOT)[];
extern const AttrVersion TY_(W3CAttrsFor_TH)[];
extern const AttrVersion TY_(W3CAttrsFor_THEAD)[];
extern const AttrVersion TY_(W3CAttrsFor_TITLE)[];
extern const AttrVersion TY_(W3CAttrsFor_TR)[];
extern const AttrVersion TY_(W3CAttrsFor_TT)[];
extern const AttrVersion TY_(W3CAttrsFor_U)[];
extern const AttrVersion TY_(W3CAttrsFor_UL)[];
extern const AttrVersion TY_(W3CAttrsFor_VAR)[];
extern const AttrVersion TY_(W3CAttrsFor_XMP)[];

#endif /* __ATTRDICT_H__ */
