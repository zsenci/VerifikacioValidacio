#include "stdafx.h"

void CManualMockWebService::logError(const std::string& errorMsg)
{
	error = errorMsg;
}

std::string CManualMockWebService::getError() const {
	return error;
}