#include "gtest/gtest.h"
#include "myClass.h"


class ParamTest : public::testing::TestWithParam<string>
{

};

TEST(testMath, myCubeTest)
{
	MyClass mc;
	EXPECT_EQ(true, mc.endsWith("asdlslr"));
}

TEST(testMath2, myCubeTest2)
{
	MyClass mc;
	EXPECT_EQ(true, mc.endsWith("valamislr"));
}

TEST(testMath3, myCubeTest3)
{
	MyClass mc;
	EXPECT_EQ(true, mc.endsWith("valami"));
}


class MyClassTest : public ::testing::Test
{
	MyClass* mc;
	void SetUp()
	{
		mc = new MyClass();

	};
	void TearDown()
	{
		delete mc;
	};
};
//test fixture
TEST_F(MyClassTest, myLogTestFixture)
{
	MyClass mc;
	string s = "asddddslr";
	EXPECT_EQ(true, mc.endsWith(s));
}

//parametrizalt teszt
TEST_P(ParamTest, paramtest)
{
	string name = GetParam();
	MyClass la;
	try {
		EXPECT_EQ(true, la.isValidFileName(name));
		return;
	}
	catch (kivetel& e)
	{
		SUCCEED();
		return;
	}
	ADD_FAILURE() << "kivetel";
}

INSTANTIATE_TEST_CASE_P(exception1, ParamTest, testing::Values("valami.txt", "ab", "filename", "jk"));