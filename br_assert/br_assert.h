/*
 * Macros for various custom assertions
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT exit(1)

#define assert_default(expr) if (!(expr) && BR_DEBUG) {printf("ASSERT FAILED: line %d in function %s. Expression, %s, should have been true%s\n", __LINE__, __FUNCTION__, __STRING(expr)); EXIT;}

#define assert(expr, msg) if (!(expr) && BR_DEBUG) {printf("ASSERT FAILED: line %d in function %s. %s\n", __LINE__, __FUNCTION__, __STRING(msg));EXIT;}

#define assert_greater_than(expr1, expr2) if (!((expr1) > (expr2)) && BR_DEBUG) {printf("ASSERT FAILED: line %d in function %s. Left term, %s, should have been greater than right term, %s\n", __LINE__, __FUNCTION__, __STRING(expr1), __STRING(expr2)); EXIT;}
