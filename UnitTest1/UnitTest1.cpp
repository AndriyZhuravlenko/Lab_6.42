#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_6.42\Lab_6.42/Source.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 1, 2, -2, -1, 0 };
			int t = Sum(A, 5, 0);
			Assert::AreEqual(0, t);
		}
	};
}
