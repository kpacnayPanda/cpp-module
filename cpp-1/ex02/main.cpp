#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "adresses:" << std::endl;
	std::cout << "string " << &str << std::endl;
	std::cout << "ptr " << stringPTR << std::endl;
	std::cout << "ref " << &stringREF << std::endl;
	std::cout << "\nstrings:" << std::endl;
	std::cout << "ptr " << *stringPTR << std::endl;
	std::cout << "ref " << stringREF << std::endl;
	return (0);
}
