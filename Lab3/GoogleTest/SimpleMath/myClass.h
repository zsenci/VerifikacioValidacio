#include "FileExtManager.h"

using namespace std;

class MyClass
{
private:
	FakeFileExtMng* fem;
public: MyClass(FakeFileExtMng* fem);
		MyClass(){};
		~MyClass(){};
public: bool endsWith(string s);
public: bool isValidFileName(string s);
};

class kivetel :public exception{
public:
	const char *what(){ return "Hibas filename"; };
};