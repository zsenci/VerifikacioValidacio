#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Logger\Logger.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labor1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(isValidFileName_ValidFileName_ReturnsTrue) {

			CFakeFileExtMng* fem = new CFakeFileExtMng();
			fem->setErtek(true);
			CLogger lc(fem);
			string s = "filename.txt";

			Assert::IsTrue(lc.isTheFileValid(s));

		}

	};
}