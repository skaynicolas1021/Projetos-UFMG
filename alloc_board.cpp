#include "alloc_board.hpp"
#include "allocation.hpp"
#include "course.hpp"
#include <map>
#include <iostream> 


bool AllocBoard::allocate(Course course, std::string day, std::string hour, std::string room){
    Allocation horario = {day, hour, room};
    std::pair<Course, Allocation> elem = std::make_pair(course, horario);
    auto result =  _Dados.insert(elem);
    return result.second;
}

bool AllocBoard::deallocate(std::string id, std::string day, std::string hour, std::string room){
    for(auto it= _Dados.begin(); it != _Dados.end(); it++){
        if(it->first.id == id && it->second.day == day && it->second.hour == hour && it->second.room == room){///llllll
            auto result = _Dados.erase(it);
            return true;
        }
    }
    return false;
    
}
    void AllocBoard::show() const{
            for(auto it = _Dados.begin(); it != _Dados.end(); it++){
            std::cout << it->first.id << " " << it->first.name  << " " << it->second.day << " " << it->second.hour << " " << it->second.room << std::endl;
        }
    }
