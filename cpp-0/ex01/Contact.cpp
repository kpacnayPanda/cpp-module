#include "Contact.hpp"

void Contact::set_name(std::string name) {
	this->Name = name;
}

void Contact::set_surname(std::string surname) {
	this->Surname = surname;
}

void Contact::set_nick(std::string nick) {
	this->Nickname = nick;
}

void Contact::set_phone(std::string phone) {
	this->Phone_number = phone;
}

void Contact::set_secret(std::string secret) {
	this->Dark_secret = secret;
}

bool Contact::check() {
	return (this->Name.empty());
}

void Contact::check_print(std::string str) {
	if (str.length() > 10) {
		std::cout << std::setw(9) << str.substr(0, 9) << "." << "|";
	} else {
		std::cout << std::setw(10) << str << "|";
	}
}

void Contact::print(int i) {
	std::cout << std::setw(10) << i << "|";
	check_print(this->Name);
	check_print(this->Surname);
	check_print(this->Nickname);
	std::cout << std::endl;
}

void Contact::print_contact() {
	std::cout << "First name: " << this->Name << std::endl;
	std::cout << "Second name: " << this->Surname << std::endl;
	std::cout << "Nickname: " << this->Nickname << std::endl;
	std::cout << "Phone number: " << this->Phone_number << std::endl;
	std::cout << "Darkest secret: " << this->Dark_secret << std::endl;
}
