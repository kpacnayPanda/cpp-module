#include <iostream>

char* merge_array(char *newstr, char *str) {
	int i = 0;

	if (strlen(newstr) > 0) {
		int len = (strlen(newstr) + strlen(str));
		char *tmp = new char[len];
		tmp = newstr;
		i = 0;
		while (newstr[i] != '\0') {
			newstr[i] = tmp[i];
			i++;
		}
	} else {
		newstr = new char[strlen(str)];
	}
	return (newstr);
}

std::string print_str(int argc, char** argv)
{
	char* newstr;
	int i = 1;
	size_t len = 0;

	newstr = new char[0];
	while (i < argc) {
		newstr = merge_array(newstr, argv[i]);
		int j = strlen(newstr);
		while (len < strlen(argv[i])) {
			newstr[j] = argv[i][len];
			j++;
			len++;
		}
		len = 0;
		i++;
	}
	i = 0;
	while (newstr[i]) {
		if (newstr[i] >= 'a' && newstr[i] <= 'z')
			newstr[i] = newstr[i] - 32;
		i++;
	}
	return (newstr);
}

int main(int argc, char** argv)
{
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		std::cout << print_str(argc, argv) << std::endl;
	}
	return (0);
}
