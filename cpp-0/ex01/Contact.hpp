#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
	private:
		std::string	Name;
		std::string	Surname;
		std::string	Nickname;
		std::string	Phone_number;
		std::string	Dark_secret;
		void check_print(std::string str);

	public:
		void set_name(std::string name);
		void set_surname(std::string surname);
		void set_nick(std::string nick);
		void set_phone(std::string phone);
		void set_secret(std::string secret);
		bool check();
		void print(int i);
		void print_contact();
};

#endif
