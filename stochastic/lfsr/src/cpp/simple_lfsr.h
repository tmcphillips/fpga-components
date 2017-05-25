#pragma once

namespace simple_lfsr {

	template<unsigned int NBITS>
	int next_random_bits() {

		static int r = 0xc5705a19;

		static unsigned int const mask = (1 << (NBITS)) - 1;

		compute_random_bits: for (int i = 0; i < NBITS; ++i) {

			bool bit31 = r & (1 << 31);
			bool bit29 = r & (1 << 29);
			bool bit25 = r & (1 << 25);
			bool bit24 = r & (1 << 24);

			int newbit = bit31 ^ bit29 ^ bit25 ^ bit24;

			r = (r << 1) | newbit;
		}

		return r & mask;
	}
}
