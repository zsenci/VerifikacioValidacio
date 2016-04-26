#include <string.h>
#include <iostream>

using namespace std;

class FileExtMng {
public:
	FileExtMng(){};
	virtual ~FileExtMng(){};
	virtual bool isExtValid(string name) = 0;
};

class FakeFileExtMng : public FileExtMng {
private:
	bool value;
public:
	FakeFileExtMng(){};
	~FakeFileExtMng(){};
	bool isExtValid(string name);
	void setValue(bool value);
};