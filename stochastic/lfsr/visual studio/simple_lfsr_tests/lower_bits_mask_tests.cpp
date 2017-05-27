#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace simple_lfsr_tests
{		
	TEST_CLASS(LowerBitsMask_Tests)
	{
	public:

		TEST_METHOD(TestLowerBitsMask_0_Bits)
		{
			simple_lfsr::LowerBitsMask<0> mask;
			Assert::AreEqual(0b0000u, mask.value);
		}

		TEST_METHOD(TestLowerBitsMask_1_Bit)
		{
			simple_lfsr::LowerBitsMask<1> mask;
			Assert::AreEqual( 0b0001u, mask.value );
		}

		TEST_METHOD(TestLowerBitsMask_8_Bits)
		{
			simple_lfsr::LowerBitsMask<8> mask;
			Assert::AreEqual( 0b1111'1111u, mask.value );
		}

		TEST_METHOD(TestLowerBitsMask_15_Bits)
		{
			simple_lfsr::LowerBitsMask<15> mask;
			Assert::AreEqual( 0b0111'1111'1111'1111u, mask.value );
		}

		TEST_METHOD(TestLowerBitsMask_16_Bits)
		{
			simple_lfsr::LowerBitsMask<16> mask;
			Assert::AreEqual(0b1111'1111'1111'1111u, mask.value);
		}

		TEST_METHOD(TestLowerBitsMask_31_Bits)
		{
			simple_lfsr::LowerBitsMask<31> mask;
			Assert::AreEqual(0b0111'1111'1111'1111'1111'1111'1111'1111u, mask.value);
		}

		TEST_METHOD(TestLowerBitsMask_32_Bits)
		{
			simple_lfsr::LowerBitsMask<32> mask;
			Assert::AreEqual(0b1111'1111'1111'1111'1111'1111'1111'1111u, mask.value);
		}

	};
}