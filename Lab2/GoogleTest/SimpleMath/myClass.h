#include <iostream>

using namespace std;

class MyClass
{
public: MyClass(){
};

		~MyClass(){};
public: bool endsWith(string s);
public: bool isValidFileName(string s);
};

class kivetel :public exception{
public:
	const char *what(){ return "Hibas filename"; };
};