#include "nereid.h"
#include "scheduler.h"

/*
 * determines if the result was a success
 */
inline bool SUCCESS(Result r) {
    bool ret;
    (r == S_OK) ? ret = true : ret = false;
    return ret;
}

/*
 * Determines if the result was not a success
 */
inline bool FAILURE(Result r) {
    bool ret;
    r != S_OK ? ret = true : ret = false;
    return ret;
}

/*
 * print an error message containing the function, and line number, as well as a message
 */
void reportError(std::string func, int line, std::string msg) {
    std::cout << func << ", line " << line << ": " << msg << std::endl;
}

extern const std::string BASEDIR("/home/brian/school/research/nereid/");
