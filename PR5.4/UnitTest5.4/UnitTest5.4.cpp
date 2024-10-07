#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.4/PR5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int n = 3;

			t = S0(2, n);
			Assert::AreEqual(t, 1);
		}
	};
}
