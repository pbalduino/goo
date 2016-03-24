#define GOO_DEBUG

#include <iostream>
#include <list.hpp>

int main() {
   Goo::List<int> empty_int_list;

   std::cout << "Size: " << empty_int_list.size() << std::endl;

   std::getchar();
}