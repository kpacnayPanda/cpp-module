#include "Phonebook.hpp"

Phonebook::Phonebook() {
	index = 0;
}

void Phonebook::Add()
{
	std::string tmp;

	std::cout << "Enter first name: ";
	std::getline(std::cin, tmp);
	contacts[index].set_name(tmp);
	std::cout << "Enter second name: ";
	std::getline(std::cin, tmp);
	contacts[index].set_surname(tmp);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, tmp);
	contacts[index].set_nick(tmp);
	std::cout << "Enter phone: ";
	std::getline(std::cin, tmp);
	contacts[index].set_phone(tmp);
	std::cout << "Enter dark secret: ";
	std::getline(std::cin, tmp);
	contacts[index].set_secret(tmp);
	if (++index == 8) {
		index = 0;
	}
}

void Phonebook::Show() {
	int i = 0;
	std::string tmp;
	int index;

	std::cout << std::setw(11) << "index|" << std::setw(11) << "name|"
	<< std::setw(11) << "surname|" << std::setw(11) << "nick|" << std::endl;

	while (i < 8) {
		if (!contacts[i].check()) {
			contacts[i].print(i + 1);
		}
		i++;
	}
	std::cout << "Select index: ";
	std::getline(std::cin, tmp);
	index = std::atoi(tmp.c_str());
	if (index <= 0 || index > 8 || contacts[index - 1].check()) {
		std::cout << "--- Wrong input---" << std::endl;
	} else {
		contacts[index - 1].print_contact();
	}
}
