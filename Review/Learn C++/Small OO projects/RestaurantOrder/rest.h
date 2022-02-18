#ifndef REST_H_
#define REST_H_

#include <iostream>
#include <string>

/// Rest - Abstract definition of a Restaurant
///
/// Each Restaurant will have it's own specific name
class Rest {
public:
    /// Destructor for Rest
    virtual ~Rest() {}
    /// GetName returns the name of the Restaurant
    /// This function is pure virtual
    virtual const std::string& GetName() = 0;
};

#endif