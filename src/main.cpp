#include "mainheader.hpp"
void ToBuffer(std::string read, std::ifstream& file) {
	int n = 10;
	if (read == "exit") {
		return;
	}
	std::string buf;
	std::cout << "\n";
	while (read[n] != '\"') {
		buf.push_back(read[n]);
		n++;
	}

	std::cout << buf;

	readfile("idc", false, file);

}

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

int readfile(std::string argv, bool firsttime, std::ifstream &file) {
	std::string readuntilstop;

	int n = 0;

	getline(file, readuntilstop);
	if (readuntilstop == "exit") {
		return EXIT_FUNC;
	}
	readtheline(readuntilstop,file);
	
	//std::cout << "\n" << readuntilstop << "\n";
	//char lol = file.get();
	//std::cout << "\n" << lol;
	//reading file until there is a ;
	return EXIT_CODE;
}
void readtheline(std::string read, std::ifstream& file) {

	
	if (read.substr(0, 8) == "ToBuffer") {
		std::string read2 = read;
		ToBuffer(read2, file);
	}
	else if (read.substr(0,3) == "Add") {
		
	}
	readfile(read,false,file);
}