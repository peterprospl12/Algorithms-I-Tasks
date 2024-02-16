#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "String.h"

using std::cout;
using std::cin;
using std::endl;



int main()
{
    // constructor ()
    BasicString a;


    // 	BasicString(char* orig);
    char temp[] = "Hello";
    BasicString b(temp);
    cout << "b " << b << endl;


    // BasicString(const char* orig);
    BasicString c = "temp";
    cout << "c " << c << endl;
   
    
    //BasicString& operator=(const char* right);
    BasicString d;
    d = "temp";
    cout << "d " << d << endl;


    //operator=(const BasicString& right
    BasicString e;
    e = d;
    cout << "e " << e << endl;

    
    //BasicString(const BasicString& cpy)
    BasicString f(e);
    cout << "f " << f << endl;

    // BasicString(BasicString&& cpy)
    BasicString g(std::move(f));
    cout << "g " << g << endl;

    
    //BasicString& operator=(BasicString&& right);
    BasicString h;
    h = std::move(g);
    cout << "h " << h << endl;


    //BasicString(const BasicString& cpy)
    BasicString i = h;
    cout << "i " << i << endl;
    return 0;
}