#include "main.h"

bool startswith(const char* str, const char* letters) {
    int strLen = strlen(str);
    int lettersLen = strlen(letters);

    if (strLen < lettersLen) {
        return false;
    }

    for (int i = 0; i < lettersLen; i++) {
        if (str[i] != letters[i]) {
            return false;
        }
    }

    return true;
}