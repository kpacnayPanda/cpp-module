#include "Karen.hpp"

int main(int argc, char* argv[]) {
	Karen karen;

	if (argc != 2) {
		std::cout << "Wrong input" << std::endl;
	} else {
		if (karen.complain(argv[1]) == 0) {
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}
