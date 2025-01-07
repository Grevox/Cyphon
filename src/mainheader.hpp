#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <cstring>
#define FATAL_ERROR -1
#define ERROR 1
#define EXIT_CODE 0
#define NEWLINE '\n'
#define TAB '\t'
#define SIZE 10050
#define LBRACKET '['
#define RBRACKET ']'
#define STOP ';'
#define FUNC 'FUNCTION'
#define COMMENT '@'

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

int readfile(std::string argv, bool firsttime, std::ifstream file);
void readtheline(std::string read);