/*
** File： tini_cfg.h
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

#ifndef TINI_CFG_H
#define TINI_CFG_H

#include <stdio.h>

/* Common definitons **********************************/
/* 
** @ TINI_DATA_ALLOC_MODE list
**     - TINI_USING_STATIC_MALLOC
**     - TINI_USING_DYNAMIC_MALLOC
*/
#define TINI_DATA_ALLOC_MODE TINI_USING_STATIC_MALLOC

#if TINI_DATA_ALLOC_MODE == TINI_USING_STATIC_MALLOC
#define TINI_ITEM_NAME_MAX  (20)
#elif TINI_DATA_ALLOC_MODE == TINI_USING_DYNAMIC_MALLOC
#else
#error "TINI_ERROR: Please define data allocation mode!"
#endif

/* Definitons about ini parser ************************/
#define TINI_USING_PARSER

/* Definitons about ini handler ***********************/
#define TINI_USING_HANDLER

/* Definitons about ini printer ***********************/
#define TINI_USING_PRINTER

#endif /* The end of TINI_CFG_H */
