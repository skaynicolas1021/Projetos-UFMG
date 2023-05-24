#include "alloc_board.hpp"
#include <iostream>

enum class TestKind : char {
  alloc = 'a',
  dealloc = 'd',
  show = 's'
};

int main() {
  AllocBoard board;
  char tkind;
  
  while (std::cin >> tkind) {
    switch (static_cast<TestKind>(tkind)) {
    case TestKind::alloc: {
      std::string id, name;
      std::string day, hour, room;

      std::cin >> id >> name >> day >> hour >> room;
      board.allocate({id, name}, day, hour, room);
      
      break;}
    case TestKind::dealloc: {
      std::string id;
      std::string day, hour, room;
      
      std::cin >> id >> day >> hour >> room;
      board.deallocate(id, day, hour, room);

      break;}
    case TestKind::show:
      board.show();
    }
  }
 
  return 0;
}
