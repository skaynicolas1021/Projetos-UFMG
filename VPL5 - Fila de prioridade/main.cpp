#include <iostream>
#include "priority_queue.hpp"

int main() {
  PriorityQueue<int> pq;
  std::cout << pq.empty() << std::endl;

  pq.enqueue(13, 5);
  pq.enqueue(21, 4);
  pq.enqueue(101, 0);
  pq.enqueue(0, 0);

  std::cout << pq.empty() << std::endl;
  std::cout << pq.peek() << std::endl;

  pq.enqueue(10, 99);
  std::cout << pq.peek() << std::endl;
  
  pq.dequeue();
  pq.dequeue();
  std::cout << pq.peek() << std::endl;

  return 0;
}
