#include <map>


template <typename T>
void PriorityQueue<T>::enqueue(T e, unsigned priority) {
    _data.insert(std::make_pair(priority, e));
}

template <typename T>
void PriorityQueue<T>::dequeue() {
    if (!_data.empty()) {
        _data.erase(--_data.end());
    }
}

template <typename T>
T PriorityQueue<T>::peek() {
    auto it = _data.rbegin();
        return it->second;
 
}


template <typename T>
bool PriorityQueue<T>::empty() {
  return _data.empty();
}


/*#include <vector>

template <typename T>
void PriorityQueue<T>::enqueue(T e, unsigned priority) {
std::pair<T, unsigned> elem(e, priority);
    if (_data.empty() || _data.back().second >= priority) {
        _data.push_back(elem);
    } else {
        auto it = _data.begin();
        while (it != _data.end() && it->second > priority) {
            ++it;
        }
        _data.insert(it, elem);
    }
}

template <typename T>
void PriorityQueue<T>::dequeue() {
    if (!_data.empty()) {
        _data.erase(_data.begin());
    }
}

template <typename T>
T PriorityQueue<T>::peek() {
        return _data.front().first;
 
}


template <typename T>
bool PriorityQueue<T>::empty() {
  return _data.empty();
}*/