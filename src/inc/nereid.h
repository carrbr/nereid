/*
 * Top level header file for the Nereid project
 */

/*
 * Control for assertions
 *
 * 1 -> assertions are on
 * 0 -> assertions are off
 */
#define BR_DEBUG 1

/*
 * Pull asserts library into project if necessary
 */
#if BR_DEBUG
#include "../../br_assert/br_assert.h"
#endif
