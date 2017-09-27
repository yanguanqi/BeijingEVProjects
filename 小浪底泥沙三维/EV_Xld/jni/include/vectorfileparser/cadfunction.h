#pragma once
#ifndef CADFUNCTION_H_H
#define CADFUNCTION_H_H
#include "core/global.h"
#include "core/stringdefines.h"
#include "vectorfileparser/vectorfileparser_config.h"
using namespace EarthView::World::Core;

extern "C"
{
	EV_VECTORFILEPARSER_LIB const ev_uint8 *ACGetColorTable();
	EV_VECTORFILEPARSER_LIB EVString ACTextUnescape( const ev_char *pszRawInput );
};

#endif