#ifndef addressBook_H
#define addressBook_H

#include <string>

class Contact{
  std::string _name;
  std::string _email;
  int _number;
};

class AddressBook{
  class Iterator{
    int _index;
  };
int size;
Contact* _contacts;

};

#endif
