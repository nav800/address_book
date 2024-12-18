#ifndef addressBook_H
#define addressBook_H

#include <string>

class AddressBook{
  class Iterator{
    AddressBook _book;
    int _index;
  }
int size;
Contact* _contacts;

};

class Contact{
  std::string _name;
  std::string _email;
  int _number;
};

#endif
