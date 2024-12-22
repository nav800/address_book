#include "../include/ab_ui.h"

int main() {
  AddressBook b = AddressBook();
  b.add_contact("Abhinav Nair", 8184146613, "abhinavishere@hotmail.com");
  b.add_contact("Biju Nair", 8184777542, "bijuishere@hotmail.com");
  b.add_contact("Sreedevi Nair", 8184289426, "sreedeviishere@hotmail.com");
  b.add_contact("Naveen Nair", 8189608265, "naveenishere@hotmail.com");
  main_menu(b);
  return 0;
}
