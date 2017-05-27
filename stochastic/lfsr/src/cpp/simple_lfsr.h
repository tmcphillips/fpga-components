#pragma once

namespace simple_lfsr {

	template<unsigned int N>
	struct LowerBitsMask {
		unsigned int const value = (1 << N) - 1;
	};

	template<unsigned int N>
	int next_random_bits() {

		static int r = 0xc5705a19;

		static LowerBitsMask<N> mask;

		compute_random_bits: for (int i = 0; i < N; ++i) {

			bool bit31 = r & (1 << 31);
			bool bit29 = r & (1 << 29);
			bool bit25 = r & (1 << 25);
			bool bit24 = r & (1 << 24);

			int newbit = bit31 ^ bit29 ^ bit25 ^ bit24;

			r = (r << 1) | newbit;
		}

		return r & mask.value;
	}
}
