#include "../include/linked_list.hpp"

int main(int argc, char const* argv[]) {
  
  LinkedList<int> lista;

  lista.push_front(10);
  lista.push_front(20);
  lista.push_front(30);
  lista.push_front(40);
  lista.push_front(50);
  lista.push_front(60);
  lista.print();
  lista.insert(5, 99);
  lista.print();

  return 0;
}
