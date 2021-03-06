/*
 *  Copyright (c) KONINKLIJKE PHILIPS ELECTRONICS N.V. 2000-2010
 *  All rights reserved.
 *  For licensing and warranty information, see the file COPYING.LGPLv21.txt
 *  in the root directory of this package.
 *
 *  Philips Research Laboratories
 *  Eindhoven, The Netherlands
 *
 *  CVS id      :  $Id: cpfspd_mag.h,v 2.15 2010/01/05 14:18:32 riemens Exp $
 *
 */

#ifndef CPFSPD_MAG_H_INCLUDED
#define CPFSPD_MAG_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 
 * Version identification functions:
 * - p_get_version() Returns string with the version number.
 * - p_get_magic()   Returns string with the magic number (depends
 *                   on the contents of all .c and .h files).
 *
 * Note: The "p_revision_str" character string is also externally defined.
 *       This character string contains the name, version & magic number
 *       of the application. This string is not intended to be used by the
 *       application itself. The shell commands "ident" or "what" can be
 *       used on an executable file or library archive to retrieve the
 *       version information.
 *
 * Note: These functions use strings generated by the MTK Makefile
 *       system. If another Makefile or another build tool is
 *       used the magic.c implementation takes a default value.
 */
extern char *p_revision_str;
extern char *p_get_version(void);
extern char *p_get_magic(void);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* end of #ifndef CPFSPD_MAG_H_INCLUDED */
