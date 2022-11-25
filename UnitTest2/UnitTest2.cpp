#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			string str;
			str = "you realy want free tea?";
			bool test = foundOut(str);
			Assert::AreEqual(test, false);
		}
	};
}
