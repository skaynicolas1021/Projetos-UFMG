#ifndef ALLOCATION_H
#define ALLOCATION_H

#include <string>

struct Allocation {
  std::string day;
  std::string hour;
  std::string room;
  
 bool operator<(const Allocation& other) const {
    if (day != other.day) {
      return day < other.day;
    }
    if (hour != other.hour) {
      return hour < other.hour;
    }
    return room < other.room;
  }
};

#endif