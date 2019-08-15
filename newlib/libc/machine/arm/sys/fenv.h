/* Copyright (c) 2017  SiFive Inc. All rights reserved.

   This copyrighted material is made available to anyone wishing to use,
   modify, copy, or redistribute it subject to the terms and conditions
   of the FreeBSD License.   This program is distributed in the hope that
   it will be useful, but WITHOUT ANY WARRANTY expressed or implied,
   including the implied warranties of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  A copy of this license is available at
   http://www.opensource.org/licenses.
*/

/*
 * Source - $NetBSD: fenv.h,v 1.5 2017/04/09 15:15:34 christos Exp $

 * Based on ieeefp.h written by J.T. Conklin, Apr 28, 1995
 * Public domain.
 */

#ifndef _SYS_ARM_FENV_H_
#define _SYS_ARM_FENV_H_

#include <sys/cdefs.h>

typedef int fenv_t;	
typedef int fexcept_t;

#define FE_DIVBYZERO 0x00000001
#define FE_INEXACT   0x00000002
#define FE_INVALID   0x00000004
#define FE_OVERFLOW  0x00000008
#define FE_UNDERFLOW 0x00000010

#define FE_ALL_EXCEPT 0x0000001f

#define FE_DOWNWARD   	2
#define FE_TONEAREST  	0
#define FE_TOWARDZERO 	3
#define FE_UPWARD     	1

__BEGIN_DECLS

/* Default floating-point environment */
extern const fenv_t	__fe_dfl_env;
#define FE_DFL_ENV	(&__fe_dfl_env)

__END_DECLS

#endif /* _SYS_ARM_FENV_H_ */