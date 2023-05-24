#ifndef COURSE_H
#define COURSE_H

#include <string>

struct Course {
    std::string id;
    std::string name;

    bool operator<(const Course& other) const {
       if (id != other.id) {
            return id < other.id;
        }
        if (name != other.name) {
            return name < other.name;
        }
    return false;
    
}
};



#endif