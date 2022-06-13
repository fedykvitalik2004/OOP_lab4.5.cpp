#include "pch.h"
#include "CppUnitTest.h"
#include "../Parallelepiped.h"
#include "../Parallelepiped.cpp"
#include "../Body.h"
#include "../Body.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTlab44
{
	TEST_CLASS(UTlab44)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Parallelepiped t(4, 7, 2);
			double a = t.Volume();
			Assert::AreEqual(a, 56.0);
		}
	};
}