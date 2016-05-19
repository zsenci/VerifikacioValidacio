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

extern LOGGER_API int nLogAnalyzer;

LOGGER_API int fnLogAnalyzer(void);