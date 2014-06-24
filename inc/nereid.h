#ifndef NEREID_H
#define NEREID_H
/*
 * Top level header file for the Nereid project
 */

#include <stdio.h>
#include <string>
#include <iostream>

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
#include "br_assert.h"
#endif

typedef enum {
    S_OK,
    S_FAIL
} Result;

/*
 * determines if the result was a success
 */
inline bool SUCCESS(Result r);

/*
 * Determines if the result was not a success
 */
inline bool FAILURE(Result r); 

/*
 * print an error message containing the function, and line number, as well as a message
 */
void reportError(std::string func, int line, std::string msg);

extern const std::string BASEDIR;

typedef uint VertexID;
#endif
