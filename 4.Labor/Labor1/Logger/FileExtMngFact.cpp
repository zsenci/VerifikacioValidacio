#include "stdafx.h"

using std::shared_ptr;

shared_ptr<CFileExtMngFactory> CFileExtMngFactory::me = nullptr;
CFileExtMngFactory::CFileExtMngFactory(){}

shared_ptr<CFileExtMng> CFileExtMngFactory::getFileExtensionManager()
{
	return fem;
}

void CFileExtMngFactory::setFileExtensionManager(shared_ptr<CFileExtMng> fm)
{
	fem = fm;
}

shared_ptr<CFileExtMngFactory> CFileExtMngFactory::getFEMFactory()
{
	if (me == nullptr)
	{
		me = shared_ptr<CFileExtMngFactory>(new CFileExtMngFactory);
	}
	return me;
}