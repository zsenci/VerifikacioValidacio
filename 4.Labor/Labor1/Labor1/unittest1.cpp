#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Logger\Logger.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(isTheFileValid_ValidFileName_True) {
			shared_ptr<CFileExtMng> ffm = shared_ptr<CFakeFileExtMng>(new CFakeFileExtMng);
			std::dynamic_pointer_cast<CFakeFileExtMng>(ffm)->setErtek(true);
			CFileExtMngFactory::getFEMFactory()->setFileExtensionManager(ffm);
			CFakeFileExtMng* fem = new CFakeFileExtMng();
			CLogger cl;
			string s = "filename.txt";
			Assert::IsTrue(cl.isTheFileValid(s));
		}
	};
}