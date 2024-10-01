#include "pch.h"
#include "CppUnitTest.h"
#include "../../lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = y(1.5);
			double expected = exp(1.5) / (1 + exp(1.5) + sin(1.5));
			Assert::AreEqual(expected, result, 0.000001);  
		}
	};
}
