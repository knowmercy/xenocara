/* $XFree86: xc/programs/fstobdf/fstobdf.h,v 1.2 2001/08/27 17:41:01 dawes Exp $ */
/*
 * Copyright (C) 1998 The XFree86 Project, Inc.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * XFREE86 PROJECT BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of the XFree86 Project shall
 * not be used in advertising or otherwise to promote the sale, use or other
 * dealings in this Software without prior written authorization from the
 * XFree86 Project.
 */

#include	<X11/fonts/FSlib.h>

extern Bool EmitHeader ( FILE *outFile, FSXFontInfoHeader *fontHeader, 
			 FSPropInfo *propInfo, FSPropOffset *propOffsets, 
			 unsigned char *propData );
extern Bool EmitProperties ( FILE *outFile, FSXFontInfoHeader *fontHeader, 
			     FSPropInfo *propInfo, FSPropOffset *propOffsets, 
			     unsigned char *propData );
extern Bool EmitCharacters ( FILE *outFile, FSServer *fontServer, 
			     FSXFontInfoHeader *fontHeader, Font fontID );

extern unsigned long yResolution; /* intended vertical resoultion for font */
extern unsigned long pointSize;   /* font height in points */
