#include <iostream>
#include <string>
#include <fstream>

int error_handle(std::string error) {
	std::cout << error << std::endl;
	exit (1);
}

int main(int argc, char *argv[]) {
	if (argc != 4 || (std::strlen(argv[2]) == 0) || (std::strlen(argv[3]) == 0)) {
		error_handle("Wrong input");
	}

	std::string new_file_name = argv[1];
	new_file_name.append(".replace");

	std::ifstream old_file;
	old_file.open(argv[1]);
	if (!old_file.is_open()) {
		error_handle("Cannot open file");
	}

	std::ofstream created_file;
	created_file.open(new_file_name);
	if (!created_file.is_open()) {
		old_file.close();
		error_handle("Cannot create a new file");
	}

	std::string content;
	while (true) {
		std::getline(old_file, content);
		while (true) {
			size_t index = content.find(argv[2]);
			if (index == std::string::npos) {
				created_file << content;
				break;
			}
			created_file << content.substr(0, index) << argv[3];
			content = content.substr(index + std::strlen(argv[2]));
		}
		if (old_file.eof())
			break;
		created_file << std::endl;
	}
	return (0);
}
