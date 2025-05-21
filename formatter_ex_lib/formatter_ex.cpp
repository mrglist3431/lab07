#include "formatter_ex.h"
#include "formatter.h"
std::string formatter_ex(const std::string& text) {
    return "[" + formatter(text) + "]";
}
