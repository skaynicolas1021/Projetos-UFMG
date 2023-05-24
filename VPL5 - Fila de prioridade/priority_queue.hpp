#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <map>


template <typename T>
class PriorityQueue {
public:

  /// @brief Adiciona um elemento a fila
  ///
  /// @param e        O elemento a ser adicionado
  /// @param priority A prioridade do elemento
  void enqueue(T e, unsigned priority);

  /// @brief Remove o elemento de maior prioridade
  ///
  /// Remove o elemento de maior prioridade. Se a fila
  /// estiver vazia, não tem nenhum efeito.
  void dequeue();

  /// @brief Recupera o elemento de maior prioridade.
  ///
  /// Recupera o elemento de maior prioridade. A fila
  /// não é alterada de nenhuma forma. Assume que a
  /// fila não está vazia (comportamento indefinido caso contrário).
  ///
  /// @return O elemento de maior priodidade,
  T peek();

  /// @brief Verifica se a lista está vazia.
  /// @return true se vazia, false caso contrário
  bool empty();
  
private:
  /// Adicione aqui os campos/métodos privados da sua implementação
    std::multimap<T, unsigned> _data;
};

#include "priority_queue.tpp"
#endif