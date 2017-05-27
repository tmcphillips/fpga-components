#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace simple_lfsr_tests
{
	TEST_CLASS(BitSelect_Tests)
	{

	public:

		TEST_METHOD(TestBitSelect_Bit_0)
		{
			Assert::IsFalse( simple_lfsr::bit<0>(0b0000) );
			Assert::IsTrue(  simple_lfsr::bit<0>(0b0001) );
		}

		TEST_METHOD(TestBitSelect_Bit_1)
		{
			Assert::IsFalse( simple_lfsr::bit<1>(0b0000) );
			Assert::IsTrue(  simple_lfsr::bit<1>(0b0010) );
		}

		TEST_METHOD(TestBitSelect_Bit_30)
		{
			Assert::IsFalse( simple_lfsr::bit<30>(0b0000'0000'0000'0000'0000'0000'0000'0000) );
			Assert::IsTrue(  simple_lfsr::bit<30>(0b0100'0000'0000'0000'0000'0000'0000'0000) );
		}

		TEST_METHOD(TestBitSelect_Bit_31)
		{
			Assert::IsFalse( simple_lfsr::bit<31>(0b0000'0000'0000'0000'0000'0000'0000'0000) );
			Assert::IsTrue(  simple_lfsr::bit<31>(0b1000'0000'0000'0000'0000'0000'0000'0000) );
		}
	};
}