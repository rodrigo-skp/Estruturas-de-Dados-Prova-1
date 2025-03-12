#include "../include/vector_list.hpp"

int main(int argc, char const* argv[]) {
  
  VectorList<int> lista(10);

  lista.push_back(10);
  lista.push_back(20);
  lista.push_back(30);
  lista.push_back(40);
  lista.push_back(50);
  lista.push_back(60);
  lista.push_back(70);
  lista.push_back(80);
  lista.print();
  lista.insert(5, 99);
  lista.print();
  lista.pop_back();
  lista.print();

  return 0;
}
