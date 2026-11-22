#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.2double/Lab5.2double.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab52doubleTest
{
	TEST_CLASS(Lab52doubleTest)
	{
	public:

		TEST_METHOD(TestSum)
		{
			double x = 0.5;
			double expected = 1.284025;
			double eps = 0.0001;
			int n = 0;
			double s = 0;
			double actual = Sum(x, eps, n, s);
			Assert::AreEqual(expected, actual, 0.0001);
		}
		TEST_METHOD(TestA)
		{
			double x = 2.0;
			double a = 4.0;
			int n = 2;
			double expected = 8.0;
			double actual = A(x, n, a);
			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}