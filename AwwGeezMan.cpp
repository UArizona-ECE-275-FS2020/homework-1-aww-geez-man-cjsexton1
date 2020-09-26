#include <iostream>
#include <cstdio>
using namespace std;

string s_b("Z286");

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

		cout << "Morty " << av[3] << " says:" << endl;

	
		int startNum = atoi(av[1]);
		
		int endNum = atoi(av[2]);
		

		if (av[3] == s_b) {
			
			for (startNum; startNum <= endNum; startNum++) {
				if (startNum % 15 == 0) {
					cout << startNum << ": naM zeeG wwA" << endl;
				}
				else if (startNum % 5 == 0) {
					cout << startNum << ": zeeG" << endl;
				}
				else if (startNum % 3 == 0) {
					cout << startNum << ": wwA" << endl;
				}
				else {
					cout << startNum << ": " << endl;
				}
			}

		

		}
		else if (av[3] != s_b) {
			

			for (startNum; startNum <= endNum; startNum++) {
				if (startNum % 15 == 0) {
					cout << startNum << ": Aww Geez Man" << endl;
				}
				else if (startNum % 5 == 0) {
					cout << startNum << ": Geez" << endl;
				}
				else if (startNum % 3 == 0) {
					cout << startNum << ": Aww" << endl;
				}
				else {
					cout << startNum << ": " << endl;
				}
			}
		}
			


	}
	

	else if (ac == 5) {

		cout << "Morty " << av[3] << " says:" << endl;


		int startNum = atoi(av[1]);

		int endNum = atoi(av[2]);

		int stepNum = atoi(av[3]);


		if (av[4] == s_b) {

			for (startNum; startNum <= endNum; startNum = startNum + stepNum) {
				if (startNum % 15 == 0) {
					cout << startNum << ": naM zeeG wwA" << endl;
				}
				else if (startNum % 5 == 0) {
					cout << startNum << ": zeeG" << endl;
				}
				else if (startNum % 3 == 0) {
					cout << startNum << ": wwA" << endl;
				}
				else {
					cout << startNum << ": " << endl;
				}
			}
		}
		else if (av[4] != s_b) {


			for (startNum; startNum <= endNum; startNum = startNum + stepNum) {
				if (startNum % 15 == 0) {
					cout << startNum << ": Aww Geez Man" << endl;
				}
				else if (startNum % 5 == 0) {
					cout << startNum << ": Geez" << endl;
				}
				else if (startNum % 3 == 0) {
					cout << startNum << ": Aww" << endl;
				}
				else {
					cout << startNum << ": " << endl;
				}
			}
		}



	}


	// Depending on the dimension of the arguments, call the appropriate Morty
	// function


	return 0;
}