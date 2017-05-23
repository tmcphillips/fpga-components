#pragma line 1 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr.cpp"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr.cpp"
#pragma empty_line
#pragma line 1 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr.h" 1
#pragma empty_line
#pragma empty_line
namespace simple_lfsr {
#pragma empty_line
 int next_byte();
}
#pragma line 3 "C:/Users/tmcphill/GitRepos/fpga-components/stochastic/lfsr/src/cpp/simple_lfsr.cpp" 2
#pragma empty_line
namespace simple_lfsr {
#pragma empty_line
 int next_byte() {
#pragma empty_line
  static int r = 0xc5705a19;
#pragma empty_line
  compute_random_bits: for (int i = 0; i < 8; ++i) {
#pragma empty_line
   bool bit31 = r & (1 << 31);
   bool bit29 = r & (1 << 29);
   bool bit25 = r & (1 << 25);
   bool bit24 = r & (1 << 24);
#pragma empty_line
   int newbit = bit31 ^ bit29 ^ bit25 ^ bit24;
#pragma empty_line
   r = (r << 1) | newbit;
  }
#pragma empty_line
  return r & 0xff;
 }
}
