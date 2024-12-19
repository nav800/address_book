#include "../include/address_book.h"
#include <iostream>

int main() {
  Contact c = Contact("Hi", 123, "there");
  AddressBook b = AddressBook();
  std::cout << "Enter contact: ";
  return 0;
}
