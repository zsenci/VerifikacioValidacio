#include <iostream>
#include "stdafx.h"

#ifdef LOGGER_EXPORTS
#define LOGGER_API __declspec(dllexport)
#else
#define LOGGER_API __declspec(dllimport)
#endif

class LOGGER_API CManualMockWebService : public WebService
{
public:
	virtual void logError(const std::string& errorMsg);
	std::string getError() const;

private:
	std::string error;
};



extern LOGGER_API int nLogAnalyzer;

LOGGER_API int fnLogAnalyzer(void);