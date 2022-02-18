#include "rest.h"

const std::string& Rest::GetName() {
    static std::string name("No Name Rest");
    return name;
}