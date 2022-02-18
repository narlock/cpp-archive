#ifndef ARBY_H_
#define ARBY_H_

#include "rest.h"

/// A sample implementation of a Restaurant
///
/// Uses the abstract rest definition to define a restaurant with a name
class Arby : public Rest {
public:
    /// Arby constructor
    /// @param name : The name of the specific Arby Restaurant
    Arby(const std::string& name) : name(name) {}
    /// GetName function returns the name of the Arby Restaurant
    const std::string& GetName() { return name; }
private:
    /// name : Atribute for the name of the restaurant
    std::string name;
};

#endif