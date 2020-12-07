#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab812UT
{
	TEST_CLASS(Lab812UT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = { 'z', 'q', 'q', 'q', 'q' };

			bool functionResult = IsOrNot(str,0);

			Assert::AreEqual(true, functionResult);


		}
	};
}
