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
size_t _capacity;
size_t _size;
Contact* _contacts;
public:
  AddressBook(){
    _capacity = 0;
    _size = 0;
    _contacts = new Contact[_capacity];
  }
  AddressBook(size_t length){
    _capacity = length;
    _size = 0;
    _contacts = new Contact[_capacity];
  }
  void push_back(const Contact& value) {
      if (_size >= _capacity) {
          if (1>(_capacity*2)){
              resize(1);
          }
          resize(_capacity*2);
      }
      _contacts[_size++] = value;
  }
  void resize(size_t new_capacity) {
      if (new_capacity == _capacity){
          return;
      }
      Contact* newCont = new Contact[new_capacity];
      for (size_t i = 0; i < _size; ++i) {
          newCont[i] = std::move(_contacts[i]);
      }
      delete[] _contacts;
      _contacts = newCont;
      _capacity = new_capacity;
  }
};

#endif
