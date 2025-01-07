#include "stl.hpp"

int main(int argc, char *argv[]) {
	if (argc <= 1) {
		std::cout << "\nFATAL ERROR: no specifier :\ntry to do: -h to get some more info\n\n";
		return FATAL_ERROR;
	}
	// for now let's only do the interpreter, ok?
	// it will be a LOOOOONG journey
	if (argc >= 2) {
		// argv 1 is what comes after .\a.exe
		if (strcmp("-h", argv[1]) == 0) {
			std::cout << "\n-h : get more info\n-o : start interpreter\n-v : version\n\n";
		}
		else if (strcmp("-v", argv[1]) == 0) {
			std::cout << "\nCyphon interpreter  [CpI]\nVersion: 0.0.1\n\n";
		}
		else if (strcmp("-o", argv[1]) == 0) {
			if (argv[2] == NULL) {
				std::cout << "\nFATAL ERROR: no input files\n\n";
				return FATAL_ERROR;
			}
			if (strstr(argv[2], ".cpi")) {
				std::ifstream file(argv[2]);
				readfile(argv[2],true,file);
				return EXIT_CODE;
			}
			else {
				std::cout << "\nFATAL ERROR: FILE ISNT CPI\n\n";
				return FATAL_ERROR;
			}

		}
		else {
			std::cout << "\nFATAL ERROR\n\n";
			return FATAL_ERROR;
		}
	}
	return EXIT_CODE;
}

int readfile(std::string argv, bool firsttime, std::ifstream file) {
	std::string readuntilstop;
	int n = 0;
	getline(file,readuntilstop)
	std::cout
	//std::cout << "\n" << readuntilstop << "\n";
	//char lol = file.get();
	//std::cout << "\n" << lol;
	//reading file until there is a ;
	return EXIT_CODE;
}
void readtheline(std::string read) {
	if (read == "exit") {
		return;
	}
}