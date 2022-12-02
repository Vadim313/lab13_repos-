#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t , 0);
		}
	};
}
