#include "../include/ab_ui.h"

void print(std::string message){
  std::cout << message << std::endl;
}

std::vector<int> find_contacts(AddressBook b){
  std::vector <int> list;
  std::string t_name, t_email, t_num_input;
  long t_number;

  for (size_t i = 0; i < b.size(); ++i){
    list.push_back(i);
  }
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Enter name: ";
  std::getline(std::cin, t_name);
  if(!t_name.empty()){
    list = b.search_n(t_name);
  }
  b.display_some_indexes(list);
  while (true) {
    std::cout << "Enter number: ";
    std::getline(std::cin, t_num_input);

    if(t_num_input.empty()){
      break;
    }

    try{
      t_number = std::stoi(t_num_input);
      if (list.size() == 0){
        list = b.search_m(t_number);
      }
      else{
        list = b.search_m(list, t_number);
      }
      break;
    }
    catch(std::invalid_argument){
      std::cout << "Invalid input! Please enter a number, or press enter if you do not know the number." << std::endl;
    }
    catch(std::out_of_range){
      std::cout << "Invalid input! Please enter a number, or press enter if you do not know the number." << std::endl;
    }
  }
  b.display_some_indexes(list);
  std::cin.clear();
  std::cout << "Enter email: ";
  std::getline(std::cin, t_email);
  if(!t_email.empty()){
    if (list.size() == 0){
      list = b.search_e(t_email);
    }
    else{
      list = b.search_e(list, t_email);
    }
  }
  b.display_some_indexes(list);
  return list;
}

void main_menu(AddressBook b){
  std::string t_name, t_email, t_num_input;
  long t_number;
  int t_index, choice;
  while(choice != 6){
    auto entry = display_menu();
    choice = entry;
    if(choice == 1){
      b.display_all();
    } 
    else if(choice == 2){
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Enter name: ";
      std::getline(std::cin, t_name);
      if(t_name.empty()){
        t_name = "Name empty";
      }
      while (true) {
        std::cout << "Enter number: ";
        std::getline(std::cin, t_num_input);

        if(t_num_input.empty()){
          t_number = -8;
          break;
        }

        try{
          t_number = std::stoi(t_num_input);
          break;
        }
        catch(std::invalid_argument){
          std::cout << "Invalid input! Please enter a number, or press enter if you cannot enter the number." << std::endl;
        }
        catch(std::out_of_range){
          std::cout << "Invalid input! Please enter a number, or press enter if you cannot enter the number." << std::endl;
        }
      }
      std::cin.clear();
      std::cout << "Enter email: ";
      std::getline(std::cin, t_email);
      if(t_email.empty()){
        t_email = "No email given";
      }
      b.add_contact(t_name, t_number, t_email);
      std::cout << "Contact added!" << "\n" << std::endl;
    }
    else if(choice == 3){
      find_contacts(b);
    }
    else if(choice == 4){
      std::cin.clear();
      print("WARNING: Editing a contact will change every contact with the same name, number, and email.");
      std::vector<int> list = find_contacts(b);

      std::cin.clear();
      std::cout << "Enter name: ";
      std::getline(std::cin, t_name);
      if(t_name.empty()){
        t_name = "Name empty";
      }
      while (true) {
        std::cout << "Enter number: ";
        std::getline(std::cin, t_num_input);

        if(t_num_input.empty()){
          t_number = -8;
          break;
        }

        try{
          t_number = std::stoi(t_num_input);
          break;
        }
        catch(std::invalid_argument){
          std::cout << "Invalid input! Please enter a number, or press enter if you cannot enter the number." << std::endl;
        }
        catch(std::out_of_range){
          std::cout << "Invalid input! Please enter a number, or press enter if you cannot enter the number." << std::endl;
        }
      }
      std::cin.clear();
      std::cout << "Enter email: ";
      std::getline(std::cin, t_email);
      if(t_email.empty()){
        t_email = "No email given";
      }
      for(int i : list){
        b.edit_index(i, t_name, t_number, t_email);
      }
    }
    else if(choice == 5){
      std::cin.clear();
      print("WARNING: Entering nothing will empty the address book.");
      print("Enter 'Name empty', '-8', and 'No email given' to delete empty contacts.");
      std::vector<int> list = find_contacts(b);
      std::sort(list.rbegin(), list.rend());
      for(int i : list){
        b.delete_index(i);
      }
    }
  }
}

int display_menu(){
  int input;
  print("Enter 1 to List all Contacts");
  print("Enter 2 to Add new Contact");
  print("Enter 3 to Find a Contact");
  print("Enter 4 to Edit a Contact");
  print("Enter 5 to Delete a Contact");
  print("Enter 6 to Close the Program");
  while (true) {
      if (std::cin >> input) {
          break;
      } else {
          std::cerr << "Error: Invalid input. Please enter a number from 1 to 6: ";
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
  }
  return input;
}
