#pragma once

#include "quantum.h"

#define LAYOUT( \
	K00, K01, K02, K03, K04, \
	K10, K11, K12, K13, K14, \
	K20, K21, K22, K23 \
) \
{ \
	{ K00,   K01,   K02,   K03,   K04,}, \
	{ K10,   K11,   K12,   K13,   K14,}, \
	{ K20,   K21,   K22,   K23}   \
} 
