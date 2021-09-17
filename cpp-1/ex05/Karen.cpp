#include "Karen.hpp"


void Karen::complain(std::string level) {
	t_level list[4] = {
		{&Karen::debug},
		{&Karen::info},
		{&Karen::warning},
		{&Karen::error}
	};

	void (Karen::*it)(void);

	std::string level_list[] = {"Debug", "Info", "Warning", "Error"};
	std::string *ptr = std::find(std::begin(level_list), std::end(level_list), level);
	int index = ptr - level_list;

	it = list[index].f;
	(this->*it)();
	std::cout << std::endl;
}

void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
}

void	Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now.";
}
