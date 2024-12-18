#ifndef addressBook_H
#define addressBook_H

#include <string>
#include <vector>
#include <iostream>

class Contact{
  std::string name;
  int number;
  std::string email;

  public:
  Contact(const std::string& name = "Name empty", const size_t number = -8, const std::string& email = "No email given") : name(name), number(number), email(email) {}

  bool empty(){
    return (name == "Name empty" && number == -8 && email == "No email given");
  }
  void edit(const std::string& _name = "Name empty", const size_t _number = -8, const std::string& _email = "No email given"){
    if (_name != "Name empty"){
      name = _name;
    }
    if (_number != -8){
      number = _number;
    }
    if (_email != "No email given"){
      email = _email;
    }
  }
  std::string Name(){
    return name;
  }
  int Number(){
    return number;
  }
  std::string Email(){
    return email;
  }
};

class AddressBook{
  std::vector<Contact> _contacts;
  
  public:
    AddressBook() {}
    void add_contact(std::string name, int number, std::string email){
      Contact temp = Contact(name, number, email);
      _contacts.push_back(temp);
    }
    void add_contact(Contact temp){
      _contacts.push_back(temp);
    }
    void display(Contact c){
      std::cout << "Name: " << c.Name() << ", Number: " << c.Number() << ", Email: " << c.Email() << std::endl;
    }
    void display_all(){
      for (Contact c: _contacts){
        display(c);
      }
    }
    void edit_index(int index, std::string name, int number, std::string email){
      _contacts[index].edit(name, number, email);
    }
};
#endif
