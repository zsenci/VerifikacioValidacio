#include "FileExtManager.h"

bool FakeFileExtMng::isExtValid(string name) {
	return value;
}

void FakeFileExtMng::setValue(bool value_new) {
	value = value_new;
}