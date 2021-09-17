#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {
	private:
		Contact contacts[8];
		int index;
	public:
		Phonebook();
		void Add();
		void Show();
};

#endif
