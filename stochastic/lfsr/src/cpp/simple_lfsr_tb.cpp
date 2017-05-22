
#include <iostream>
#include <sstream>

#include "simple_lfsr.h"

using std::cout;
using std::endl;
using std::stringstream;

int main() {

	stringstream ss;

	for (int i = 0; i < 20; ++i) {
		ss << simple_lfsr::next_byte() << endl;
	}

	cout << ss.str();

	if (ss.str() != 
		"52\n"
		"138\n"
		"184\n"
		"170\n"
		"129\n"
		"82\n"
		"37\n"
		"224\n"
		"121\n"
		"129\n"
		"58\n"
		"67\n"
		"63\n"
		"86\n"
		"98\n"
		"31\n"
		"188\n"
		"166\n"
		"98\n"
		"80\n") return -1;

	return 0;
}
