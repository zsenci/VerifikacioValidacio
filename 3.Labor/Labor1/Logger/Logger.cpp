// Logger.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Logger.h"


// This is an example of an exported variable
LOGGER_API int nLogger=0;

// This is an example of an exported function.
LOGGER_API int fnLogger(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Logger.h for the class definition
CLogger::CLogger()
{
	return;
}

bool CLogger::endsWith(char* s)
{
	char* slf = "slf";
	int j = strlen(s) - 1;
	for (int i = strlen(slf) - 1; i >= 0; i--)
	{
		if (s[j] != slf[i])
			return false;
		j--;
	}
	return true;
}

bool CLogger::isTheFileValid(string s)
{
	if (s.length() < 3)
		//throw(someException());
		throw(invalidFileName());
	else
		return true;
}

CLogger::CLogger(CFakeFileExtMng* fem){
	logFem = fem;
}