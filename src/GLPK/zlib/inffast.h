/* inffast.h */

/* Modified by Andrew Makhorin <mao@gnu.org>, June 2013. */
/* For original code see <zlib-1.2.7/inffast.h>. */

/* inffast.h -- header to use inffast.c
 * Copyright (C) 1995-2003, 2010 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */

/* WARNING: this file should *not* be used by applications. It is
   part of the implementation of the compression library and is
   subject to change. Applications should only use zlib.h.
 */

void inflate_fast(z_streamp strm, unsigned start);

/* eof */
