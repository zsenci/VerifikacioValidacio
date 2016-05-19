#include <iostream>
#include "stdafx.h"

using namespace std;

#ifdef LOGGER_EXPORTS
#define LOGGER_API __declspec(dllexport)
#else
#define LOGGER_API __declspec(dllimport)
#endif

class CFileExtMng{
public:
	CFileExtMng();
	virtual ~CFileExtMng();
	virtual bool isExtensionValid(std::string name) = 0;

};

class LOGGER_API CFakeFileExtMng :public CFileExtMng{
private:
	bool v;
public:
	CFakeFileExtMng();
	~CFakeFileExtMng();
	bool isExtensionValid(std::string name);
	void setErtek(bool v);
};

extern LOGGER_API int nLogAnalyser;

LOGGER_API int fnLogAnalyser(void);