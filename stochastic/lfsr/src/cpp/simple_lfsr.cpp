
#include "simple_lfsr.h"

namespace simple_lfsr {

	int next_byte() {

		static int r = 0xc5705a19;

		compute_random_bits: for (int i = 0; i < 8; ++i) {

			bool bit31 = r & (1 << 31);
			bool bit29 = r & (1 << 29);
			bool bit25 = r & (1 << 25);
			bool bit24 = r & (1 << 24);

			int newbit = bit31 ^ bit29 ^ bit25 ^ bit24;

			r = (r << 1) | newbit;
		}

		return r & 0xff;
	}
}