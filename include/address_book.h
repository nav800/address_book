#ifndef addressBook_H
#define addressBook_H

#include <string>

class Contact{
  std::string _name;
  std::string _email;
  size_t _number;
};

class AddressBook{
  class Iterator{
    size_t _index;
  };
size_t capacity;
size_t _size;
Contact* _contacts;
public:
  AddressBook::AddressBook(){
    _capacity = 0;
    _size = 0;
    _contacts = new Contact[_capacity];
  }
  void push_back(const Contact& cont) {
    _data[_size++] = cont;
  }
};

#endif
