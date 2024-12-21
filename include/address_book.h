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
  std::string Name(){ return name; }
  int Number(){ return number; }
  std::string Email(){ return email; }
};

class AddressBook{
  std::vector<Contact> _contacts;
  
  public:
    AddressBook() {}
    size_t size(){
      return _contacts.size();
    }
    
    void add_contact(std::string name, int number, std::string email){
      Contact temp = Contact(name, number, email);
      _contacts.push_back(temp);
    }
    void add_contact(Contact temp){
      _contacts.push_back(temp);
    }

    void display(Contact c){
      std::cout << "Name: " << c.Name() << ", Number: " << c.Number() << ", Email: " << c.Email() << "\n" << std::endl;
    }
    void display_some_indexes(std::vector<int> _list){
      if (_list.size() == 0){
        std::cout << "No contacts to display" << std::endl;
      }
      for (size_t i = 0; i < _list.size(); ++i){
        display(_contacts[_list[i]]);
      }
    }
    void display_some(std::vector<Contact> _list){
      if (_list.size() == 0){
        std::cout << "No contacts to display" << std::endl;
      }
      for (size_t i = 0; i < _list.size(); ++i){
        display(_list[i]);
      }
    }
    void display_all(){
      display_some(_contacts);
    }

    std::vector<int> search_n(std::string name){
      std::vector<int> _list;
      for (size_t i = 0; i < _contacts.size(); ++i){
        if (_contacts[i].Name() == name){
          _list.push_back(i);
        }
      }
      return _list;
    }
    std::vector<int> search_m(int number){
      std::vector<int> _list;
      for (size_t i = 0; i < _contacts.size(); ++i){
        if (_contacts[i].Number() == number){
          _list.push_back(i);
        }
      }
      return _list;
    }
    std::vector<int> search_m(std::vector<int> list, int number){
      std::vector<int> _list;
      for (size_t i = 0; i < list.size(); ++i){
        if (_contacts[list[i]].Number() == number){
          _list.push_back(list[i]);
        }
      }
      return _list;
    }
    std::vector<int> search_e(std::string email){
      std::vector<int> _list;
      for (size_t i = 0; i < _contacts.size(); ++i){
        if (_contacts[i].Email() == email){
          _list.push_back(i);
        }
      }
      return _list;
    }
    std::vector<int> search_e(std::vector<int> list, std::string email){
      std::vector<int> _list;
      for (size_t i = 0; i < list.size(); ++i){
        if (_contacts[list[i]].Email() == email){
          _list.push_back(list[i]);
        }
      }
      return _list;
    }

    void edit_index(int index, std::string name, int number, std::string email){
      _contacts[index].edit(name, number, email);
    }
    void delete_index(int index){
      _contacts.erase(_contacts.begin()+index);
    }
};
#endif
