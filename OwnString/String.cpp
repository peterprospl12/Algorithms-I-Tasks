#include "String.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>


BasicString::BasicString()
	:str(nullptr) {
	std::cout << "constructor ()" << std::endl;
	str = new char[1];
	str[0] = '\0';
}

BasicString::BasicString(char* orig) {
	std::cout << "constructor char* orig" << std::endl;

	str = new char[strlen(orig) + 1];
	strcpy(str, orig);
	str[strlen(orig)] = '\0';
}

BasicString::BasicString(const char* orig) {
	std::cout << "constructor const char* orig" << std::endl;

	str = new char[strlen(orig) + 1];
	strcpy(str, orig);
	str[strlen(orig)] = '\0';
}

BasicString::BasicString(const BasicString& cpy) {
	std::cout << "BasicString(const BasicString& cpy)" << std::endl;
	str = new char[strlen(cpy.str) + 1];
	strcpy(str, cpy.str);
	str[strlen(cpy.str)] = '\0';
}

BasicString::BasicString(BasicString&& cpy)
	:str(cpy.str) {
	std::cout << "BasicString(BasicString&& cpy)" << std::endl;
	cpy.str = nullptr;
}

BasicString& BasicString::operator=(const BasicString& right) {
	std::cout << "operator=(const BasicString& right" << std::endl;
	
	delete[] str;
	str = new char[strlen(right.str) + 1];
	strcpy(str, right.str);
	str[strlen(right.str)] = '\0';
	return *this;
}

BasicString& BasicString::operator=(const char* right) {
	std::cout << "operator=(const char* right" << std::endl;

	delete[] str;
	str = new char[strlen(right) + 1];
	strcpy(str, right);
	str[strlen(right)] = '\0';
	return *this;
}



BasicString& BasicString::operator=(BasicString&& right) 
{
	std::cout << "BasicString::operator=(BasicString&& right" << std::endl;
	delete[] str;
	str = right.str;
	right.str = nullptr;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const BasicString& orig) {
	os << orig.str << std::endl;
	return os;
}

BasicString::~BasicString() {
	delete[] str;
}