#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Logger\Logger.h"
#include <memory>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labor1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			std::shared_ptr<WebService> webService(
				std::shared_ptr<CManualMockWebService>(new CManualMockWebService)
				);

			CLogger cl(webService);

			cl.isTheFileValid("abc");
			string a = "abc";
			Assert::AreEqual(a, std::dynamic_pointer_cast<CManualMockWebService>(webService)->getError());
		}

	};
}