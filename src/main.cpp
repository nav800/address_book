#include "../include/ab_ui.h"

int main() {
  AddressBook b = AddressBook();
  main_menu(b);
  /*std::string t_name, t_email;
  int t_number=0;
  int t_index;
  std::cout << "Enter name: ";
  std::cin >> t_name;
  std::cout << "Enter number: ";
  std::cin >> t_number;
  std::cout << "Enter email: ";
  std::cin >> t_email;
  Contact d = Contact(t_name, t_number, t_email);
  Contact c = Contact("Hi", 123, "there");
  b.add_contact(c);
  b.add_contact(d);
  b.display_all();
  std::cout << "Enter index:";
  std::cin >> t_index;
  std::cout << "Enter name: ";
  std::cin >> t_name;
  std::cout << "Enter number: ";
  std::cin >> t_number;
  std::cout << "Enter email: ";
  std::cin >> t_email;
  b.edit_index(t_index, t_name, t_number, t_email);
  b.display_all();*/
  return 0;
}
