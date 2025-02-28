#ifndef BOOLEANS_CPP
#define BOOLEANS_CPP

#include <cstdio>
#include <cstring>
#include <cctype>

bool static isEmptyOrSpaces(const char* str) {
    while (*str) {
        if (!isspace((unsigned char)*str)) {
            return false;
        }
        str++;
    }
    return true;
}



#endif // !BOOLEANS_CPP
