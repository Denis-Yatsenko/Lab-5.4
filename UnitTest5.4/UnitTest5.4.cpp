#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int q;
			q = S0(0);
			Assert::AreEqual(q, 0);
		}
		TEST_METHOD(TestMethod2)
		{
			int q;
			q = S1(0);
			Assert::AreEqual(q, 0);
		}
		TEST_METHOD(TestMethod3)
		{
			int q;
			q = S2(0);
			Assert::AreEqual(q, 0);
		}
		TEST_METHOD(TestMethod4)
		{
			int q;
			q = S3(0,0,1);
			Assert::AreEqual(q, 0);
		}
		TEST_METHOD(TestMethod5)
		{
			int q;
			q = S4(0,0,1);
			Assert::AreEqual(q, 0);
		}
	};
}
