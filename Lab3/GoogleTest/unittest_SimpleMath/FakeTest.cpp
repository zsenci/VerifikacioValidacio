#include "gtest/gtest.h"
#include "myClass.h"
#include <string.h>

TEST(MyClass, isValidFileName_ValidFileName_ReturnsTrue) {

	FakeFileExtMng* fem = new FakeFileExtMng();
	fem->setValue(true);
	MyClass mc(fem);
	string s = "filename.sln";
	ASSERT_TRUE(mc.isValidFileName(s));
}