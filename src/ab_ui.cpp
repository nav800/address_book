#include "../include/ab_ui.h"

void print(std::string message){
  std::cout << message << std::endl;
}

void main_menu(AddressBook b){
  std::string t_name, t_email;
  int t_number=0;
  int t_index, choice;
  while(choice != 6){
    auto entry = display_menu();
    choice = entry;
    if(choice == 1){
      b.display_all();
    } else if(choice == 2){
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Enter name: ";
      std::getline(std::cin, t_name);
      if(t_name.empty()){
        t_name = "Name empty";
      }
      std::cout << "Enter number: ";
      while (true) {
        std::cout << "Enter an integer: ";
        std::cin >> t_number;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter an integer." << std::endl;
        } else {
            break; // Exit the loop if input is valid
        }
    }
      std::cout << "Enter email: ";
      std::cin >> t_email;
      if(t_email.empty()){
        t_email = "No email given";
      }
      b.add_contact(t_name, t_number, t_email);
      std::cout << "Contact added!" << "\n" << std::endl;
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
