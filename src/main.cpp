#include "../include/address_book.h"
#include <iostream>

int main() {
  Contact c = Contact("Hi", 123, "there");
  AddressBook b = AddressBook(4);
  b.push_back(c);
  std::cout << "Enter contact: ";
  return 0;
}
