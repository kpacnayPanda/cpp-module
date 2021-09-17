#include "Phonebook.hpp"

int main(void) {
	Phonebook book;
	bool flag = true;
	std::string cmd;

	while (flag) {
		std::cout << "--- Enter your command ---" << std::endl;
		std::getline(std::cin, cmd);

		if (cmd == "Exit") {
			flag = 0;
		} else if (cmd == "Add") {
			book.Add();
		} else if (cmd == "Search") {
			book.Show();
		} else {
			std::cout << "--- Wrong input ---" << std::endl;
		}
	}
	return (0);
}

