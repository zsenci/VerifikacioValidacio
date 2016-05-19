#include <iostream>
#include <memory>
#include "stdafx.h"

using namespace std;

#ifdef LOGGER_EXPORTS
#define LOGGER_API __declspec(dllexport)
#else
#define LOGGER_API __declspec(dllimport)
#endif

class LOGGER_API CFileExtMngFactory{
private:
	std::shared_ptr<CFileExtMng> fem;
	static std::shared_ptr<CFileExtMngFactory> me;
	CFileExtMngFactory();
public:
	void setFileExtensionManager(std::shared_ptr<CFileExtMng> fm);
	std::shared_ptr<CFileExtMng> getFileExtensionManager();
	static std::shared_ptr<CFileExtMngFactory> getFEMFactory();

};

extern LOGGER_API int nLogAnalyzer;

LOGGER_API int fnLogAnalyzer(void);