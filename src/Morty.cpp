/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

void C137::Morty(int start, int stop) {

	std::cout << "Morty C137 says:" << std::endl;

	for (start; start <= stop; start++) {
		if (start % 15 == 0) {
			std::cout << start << ": Aww Geez Man" << std::endl;
		}
		else if (start % 5 == 0) {
			std::cout << start << ": Geez" << std::endl;
		}
		else if (start % 3 == 0) {
			std::cout << start << ": Aww" << std::endl;
		}
		else {
			std::cout << start << ": " << std::endl;
		}
	}
}

void C137::Morty(int start, int stop, int step) {
	
	std::cout << "Morty C137 says:" << std::endl;
	
	for (start; start <= stop; start = step + start) {
		if (start % 15 == 0) {
			std::cout << start << ": Aww Geez Man" << std::endl;
		}
		else if (start % 5 == 0) {
			std::cout << start << ": Geez" << std::endl;
		}
		else if (start % 3 == 0) {
			std::cout << start << ": Aww" << std::endl;
		}
		else {
			std::cout << start << ": " << std::endl;
		}
	}
}

void Z286::Morty(int start, int stop) {
	
	std::cout << "Morty C286 says:" << std::endl;

	for (start; start <= stop; start++) {
		if (start % 15 == 0) {
			std::cout << start << ": naM zeeG wwA" << std::endl;
		}
		else if (start % 5 == 0) {
			std::cout << start << ": zeeG" << std::endl;
		}
		else if (start % 3 == 0) {
			std::cout << start << ": wwA" << std::endl;
		}
		else {
			std::cout << start << ": " << std::endl;
		}
	}
}

void Z286::Morty(int start, int stop, int step) {
	
	std::cout << "Morty C286 says:" << std::endl;

	for (start; start <= stop; start = step + start) {
		if (start % 15 == 0) {
			std::cout << start << ": naM zeeG wwA" << std::endl;
		}
		else if (start % 5 == 0) {
			std::cout << start << ": zeeG" << std::endl;
		}
		else if (start % 3 == 0) {
			std::cout << start << ": wwA" << std::endl;
		}
		else {
			std::cout << start << ": " << std::endl;
		}
	}
}
// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 
