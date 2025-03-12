#include "../include/doubly_linked_list.hpp"

int main(int argc, char const* argv[]) {
  
  DoublyLinkedList<int> lista;

  lista.push_front(10);
  lista.push_front(20);
  lista.push_front(30);
  lista.push_front(40);
  lista.push_front(50);
  lista.push_front(60);
  lista.push_front(70);
  lista.push_front(80);
  lista.push_front(90);
  lista.push_front(100);
  lista.push_front(110);
  lista.push_front(120);
  lista.print();
  lista.erase(lista.begin() + 2, lista.end() - 1);
  lista.print();

  return 0;
}
