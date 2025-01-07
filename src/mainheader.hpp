#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

enum data {
	INT,
	INT_L,
	FLT,
	FLT_L,
	CHR,
	STR,
	BOL,
	U_INT,
	U_FLT,
};

int readfile(std::string argv);