#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(2);
			Assert::AreEqual(t, 2);
		}
	};
}
