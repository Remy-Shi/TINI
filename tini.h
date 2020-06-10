/*
** File： tini.h
**
** Copyright (c) 2020, Remy Shi
** 
** SPDX-License-Identifier: Apache-2.0
**
** Date             Author          Notes
** --------------------------------------------------
** 2020-06-09       Remy Shi        the first version
**
*/

#ifndef TINI_H
#define TINI_H

#include "tini_cfg.h"
#include <stdio.h>

#ifdef TINI_USING_PARSER
#include "tini_parser.h"
#endif /* The end of TINI_USING_PARSER */

#ifdef TINI_USING_HANDLER
#include "tini_handler.h"
#endif /* The end of TINI_USING_HANDLER */

#ifdef TINI_USING_PRINTER
#include "tini_printer.h"
#endif /* The end of TINI_USING_PRINTER */

typedef struct tini
{
    
}tini_t;

typedef struct tini_object
{
    /* data */
}tini_obj_t;

#ifdef __cplusplus
extern "C" {
#endif

#ifdef TINI_USING_DYNAMIC_MALLOC
void *(*tini_malloc)(size_t sz) = malloc;
void (*tini_free)(void *ptr) = free;
#endif

#ifdef __cplusplus
}
#endif

#endif /* The end of TINI_H */
