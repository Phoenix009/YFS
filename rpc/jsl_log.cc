#include "jsl_log.h"

dbcode JSL_DEBUG_LEVEL = dbcode::JSL_DBG_OFF;

void
jsl_set_debug(int level) {
	JSL_DEBUG_LEVEL = static_cast<dbcode>(level);
}


