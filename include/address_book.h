#ifndef addressBook_H
#define addressBook_H

#include <string>
#include <iostream>

class Contact{
  std::string name;
  long number;
  std::string email;

  public:
  Contact(const std::string& name = "Name empty", const size_t number = -8, const std::string& email = "No email given") : name(name), number(number), email(email) {}

  bool empty(){
    return (name == "Name empty" && number == -8 && email == "No email given");
  }
  void edit(const std::string& _name = "Name empty", const size_t _number = -8, const std::string& _email = "No email given"){
    name = _name;
    number = _number;
    email = _email;    
  }
  std::string Name(){ return name; }
  long Number(){ return number; }
  std::string Email(){ return email; }
};

class AddressBook{
  int capacity, size;
  Contact* _contacts;
  
  public:
    AddressBook(int _capacity = 10){
      capacity = _capacity;
      size = 0;
      _contacts = new Contact[capacity];
    }
    size_t size(){
      return size;
    }
    
    void add_contact(std::string name, long number, std::string email){
      Contact temp = Contact(name, number, email);
      push_back(temp);
    }
    void add_contact(Contact temp){
      push_back(temp);
    }
    void push_back(Contact temp){
      if (size == capacity){
        Contact* temp_contacts = new Contact[capacity*2];
        for (size_t i = 0; i < size; ++i){
          temp_contacts[i] = _contacts[i];
        }
        delete[] _contacts;
        _contacts = temp_contacts;
        capacity *= 2;
      }
      _contacts[size] = temp;
      ++size;
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
    void display_all(){
      for(size_t i = 0; i < size; ++i){
        display(_contacts[i]);
      }
    }

    std::vector<int> search_n(std::string name){
      std::vector<int> _list;
      for (size_t i = 0; i < size; ++i){
        if (_contacts[i].Name() == name){
          _list.push_back(i);
        }
      }
      return _list;
    }
    std::vector<int> search_m(long number){
      std::vector<int> _list;
      for (size_t i = 0; i < size; ++i){
        if (_contacts[i].Number() == number){
          _list.push_back(i);
        }
      }
      return _list;
    }
    std::vector<int> search_m(std::vector<int> list, long number){
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
      for (size_t i = 0; i < size; ++i){
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

    void edit_index(int index, std::string name, long number, std::string email){
      _contacts[index].edit(name, number, email);
    }
    void delete_index(int index){
      for (size_t i = index; i < size-1; ++i){
        _contacts[i] = _contacts[i+1];
      }
      --size;
    }
};
#endif
