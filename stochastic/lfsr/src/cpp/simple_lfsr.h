#pragma once

namespace simple_lfsr {

	template<unsigned int N>
	struct LowerBitsMask {
		unsigned int const value = (1 << N) - 1;
	};

	template<unsigned int B>
	bool bit(unsigned int n) {
		return n & (1 << B);
	};

	template<unsigned int N>
	int next_random_bits() {
		
		static unsigned int r = 0xc5705a19;
		static LowerBitsMask<N> mask;
		
		compute_random_bits: for (int i = 0; i < N; ++i) {
			int new_random_bit = bit<31>(r) ^ bit<29>(r) ^ bit<25>(r) ^ bit<24>(r);
			r = (r << 1) | new_random_bit;
		}

		return r & mask.value;
	}
}
