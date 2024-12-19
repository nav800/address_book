#ifndef addressBook_H
#define addressBook_H

#include <string>
#include <vector>

class Contact{
  std::string name;
  int number;
  std::string email;

  public:
  Contact(const std::string& name = "Name empty", const size_t number = -8, const std::string& email = "No email given") : name(name), number(number), email(email) {}

  bool empty(){
    return (name == "Name empty" && number == -8 && email == "No email given");
  }
};

class AddressBook{
  std::vector<Contact> _contacts;
  
  public:
    AddressBook() {}
};
#endif
