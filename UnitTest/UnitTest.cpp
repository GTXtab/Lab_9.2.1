#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.2.1/main.h" 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestFindMaxOrMin)
        {
            Assert::AreEqual(4, SQR(2)); // 2^2 = 4
            Assert::AreEqual(9, SQR(-3)); // (-3)^2 = 9
            Assert::AreEqual(0, SQR(0)); // 0^2 = 0
        }
    };
}
