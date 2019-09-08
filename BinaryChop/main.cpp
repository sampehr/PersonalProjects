#include <iostream>
#include <array>
#include <random>

using namespace std;

const int DEFAULT_ARRAY_SIZE = 100;
const int DEFAULT_MIN_ELEMENT_VALUE = 0;
const int DEFAULT_MAX_ELEMENT_VALUE = 100;

bool commandlineInputValidation(int, char*[]);

int main(int argc, char* argv[]) {
	/*
	command line arguments:
	argv[1]: size of arracy
	argv[2]: minimum value of array elements
	argv[3]: maximum value of array elements
	*/
	if (commandlineInputValidation(argc, argv)) { //this if statement is the primary body of the program
		


	}
		return 0;
}

bool commandlineInputValidation(int argc, char* argv[]) {
	bool pass = true;

	if (argc != 4) {
		cout << "you have entered an incorrect number of arguments. try again" << endl;
		pass = false;
	}
	else {
		if (atoi(argv[2]) > atoi(argv[3])) {
			cout << "the minimum is larger than the maximum. try again" << endl;
			pass = false;
		}

		if (atoi(argv[1]) <= 0) {
			cout << "the array size entered in invalid. please enter an integer greater than 1." << endl;
			pass = false;
		}
	}

	return pass;
}

