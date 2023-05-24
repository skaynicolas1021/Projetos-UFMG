#ifndef ALLOC_BOARD_H
#define ALLOC_BOARD_H

#include "allocation.hpp"
#include "course.hpp"
#include <set>
class AllocBoard {
public:
  bool allocate(Course course, std::string day, std::string hour, std::string room);
  bool deallocate(std::string id, std::string day, std::string hour, std::string room);
  void show() const;

private:
  std::set<std::pair<Course, Allocation>> _Dados;
};

#endif

