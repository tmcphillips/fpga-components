
#include <iostream>

int next_byte();

int main() {
	
	for (int i = 0; i < 100000; i++) {
		next_byte();
	}

	for (int i = 0; i < 20; ++i) {
		std::cout << next_byte() << std::endl;
	}
		
	return 0;
}

int next_byte() {

	static int r = 0xc5705a19;

	for (int i = 0; i < 8; ++i) {

		bool bit31 = r & (1 << 31);
		bool bit29 = r & (1 << 29);
		bool bit25 = r & (1 << 25);
		bool bit24 = r & (1 << 24);

		bool newbit = bit31 ^ bit29 ^ bit25 ^ bit24;

		r = (r << 1) | newbit;
	}
	
	return r & 0xff;
}


