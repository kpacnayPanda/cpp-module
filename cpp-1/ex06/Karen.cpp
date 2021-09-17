#include "Karen.hpp"


int Karen::complain(std::string level) {
	t_level list[4] = {
		{&Karen::debug},
		{&Karen::info},
		{&Karen::warning},
		{&Karen::error}
	};

	void (Karen::*it)(void);

	std::string level_list[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string *ptr = std::find(std::begin(level_list), std::end(level_list), level);
	int index = ptr - level_list;

	int flag = 0;
	switch (index) {
		case (0):
			it = list[0].f;
			(this->*it)();
		case (1):
			it = list[1].f;
			(this->*it)();
		case (2):
			it = list[2].f;
			(this->*it)();
		case (3):
			it = list[3].f;
			(this->*it)();
			flag++;
	}
	return (flag);
}

void	Karen::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Karen::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
