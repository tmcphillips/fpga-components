#pragma once

#include "simple_lfsr_types.h"

namespace simple_lfsr {

	template<int TRUE_BIT_COUNT>
	struct LowerBitsMask {
		lfsr_t const value = (1 << TRUE_BIT_COUNT) - 1;
	};

	template<int BIT_INDEX>
	bool bit(lfsr_t n) {
		return n & (1 << BIT_INDEX);
	};

	template<int RANDOM_BIT_COUNT>
	int next_random_bits() {
		
		static lfsr_t r = LFSR_INIT_VALUE;
		static LowerBitsMask<RANDOM_BIT_COUNT> mask;
		
		compute_random_bits: for (int i = 0; i < RANDOM_BIT_COUNT; ++i) {
			lfsr_t new_random_bit = bit<31>(r) ^ bit<29>(r) ^ bit<25>(r) ^ bit<24>(r);
			r = (r << 1) | new_random_bit;
		}

		return r & mask.value;
	}
}
