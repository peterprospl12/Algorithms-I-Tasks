#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class BasicString {
private:
	char* str;
public:
	BasicString();
	BasicString(char* orig);
	BasicString(const char* orig);
	BasicString(const BasicString& cpy);
	BasicString(BasicString&& cpy);
	BasicString& operator=(const BasicString& right);
	BasicString& operator=(const char* right);
	BasicString& operator=(BasicString&& right);

	friend std::ostream& operator<<(std::ostream& os, const BasicString& orig);
	~BasicString();
};