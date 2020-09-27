/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.
*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>




const char* strC137 = "C137";
const char* strZ286 = "Z286";

int main(int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	// Parse the command line arguments

	//without steps 
	if (ac == 4) {

		int startNum = atoi(av[1]);

		int endNum = atoi(av[2]);

		if (*av[3] == *strZ286) {

			Z286::Morty(startNum, endNum);

			return 0;

		}
		else if (*av[3] == *strC137) {

			C137::Morty(startNum, endNum);

			return 0;
		}
		else {
			std::cout << "ERROR: Unknown dimension!!" << std::endl;

			return -1;
		}
	}


	//with steps 4 command lines
	else if (ac == 5) {


		int startNum = atoi(av[1]);

		int endNum = atoi(av[2]);

		int stepNum = atoi(av[3]);


		if (*av[4] == *strZ286) {

				Z286::Morty(startNum, endNum, stepNum);

				return 0;
		}
		else if (*av[4] == *strC137) {

			C137::Morty(startNum, endNum, stepNum);

			return 0;

		}

		else {

			std::cout << "ERROR: Unknown dimension!!" << std::endl;

			return -1;
		}
	}
}